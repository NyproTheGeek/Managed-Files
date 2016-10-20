// 18/10/16
grammar MathJunkie;

WS: [ \t]+ -> skip;
NL: (\r?\n)+;
NUM: ('-'|'+')? [0-9]+ ('.' [0-9]+ ('e' ('-'|'+')? [0-9]+)?)?;
IDEN: [a-zA-Z]+ ;

func_call: ':' IDEN '{' param? '}';

stat: expr (NL|';');

bin_eq: expr '=' expr;
bin_plus: bin_mul ('+'|'-') bin_mul | bin_plus ('+'|'-') bin_mul;
bin_mul: bin_exp ('*'|'/') bin_exp | bin_mul ('*'|'/') bin_exp;
bin_exp: paren '^' paren | paren '^' bin_exp; // right associative
paren: '(' expr ')' | IDEN;

expr: bin_eq | bin_plus | bin_mul | bin_exp | paren;
