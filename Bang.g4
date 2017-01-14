// 18/10/16
// Bang0.0.83
grammar Bang;

DSP: NL[ \t] -> skip;
KSP: NL[ \t];
NL: ('\r'?'\n')+;
IDEN: [a-zA-Z][a-zA-Z_]*; // TODO Will extend this to UTF-8 later
A_NUM: ('-'|'+')? [0-9] ('_'? [0-9])* ('e' ('-'|'+')? [0-9]+)?
    ('_' [a-zA-Z] [a-zA-Z0-9]*)? ('_' [a-zA-Z] [a-zA-Z0-9]*)?; // TODO Needs Work // Preceding +/- needs assessment
B_NUM: ('-'|'+')? ([0-9] ('_'?[0-9])*)? '.' [0-9] ('_'? [0-9])*
    ('e' ('-'|'+')? [0-9]+)? ('_' [a-zA-Z] [a-zA-Z0-9]*)?; // TODO Needs Work // Preceding +/- needs assessment
STRING: '"'/*Character*/'"'; // TODO Needs Work
NS_STRING: [a-zA-Z][a-zA-Z_]*'"'/*Character*/'"'; // TODO Needs Work
REGEX: ' '; // TODO Needs Work
SYMBOL: ' '; // TODO Needs Work
NS_SYMBOL: ' '; // TODO Needs Work

ML_COMMENT: '#='(.*'=#')*?; // TODO Needs Work

NUM: A_NUM|B_NUM;
LIT: STRING|NS_STRING|IDEN|NUM;

// KEYWORDS
REF: ;
MOD0: 'priv'|'pack'|'prod'|'rpriv'|'rpack'|'rprod';
STICKY: 'sticky';
HOLD: 'hold';
ASS: '='|'=:'|ASS0;
ASS0: '::'|'<:'|'>:';
VAR: 'var'|LET;
LET: 'let';
FUNC: 'func'|'match';
MOD: 'hide'|'rhide'|MOD0;
TYPE: 'type';
AB: 'ab';
MODULE: 'module';
ENUM: 'enum';
LOOP: 'loop';
WHILE: 'while';
IF: 'if';
FOR: 'for';
TRY: 'try';
CATCH: 'catch';

// PUNCTUATORS
OP_PAREN: '(';
CL_PAREN: ')';
OP_BRACE: '[';
CL_BRACE: ']';
OP_CURLY_BRACE: '{';
CL_CURLY_BRACE: '}';
COLON: ':';
SEMICOLON: ';';
EXC_MARK: '!';
QUES_MARK: '?';
COMMA: ',';
DOLLAR: '$';

// OPERATORS
EQUAL: '=';
PLUS: '+';
MINUS: '-';
MUL: '/';
DIV: '/';
HAT: '^';
D_BAR: '||';



obj: ;



m_obj_decl: VAR MOD? IDEN obj_rhs?;
f_obj_decl: VAR STICKY? IDEN obj_rhs?;
l_obj_decl: VAR HOLD? IDEN obj_rhs?;
obj_rhs: ; // TODO Needs Work

m_func_decl: FUNC MOD? IDEN EXC_MARK? OP_PAREN param? CL_PAREN (ASS0? IDEN)? COLON?;
f_func_decl: FUNC IDEN EXC_MARK? OP_PAREN param? CL_PAREN (ASS0? IDEN)? COLON?;

param: param0 (COMMA param0)*;
param0: (LET? IDEN)+ obj_rhs?;

type_decl: TYPE AB? MOD0? IDEN OP_PAREN param? CL_PAREN OP_BRACE IDEN (COMMA IDEN)* CL_BRACE COLON?;
enum_decl: ENUM MOD0? IDEN OP_PAREN e_param? CL_PAREN OP_BRACE IDEN (COMMA IDEN)* CL_BRACE COLON?;
module_decl: MODULE MOD0? IDEN;

e_param: e_param0 (COMMA e_param0);
e_param0: IDEN (OP_PAREN param? CL_PAREN)?;

try_decl: TRY; // TODO
catch_decl: CATCH (OP_PAREN c_param CL_PAREN)? COLON; // TODO
c_param: ;


// STATEMENTS

func_call: ;

if_head: IF cond_expr COLON;
while_head: WHILE cond_expr COLON;
loop_head: LOOP cond_expr COLON;
for_head: FOR for_expr COLON;

// EXPRESSION
for_expr: ;
cond_expr: ;
range_expr: ;

mul_expr: expr ((NL|SEMICOLON|DOLLAR) expr)+;
expr: ;

un_op: ;

bin_op: bin_eq|bin_plus|bin_mul|bin_exp;
bin_eq: bin_plus (EQUAL (bin_plus|bin_eq))?; // RA // TODO Review!!
bin_plus: (bin_mul (PLUS|MINUS))? bin_mul|bin_plus (PLUS|MINUS) bin_mul; // LA
bin_mul: (bin_exp (MUL|DIV))? bin_exp|bin_mul (MUL|DIV) bin_exp; // LA
bin_exp: p_o (HAT (p_o|bin_exp))?; // RA
p_o: paren|obj;
paren: OP_PAREN expr CL_PAREN;

tern_op: tern_cond;
tern_cond: cond_expr QUES_MARK expr (D_BAR expr)?;

// m -> outside function
// f -> inside function
// l -> loop
// t -> type parameter
// ns -> non-standard
// ml -> multi-line
// (('do' (IDEN (',' IDEN)*)?)? ':')?

// >>> lambda, do_anon_func, bin_op, un_op, tern_op
