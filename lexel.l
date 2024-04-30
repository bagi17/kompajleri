%{
#include <stdio.h>
#include "parser.tab.h"

int line_number = 1;
int column_number = 1;
extern void yyerror(const char *s);
%}

DIGIT [0-9]

%%        
":="                  { return(ASSGNOP); }
"//"                  { }
"/*"                  {  while (1) { 
                            if(yytext[strlen(yytext)-2] == '*' && yytext[strlen(yytext)-1] == '/') 
                                break; 
                            else
                                yylex(); 
                            } 
                       }

[ \t]                 {column_number += yyleng;}

[\n]                  { line_number++; column_number = 1; }

"if"                  { return IF; }
"else"                { return ELSE; }
"while"               { return WHILE; }
"do"                  { return DO; }
"skip"                { return SKIP; }
"write"               { return WRITE; }
"end"                 { return END; }
"fi"                  { return FI; }
"in"                  { return IN; }
"let"                 { return LET; }
"for"                 { return FOR; }
"break"               { return BREAK; }
"return"              { return RETURN; }



"true"                { return TRUE; }
"false"               { return FALSE; }

[-+*/.;,<>=]				{ return (int)yytext[0]; }
"=="        { return EQ; }
"!="        { return NE; }
"<="        { return LE; }
">="        { return GE; }
"++"        { return PP; }
"--"        { return MM; }

  

[a-zA-Z][a-zA-Z0-9_]{0,30}   { return IDENTIFIER; }

0[xX][0-9a-fA-F]+   { return HEX_CONSTANT; }
DIGIT+              { return DEC_CONSTANT; }

DIGIT+\.DIGIT*([eE][+-]?DIGIT+)?    { return DOUBLE_CONSTANT; }

\"([^\"\n]|\\\")*\" { return STRING_CONSTANT; }

.                   ;

%%

int yywrap() {
    return 1;
}
