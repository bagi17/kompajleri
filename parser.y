%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int column_number; 
extern int yylineno; 
extern int yylex();
extern int yyparse();

void yyerror(const char *s);
int yylex();

%}


%union semrec{
  int intval;
  char *strval;
  double dval;
  int boolvalue;
}

%start program

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

%type <intval> int_exp
%type <dval> double_exp
%type <boolvalue> compare_exp
%type <boolvalue> bool_exp
%type <strval> string_exp
%type <intval> if_statement
%type <intval> while_statement
%type <intval> for_statement
%type <intval> statement

%%

program:
     program statement {}
    | {}
;

statement: 
             T_INT T_IDENTIFIER T_ASSIGN int_exp T_END_EXP { printf("%d \n", $4); }
          | T_DOUBLE T_IDENTIFIER T_ASSIGN double_exp T_END_EXP { printf("%f \n", $4); }
          | T_BOOL T_IDENTIFIER T_ASSIGN bool_exp T_END_EXP { printf("%s \n", $4 ? "True":"False"); }
          | T_STRING T_IDENTIFIER T_ASSIGN string_exp T_END_EXP { printf("%s \n", $4); }
          | if_statement { printf("izvrsena if naredba \n"); }
          | while_statement { printf("izvrsena while naredba \n"); }
          | for_statement { printf("izvrsena for naredba \n"); }
;

int_exp: INT_CONSTANT { $$ = $1; }
        | int_exp T_PLUS int_exp { $$ = $1 + $3; }
        | int_exp T_MINUS int_exp { $$ = $1 - $3; }
        | int_exp T_MULTIPLY int_exp { $$ = $1 * $3; }
        | int_exp T_DIV int_exp { $$ = $1 / $3; }
        | int_exp T_MOD int_exp { $$ = $1 % $3; }
        | T_LEFT_PAR int_exp T_RIGHT_PAR { $$ = $2; }
 ;

 double_exp: DOUBLE_CONSTANT { $$ = $1; }
        | double_exp T_PLUS double_exp { $$ = $1 + $3; }
        | double_exp T_MINUS double_exp { $$ = $1 - $3; }
        | double_exp T_MULTIPLY double_exp { $$ = $1 * $3; }
        | double_exp T_DIV double_exp { $$ = $1 / $3; }
        | T_LEFT_PAR double_exp T_RIGHT_PAR { $$ = $2; }
;

bool_exp: T_TRUE { $$ = $1; }
        | T_FALSE { $$ = $1; }
        | compare_exp { $$ = $1; }
        | bool_exp T_AND bool_exp { $$ = $1 && $3; }
        | bool_exp T_OR bool_exp { $$ = $1 || $3; }
        | T_NOT_EQUAL bool_exp { $$ = $2 == 1; }
        | T_LEFT_PAR bool_exp T_RIGHT_PAR { $$ = $2; }

;

compare_exp: int_exp T_LE int_exp { $$ = $1 <= $3 ? 1 : 0; }
         |  int_exp T_GE int_exp { $$ = $1 >= $3 ? 1 : 0; }
         |  int_exp T_GREATER_THAN int_exp { $$ = $1 > $3 ? 1 : 0; }
         |  int_exp T_LESS_THAN int_exp { $$ = $1 < $3 ? 1 : 0; }
         |  int_exp T_EQ int_exp { $$ = $1 == $3 ? 1 : 0; }
         |  int_exp T_NE int_exp { $$ = $1 != $3 ? 1 : 0; }
         |  double_exp T_LE double_exp { $$ = $1 <= $3 ? 1 : 0; }
         |  double_exp T_GE double_exp { $$ = $1 >= $3 ? 1 : 0; }
         |  double_exp T_GREATER_THAN double_exp { $$ = $1 > $3 ? 1 : 0; }
         |  double_exp T_LESS_THAN double_exp { $$ = $1 < $3 ? 1 : 0; }
         |  double_exp T_EQ double_exp { $$ = $1 == $3 ? 1 : 0; }
         |  double_exp T_NE double_exp { $$ = $1 != $3 ? 1 : 0; }
         |  compare_exp T_LE compare_exp { $$ = $1 <= $3 ? 1 : 0; }
         |  compare_exp T_GE compare_exp { $$ = $1 >= $3 ? 1 : 0; }
         |  compare_exp T_GREATER_THAN compare_exp { $$ = $1 > $3 ? 1 : 0; }
         |  compare_exp T_LESS_THAN compare_exp { $$ = $1 < $3 ? 1 : 0; }
         |  compare_exp T_EQ compare_exp { $$ = $1 == $3 ? 1 : 0; }
         |  compare_exp T_NE compare_exp { $$ = $1 != $3 ? 1 : 0; }
;

string_exp: STRING_CONSTANT { $$ = $1; }
          | STRING_CONSTANT T_PLUS STRING_CONSTANT { 
                $$ = malloc(strlen($1) + strlen($3) + 1);
                strcpy($$, $1);
                strcat($$, $3);
                free($1);
                free($3);
           }
;         

if_statement:
            T_IF T_LEFT_PAR bool_exp T_RIGHT_PAR T_LEFT_BRA statement T_RIGHT_BRA T_ELSE T_LEFT_BRA statement T_RIGHT_BRA { if ($3 == 1) { $$ = $6; } else { $$ = $10; } }
          | T_IF T_LEFT_PAR bool_exp T_RIGHT_PAR T_LEFT_BRA statement T_RIGHT_BRA { if ($3 == 1) { $$ = $6; } }
;

while_statement: 
          T_WHILE T_LEFT_PAR bool_exp T_RIGHT_PAR T_LEFT_BRA statement T_RIGHT_BRA { if ($3 == 1) { $$ = $6; } }
;

for_statement:
       T_FOR T_LEFT_PAR T_INT T_IDENTIFIER T_ASSIGN int_exp T_END_EXP bool_exp T_END_EXP int_exp T_RIGHT_PAR T_LEFT_BRA statement T_RIGHT_BRA { if($8 == 1) { $$ = $13; $6 = $10; } }

;
 

%%

int main() { 
	
	
	int errors = yyparse ();
	printf ( "Parse Completed \n" );
	if ( errors == 0 ) { 
	 	  printf("No errors found \n");
    } else {
		  printf("Error found on line %d column %d \n", yylineno, column_number);
	}
  return 0;
}


void yyerror(const char* s) {
	printf("Parse error: %s \n", s);
}

