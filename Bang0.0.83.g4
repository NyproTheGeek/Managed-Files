// 18/10/16
grammar Bang;

SP: [?<!\n(\r\n)]' ' -> skip;
WS: [' '\t\r\n\\];
IDEN: [a-zA-Z][a-zA-Z_]*; // TODO Will extend this to UTF-8 later
A_NUM: ('-'|'+')? [0-9] ('_'? [0-9])* ('e' ('-'|'+')? [0-9]+)?
    ('_' [a-zA-Z] [a-zA-Z0-9]*)? ('_' [a-zA-Z] [a-zA-Z0-9]*)?;
B_NUM: ('-'|'+')? ([0-9] ('_'? [0-9])*)? '.' [0-9] ('_'? [0-9])*
    ('e' ('-'|'+')? [0-9]+)? ('_' [a-zA-Z] [a-zA-Z0-9]*)?;
OP: ;
STRING: '"'/*Character*/'"'); // TODO Needs Work
NS_STRING: [a-zA-Z][a-zA-Z_]*'"'/*Character*/'"'; // TODO Needs Work
REGEX: ;
SYMBOL: ;
NS_SYMBOL: ;

ML_COMMENT: '#='/*Characters*/?ml_comment?/*Characters*/?'=#'; // TODO Needs Work


prog: ;


mod: mod0|'hide'|'rhide';
mod0: 'priv'|'pack'|'prod'|'rpriv'|'rpack'|'rprod';

ref: 'read'|'ref'|'iso'|'own';
ass: '='|'=:'|'::'|'<:'|'>:';

m_obj_decl: ('var'|'let') mod? IDEN obj_rhs?;
f_obj_decl: ('var'|'let') 'sticky'? IDEN obj_rhs?;
l_obj_decl: ('var'|'let') 'hold'? IDEN obj_rhs?;
obj_rhs: ;

m_func_decl: ('func'|'match') mod? IDEN '!'? '(' param? ')' (('::'|'<:'|'>:')? IDEN)? ':'?;
f_func_decl: ('func'|'match') IDEN '!'? '(' param? ')' (('::'|'<:'|'>:')? IDEN)? ':'?;

param: param0 (',' param0)*;
param0: ('let'? IDEN)+ obj_rhs?;

type_decl: 'type' 'ab'? mod0? IDEN '(' param? ')' '[' IDEN (',' IDEN)* ']' ':'?;
enum_decl: 'enum' mod0? IDEN '(' e_param? ')' '[' IDEN (',' IDEN)* ']' ':'?;
module_decl: 'module' mod0? IDEN;

e_param: e_param0 (',' e_param0);
e_param0: IDEN ('(' param? ')')?;

for_expr: ;
cond_expr: ;
func_call: ;

if_stmt: 'if' cond_expr ':';
while_stmt: 'while' cond_expr ':';
loop_stmt: 'loop' cond_expr ':';
for_stmt: 'for' for_expr ':';

un_op: ;
bin_op: ;
tern_op: ;

expr: ; // TODO Needs Work

// m -> outside function
// f -> inside function
// l -> loop
// t -> type parameter
// ns -> non-standard
// ml -> multi-line
// (('do' (IDEN (',' IDEN)*)?)? ':')?

// >>> lambda, do_anon_func, bin_op, un_op, tern_op
