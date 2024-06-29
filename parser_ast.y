%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "ast.h" 

int yylex();
int line;
char *yytext;
void yyerror(const char *msg);

ASTNode* root = NULL;

%}

%union {
    int intval;
    char *strval;
    double dval;
    int boolvalue;
    struct ASTNode* node;
}

%token <intval> INT_CONSTANT
%token <dval> DOUBLE_CONSTANT
%token <strval> STRING_CONSTANT
%token <strval> T_IDENTIFIER
%token <boolvalue> T_TRUE T_FALSE
%token T_INT T_DOUBLE T_BOOL T_STRING 
%token T_IF T_WHILE T_FOR T_ELSE T_DO T_BREAK T_RETURN
%token T_EQ T_NE T_LE T_GE T_PP T_MM T_AND T_OR T_NOT_EQUAL
%token T_NEWLINE T_LEFT_PAR T_RIGHT_PAR T_LEFT_BRA T_RIGHT_BRA T_END_EXP

%right T_ASSIGN T_NOT_EQUAL
%left T_AND T_OR
%left T_MINUS T_PLUS
%left T_MULTIPLY T_DIV T_MOD
%nonassoc T_EQ T_NE
%nonassoc T_LE T_GE T_GREATER_THAN T_LESS_THAN

%type <node> exp stat S

%%

S: S stat { $$ = create_node(AST_BRANCH, NULL, $1, $2, NULL); root = $$; }
    | { $$ = NULL; }
;

stat:
      T_INT T_IDENTIFIER T_ASSIGN exp T_END_EXP { $$ = create_node(AST_INT_ID, $2, $4, NULL, NULL); }
    | T_DOUBLE T_IDENTIFIER T_ASSIGN exp T_END_EXP { $$ = create_node(AST_DBL_ID, $2, $4, NULL, NULL); }
    | T_BOOL T_IDENTIFIER T_ASSIGN exp T_END_EXP { $$ = create_node(AST_BOOL, $2, $4, NULL, NULL); }
    | T_STRING T_IDENTIFIER T_ASSIGN STRING_CONSTANT T_END_EXP { $$ = create_node(AST_STR_ID, $2, create_node(AST_STR, $4, NULL, NULL, NULL), NULL, NULL); }
    | T_WHILE T_LEFT_PAR exp T_RIGHT_PAR T_LEFT_BRA S T_RIGHT_BRA { $$ = create_node(AST_WHILE, NULL, $3, $6, NULL); }
    | T_FOR T_LEFT_PAR exp T_END_EXP exp T_END_EXP exp T_RIGHT_PAR T_LEFT_BRA S T_RIGHT_BRA { $$ = create_node(AST_FOR, NULL, $3, create_node(AST_FOR_EXP, NULL, $5, $7, NULL), $10); }
    | T_IF T_LEFT_PAR exp T_RIGHT_PAR stat { $$ = create_node(AST_IF, NULL, $3, $5, NULL); }
    | T_IF T_LEFT_PAR exp T_RIGHT_PAR T_LEFT_BRA S T_RIGHT_BRA { $$ = create_node(AST_IF, NULL, $3, $6, NULL); }
    | T_IF T_LEFT_PAR exp T_RIGHT_PAR T_LEFT_BRA S T_RIGHT_BRA T_ELSE T_LEFT_BRA S T_RIGHT_BRA { $$ = create_node(AST_IF_ELSE, NULL, $3, $6, $10); }
;

exp: T_IDENTIFIER { $$ = create_node(AST_ID, $1, NULL, NULL, NULL); }
    | INT_CONSTANT { char buffer[20]; sprintf(buffer, "%d", $1); $$ = create_node(AST_INT, buffer, NULL, NULL, NULL); }
    | DOUBLE_CONSTANT { char buffer[20]; sprintf(buffer, "%f", $1); $$ = create_node(AST_DBL, buffer, NULL, NULL, NULL); }
    | T_TRUE { $$ = create_node(AST_BOOL, "true", NULL, NULL, NULL); }
    | T_FALSE { $$ = create_node(AST_BOOL, "false", NULL, NULL, NULL); }
    | STRING_CONSTANT { $$ = create_node(AST_STR, $1, NULL, NULL, NULL); }
    | exp T_PLUS exp { $$ = create_node(AST_PLUS, NULL, $1, $3, NULL); }
    | exp T_MINUS exp { $$ = create_node(AST_MINUS, NULL, $1, $3, NULL); }
    | exp T_MULTIPLY exp { $$ = create_node(AST_MULT, NULL, $1, $3, NULL); }
    | exp T_DIV exp { $$ = create_node(AST_DIV, NULL, $1, $3, NULL); }
    | exp T_MOD exp { $$ = create_node(AST_MOD, NULL, $1, $3, NULL); }
    | exp T_LESS_THAN exp { $$ = create_node(AST_LESS, NULL, $1, $3, NULL); }
    | exp T_GREATER_THAN exp { $$ = create_node(AST_GRT, NULL, $1, $3, NULL); }
    | exp T_LE exp { $$ = create_node(AST_LESS_EQ, NULL, $1, $3, NULL); }
    | exp T_GE exp { $$ = create_node(AST_GRT_EQ, NULL, $1, $3, NULL); }
    | exp T_ASSIGN exp { $$ = create_node(AST_EQ, NULL, $1, $3, NULL); }
    | exp T_EQ exp { $$ = create_node(AST_EQ_EQ, NULL, $1, $3, NULL); }
    | exp T_NE exp { $$ = create_node(AST_NOT_EQ, NULL, $1, $3, NULL); }
    | exp T_AND exp { $$ = create_node(AST_AND, NULL, $1, $3, NULL); }
    | exp T_OR exp { $$ = create_node(AST_OR, NULL, $1, $3, NULL); }
    | T_NOT_EQUAL exp { $$ = create_node(AST_NOT, NULL, $2, NULL, NULL); }
    | T_LEFT_PAR exp T_RIGHT_PAR { $$ = $2; }
;

%%

void yyerror(const char *msg) {
    fprintf(stderr, "Error: symbol: %s at line %d\n", yytext, line);
}

int main() {
    line = 1;
    int res = yyparse();
    if (res == 0) {
        printf("Valid input.\n");
        print_ast(root, 0);
    } else {
        printf("Not valid input.\n");
    }
    return 0;
}