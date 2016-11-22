# 07/11/16
# A simple expressive language following Quorums direction
# Jake Language

integer a = 5
number b = 5.0
boolean c = true
text d = 'Hello'
#################
int a = 5;
float b = 5.0;
boolean c = true;
String d = "Hello";


action add uses integer a, integer b and integer c
    return a + b + c
end
#################
public int add(int a, int b, int c){
    return a + b + c;
}


integer e = add 1, 2 and 3
#################
int e = add(1, 2, 3)


data person
    text name
    integer age
end
##############
class Person{
    public String name;
    public int age;
}


new person brad
###############
Person brad = new Person();


brad's name = 'Bradley Cooper'
brad's age = 34
################
brad.name = "Bradley Cooper";
brad.age = 34;



if brad's name is 'Bradley Cooper'
    playDrum
otherwise
    playPiano
end
##################################
if(brad.name.equals("Bradley Cooper")){
    playDrum();
}
else{
    playPiano();
}


if x is still 34 repeat
    do nothing
end
#############################
while(x == 34){

}


if brad's age is more than jake's age
    startPlaying
end
#################################
if(brad.age > jake.age){
    startPlaying()
}
