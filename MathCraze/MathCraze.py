from sys import stdout, stdin, argv
from antlr4 import *
from antlr4.InputStream import InputStream
from MathCrazeLexer import MathCrazeLexer
from MathCrazeParser import MathCrazeParser
from Visitor import Visitor

def main(argv):
    usingFile = False
    # if argv is not None:
    #     inputStream = FileStream(sys.argv[1])
    #     usingFile = True
    while True:
        stdout.write("mathjunkie>> ")
        stdout.flush() # this flushes the output out immediately.
        if not usingFile:
            inputStream = InputStream(stdin.readline())
        lexer = MathCrazeLexer(inputStream)
        tokenStream = CommonTokenStream(lexer)
        parser = MathCrazeParser(tokenStream)
        tree = parser.equal()
        # lispTree = tree.toStringTree(recog=parser)
        # print(lispTree)
        visitor = Visitor()
        print(visitor.visit(tree))



if __name__ == '__main__':
    if len(argv) > 1:
        main(argv)
    else:
        main(None)
