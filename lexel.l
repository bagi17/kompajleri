%option noyywrap

%{
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "errors.h"
#include "errors.c"
#include "parser.tab.h"

int column_number = 1;

%}

%x COMMENT
%option yylineno


%%        

"//".*                { 
                        column_number += yyleng;
                        printf("Skiping single line coment on line %d : //  \n ", yylineno);
                      }
"/*"                  {     
                            printf("Begining multiline coment on line %d : /*   \n ", yylineno);
                            BEGIN(COMMENT); 
                       }
<COMMENT>"*/"          {  
                            printf("Begining multiline coment on line %d : */   \n ", yylineno);
                            BEGIN(INITIAL);
                       }
<COMMENT>.|\n          { /* skip over comment */ }                                             

[ \t]                 { column_number += yyleng; }

\n                    { column_number = 1;  }

"if"                  { column_number += strlen(yytext); return T_IF; }
"else"                { column_number += strlen(yytext); return T_ELSE; }
"while"               { column_number += strlen(yytext); return T_WHILE; }
"do"                  { column_number += strlen(yytext); return T_DO; }
"for"                 { column_number += strlen(yytext); return T_FOR; }
"break"               { column_number += strlen(yytext); return T_BREAK; }
"return"              { column_number += strlen(yytext); return T_RETURN; }

"true"                { column_number += strlen(yytext); yylval.boolvalue = 1; return T_TRUE; }
"false"               { column_number += strlen(yytext); yylval.boolvalue = 0; return T_FALSE; }

"int"                 { column_number += strlen(yytext); return T_INT; }
"double"              { column_number += strlen(yytext); return T_DOUBLE; }
"bool"                { column_number += strlen(yytext); return T_BOOL; }
"String"              { column_number += strlen(yytext); return T_STRING; }

"-"         { column_number ++; return T_MINUS; }
"+"         { column_number ++; return T_PLUS; }
"*"         { column_number ++; return T_MULTIPLY; }
"/"         { column_number ++; return T_DIV; }
">"         { column_number ++; return T_GREATER_THAN; }
"<"         { column_number ++; return T_LESS_THAN; }
"="         { column_number ++; return T_ASSIGN; }
"%"         { column_number ++; return T_MOD; }

"=="        { column_number += strlen(yytext); return T_EQ; }
"!="        { column_number += strlen(yytext); return T_NE; }
"<="        { column_number += strlen(yytext); return T_LE; }
">="        { column_number += strlen(yytext); return T_GE; }
"++"        { column_number += strlen(yytext); return T_PP; }
"--"        { column_number += strlen(yytext); return T_MM; }
"&&"        { column_number += strlen(yytext); return T_AND; }
"||"        { column_number += strlen(yytext); return T_OR; }
"!"         { column_number ++; return T_NOT_EQUAL; }
"("         { column_number ++; return T_LEFT_PAR; }
")"         { column_number ++; return T_RIGHT_PAR; }
"{"         { column_number ++; return T_LEFT_BRA; }
"}"         { column_number ++; return T_RIGHT_BRA; }
";"         { column_number ++; return T_END_EXP; }

[a-zA-Z][a-zA-Z0-9_]{0,30}   { 
                                column_number += strlen(yytext); 
                                printf("%s = ", yytext);
                                return T_IDENTIFIER; 
                             }

[a-zA-Z][a-zA-Z0-9_]{31,}    { column_number += 32; print_error_message(yylineno, column_number); }

0[xX][0-9a-fA-F]+   { 
                        yylval.intval = strtol(yytext, NULL, 16); 
                        column_number += strlen(yytext); 
                        return INT_CONSTANT; 
                    }

0|([1-9][0-9]*)     {
                        yylval.intval = atoi(yytext); 
                        column_number += strlen(yytext); 
                        return INT_CONSTANT; 
                    }

[0-9]+"."[0-9]*([eE][+-]?[0-9]+)?    { 
                                        yylval.dval = atof(yytext); 
                                        column_number += strlen(yytext);
                                        return DOUBLE_CONSTANT; 
                                    }

\"([^\"\n]|\\\")*\" { 
                        yylval.strval = strdup(yytext); 
                        column_number += strlen(yytext);
                        return STRING_CONSTANT; 
                    }

.                   { column_number ++; }

%%

