# 28/01/17
grammar Dexter;

ID
    : [a-zA-Z] [a-zA-Z0-9_]*
    ;

SP
    : [ ]+
    ;

TB
    : [\t]+
    ;

CONT
    : ' .' NL -> skip
    ;

NL
    : ('\r'? '\n')+
    ;

DOT
    : '.'
    ;

ARR
    : '->'
    ; // should be identified as ARR even when combined with SPECIAL_CHARS

CALL_CHAIN
    : '>>'
    ; // should be identified as CALL_CHAIN even when combined with SPECIAL_CHARS

COM
    : ','
    ;

REST
    : '...'
    ;

SPECIAL_CHARS
    :('+'
    | '-'
    | '/'
    | '*'
    | '^'
    | '&'
    | '|'
    | '>'
    | '<'
    )+
    ;

subject_declaration
    : ('var'|'let') ('rd'|'wr') ('pin'|'block')? ('`'|'.')? ID ((','|'&') REST ID)* (('<-'|'=') lhs)?
    ;

function_declaration
    : 'def' 'abs'? ('`'|'.')? ID '!' params? (':' body)?
    ;

type_declaration
    : 'type' 'abs'? '`'? ID params? ('<:' ID (',' ID)*) (':' type_body)?
    ;

enum_declaration
    : 'enum' 'abs'? '`'? ID params? ('<:' ID (',' ID)*) (':' enum_body)?
    ;

extend_declaration
    : 'extend' ID params? ('<:' ID (',' ID)*) (':' type_body)?
    ;

params
    : '(' ( 'var'? 'pin'? ID ((','|'&') REST ID)* (('<-'|'=') lhs)? )? ')'
    ;

assignment
    : ID ((','|'&') REST ID)* ('<-'|SPECIAL_CHARS? '=') lhs
    ;

// assignment, expr, where clause, tuple declaration
if
    : 'if' if_expr ':' (NL? scs_statement (NL? '..'|elif|else)? | (NL scs_statement){2,} NL? ('..'|elif|else))
    ;
// in loop, where clause
for
    : 'for' for_expr ':' (NL? scs_statement (NL? '..')? | (NL scs_statement){2,} NL? '..')
    ;
// assignment, expr, where clause, tuple declaration
while
    : 'while' if_expr ':' (NL? scs_statement (NL? '..')? | (NL scs_statement){2,} NL? '..')
    ;

loop
    : 'loop' ':' (NL? scs_statement (NL? '..'|loop_while)? | (NL scs_statement){2,} NL? ('..'|loop_while))
    ;
// fragment
loop_while
    : 'while' if_expr (NL? '..')?
    ;

if_flat
    :
    ;

for_flat
    :
    ;

while_flat
    :
    ;

loop_while_flat
    :
    ;

match
    : 'match' expr (',' expr)* NL? (with|case)
    ;

with
    :
    ;

case
    :
    ;


block
    : 'block' ':' body
    ;

unary
    :
    ;

binary
    :
    ;

function_call
    :
    ;

if_expr
    :
    ;

for_expr
    :
    ;

expr
    : '(' statement ')'
    ;

statement
    :
    ;

scs_statement
    : statement (";" statement)*
    ;

body
    : statement
    ;

type_body
    : (subject_declaration|function_declaration)+
    ;

enum_body
    :
    ;

lhs == rhs
lhs != rhs
lhs > rhs
lhs >= rhs
lhs < rhs
lhs <= rhs
!(expr)
// generics, ternary operator, macros, literals, ns_literals,
// import, using, hiding, function object, type object, aliases, super call as param, new function calls
// call chaining, as, in, and, or, not, return, yield, ref, val, comments
// indexing, range, tuples(open, close), named tuples, transpose
// nil coalescing, error coalescing, lambda
// update ASTS -------
// super call, self call, as, in, transpose, labels!!
// ---------------
// note block and lines, '(' NL? 'expr' NL? ')'
