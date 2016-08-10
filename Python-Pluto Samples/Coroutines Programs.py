# countdown.py
#
# A simple generator function

def countdown(n):
    print "Counting down from", n
    while n > 0:
        yield n
        n -= 1
    print "Done counting down"

# Example use
if __name__ == '__main__':
    for i in countdown(10):
        print i

----------------------------------------------------------------------------------

# follow.py
#
# A generator that follows a log file like Unix 'tail -f'.
#
# Note: To see this example work, you need to apply to 
# an active server log file.  Run the program "logsim.py"
# in the background to simulate such a file.  This program
# will write entries to a file "access-log".

import time

import time
def follow(thefile):
    thefile.seek(0,2)      # Go to the end of the file
    while True:
         line = thefile.readline()
         if not line:
             time.sleep(0.1)    # Sleep briefly
             continue
         yield line

# Example use
if __name__ == '__main__':
    logfile = open("access-log")
    for line in follow(logfile):
        print line,
----------------------------------------------------------------------------------

# pipeline.py
#
# An example of setting up a processing pipeline with generators

def grep(pattern,lines):
    for line in lines:
        if pattern in line:
             yield line

if __name__ == '__main__':
    from follow import follow

    # Set up a processing pipe : tail -f | grep python
    logfile  = open("access-log")
    loglines = follow(logfile)
    pylines  = grep("python",loglines)

    # Pull results out of the processing pipeline
    for line in pylines:
        print line,


------------------------------------------------------------------


# coroutine.py
#
# A decorator function that takes care of starting a coroutine
# automatically on call.

def coroutine(func):
    def start(*args,**kwargs):
        cr = func(*args,**kwargs)
        cr.next()
        return cr
    return start

# Example use
if __name__ == '__main__':
    @coroutine
    def grep(pattern):
        print "Looking for %s" % pattern
        while True:
            line = (yield)
            if pattern in line:
                print line,

    g = grep("python")
    # Notice how you don't need a next() call here
    g.send("Yeah, but no, but yeah, but no")
    g.send("A series of tubes")
    g.send("python generators rock!")

-------------------------------------------------------------------------

# cofollow.py
#
# A simple example showing how to hook up a pipeline with
# coroutines.   To run this, you will need a log file.
# Run the program logsim.py in the background to get a data
# source.

from coroutine import coroutine

# A data source.  This is not a coroutine, but it sends
# data into one (target)

import time
def follow(thefile, target):
    thefile.seek(0,2)      # Go to the end of the file
    while True:
         line = thefile.readline()
         if not line:
             time.sleep(0.1)    # Sleep briefly
             continue
         target.send(line)

# A sink.  A coroutine that receives data

@coroutine
def printer():
    while True:
         line = (yield)
         print line,

# Example use
if __name__ == '__main__':
    f = open("access-log")
    follow(f,printer())

---------------------------------------------------------------

# benchmark.py
#
# A micro benchmark comparing the performance of sending messages into
# a coroutine vs. sending messages into an object

# An object
class GrepHandler(object):
    def __init__(self,pattern, target):
        self.pattern = pattern
        self.target = target
    def send(self,line):
        if self.pattern in line:
            self.target.send(line)

# A coroutine
from coroutine import coroutine

@coroutine
def grep(pattern,target):
    while True:
        line = (yield)
        if pattern in line:
            target.send(line)

# A null-sink to send data
@coroutine
def null(): 
    while True: item = (yield)

# A benchmark
line = 'python is nice'
p1   = grep('python',null())          # Coroutine
p2   = GrepHandler('python',null())   # Object

from timeit import timeit

print "coroutine:", timeit("p1.send(line)",
                          "from __main__ import line, p1")

print "object:", timeit("p2.send(line)",
                        "from __main__ import line, p2")
