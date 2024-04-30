%{
#include <stdio.h>
#include <stdlib.h>

extern int line_number; 
extern int column_number; 
void yyerror(const char *s);
int yylex();
%}


%union semrec {
  int intval;
  char id[32];
  double dval;
}
%start program

%token<intval> NUMBER
%token<dval> DNUMBER
%token HEX_CONSTANT
%token DEC_CONSTANT
%token DOUBLE_CONSTANT
%token STRING_CONSTANT
%token<id> IDENTIFIER
%token IF WHILE FOR
%token SKIP THEN ELSE FI DO END BREAK RETURN
%token INTEGER READ WRITE LET IN
%token ASSGNOP
%token TRUE FALSE
%token EQ NE LE GE PP MM

%nonassoc LOWER_THAN_ELSE
%nonassoc '='
%nonassoc '<' '>'
%left '-' '+'
%left '*' '/'
%right '^'

%%

program:
    statement
    | program statement
    ;
;

statement : if_statement
          | WHILE '(' bool_exp ')' statement
          | FOR '(' for_exp1 ';' bool_exp ';' for_exp2 ')' compound_statement
          | BREAK ';'
          | RETURN expression ';'
          | IDENTIFIER '=' expression
          ;     
;

if_statement:
            IF '(' bool_exp ')' statement %prec LOWER_THAN_ELSE
          | IF '(' bool_exp ')' compound_statement ELSE statement
;

compound_statement:
            '{' statement '}'

for_exp1:
       NUMBER IDENTIFIER '=' DEC_CONSTANT
     | DNUMBER IDENTIFIER '=' DOUBLE_CONSTANT
     | IDENTIFIER '=' DEC_CONSTANT
     | IDENTIFIER '=' DOUBLE_CONSTANT
;
 
for_exp2:
       IDENTIFIER PP
     | IDENTIFIER MM
     | IDENTIFIER '=' IDENTIFIER '+' DEC_CONSTANT
     | IDENTIFIER '=' IDENTIFIER '+' DOUBLE_CONSTANT

bool_exp: 
       DEC_CONSTANT '<' DEC_CONSTANT
     | DEC_CONSTANT '=' DEC_CONSTANT
     | DEC_CONSTANT '>' DEC_CONSTANT
     | DEC_CONSTANT LE DEC_CONSTANT
     | DEC_CONSTANT EQ DEC_CONSTANT
     | DEC_CONSTANT GE DEC_CONSTANT
     | DEC_CONSTANT NE DEC_CONSTANT
     | DOUBLE_CONSTANT '<' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT '=' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT '>' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT LE DOUBLE_CONSTANT
     | DOUBLE_CONSTANT EQ DOUBLE_CONSTANT
     | DOUBLE_CONSTANT GE DOUBLE_CONSTANT
     | DOUBLE_CONSTANT NE DOUBLE_CONSTANT
     | '(' bool_exp ')' EQ TRUE
     | '(' bool_exp ')' EQ FALSE
     | '!' '(' bool_exp ')'

;

expression : DEC_CONSTANT     
     | DOUBLE_CONSTANT
     | HEX_CONSTANT
     | STRING_CONSTANT
     | DEC_CONSTANT '<' DEC_CONSTANT
     | DEC_CONSTANT '=' DEC_CONSTANT
     | DEC_CONSTANT '>' DEC_CONSTANT
     | DEC_CONSTANT '+' DEC_CONSTANT
     | DEC_CONSTANT '-' DEC_CONSTANT
     | DEC_CONSTANT '*' DEC_CONSTANT
     | DEC_CONSTANT '/' DEC_CONSTANT
     | DEC_CONSTANT '^' DEC_CONSTANT
     | DOUBLE_CONSTANT '<' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT '=' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT '>' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT '+' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT '-' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT '*' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT '/' DOUBLE_CONSTANT
     | DOUBLE_CONSTANT '^' DOUBLE_CONSTANT
     | HEX_CONSTANT '<' HEX_CONSTANT
     | HEX_CONSTANT '=' HEX_CONSTANT
     | HEX_CONSTANT '>' HEX_CONSTANT
     | HEX_CONSTANT '+' HEX_CONSTANT
     | HEX_CONSTANT '-' HEX_CONSTANT
     | HEX_CONSTANT '*' HEX_CONSTANT
     | HEX_CONSTANT '/' HEX_CONSTANT
     | HEX_CONSTANT '^' HEX_CONSTANT
     | IDENTIFIER '=' expression
     | '(' expression ')'
;



%%

int main() { 
	
	
	int errors = yyparse ();
	printf ( "Parse Completed\n" );
	if ( errors == 0 ) { 
	 	printf("Nema gresaka\n");
    } else {
		printf("Ima greska\n");
	}
}

