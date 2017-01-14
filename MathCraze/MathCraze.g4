grammar MathCraze;

NUM	: [0-9]+ ('.' [0-9]+)?;
WS	: [ \t]+ -> skip;
NL	: '\r'? '\n' -> skip;
NAME: [a-zA-Z_][a-zA-Z_0-9]*;
ADD: '+';
SUB : '-';
MUL : '*';
DIV : '/';
POW : '^';

equal
    : add # add1
    | NAME '=' equal # assign
    ;
add
    : mul # mul1
    | add op=('+'|'-') mul # addSub
    ;
mul
    : exponent # power1
    | mul op=('*'|'/') exponent # mulDiv
    ;
exponent
    : expr # expr1
    | expr '^' exponent # power
    ;
expr
    : NUM # num
    | NAME # name
    | '(' add ')' # parens
    ;
