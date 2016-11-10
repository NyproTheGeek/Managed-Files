# 07/11/16
# A simple expressive language following Quorum's direction
# Jake Language

integer a = 5
number b = 5.0
boolean c = true
text d = 'Hello'

action add uses integer a, integer b and integer c
    return a + b + c
end

integer e = add using a, b and c

data person
    text name
    integer age
end

new person brad

brad's name = 'Bradley Cooper'
brad's age = 34

if brad's name is 'Bradley Cooper'
    playDrum
otherwise
    playPiano
end

repeat
    do nothing
if x is still 34

if x is still 34 repeat
    do nothing
end

if brad's age is more than jake's age
    startPlaying
end
