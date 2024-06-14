/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_CONSTANT = 258,            /* INT_CONSTANT  */
    DOUBLE_CONSTANT = 259,         /* DOUBLE_CONSTANT  */
    STRING_CONSTANT = 260,         /* STRING_CONSTANT  */
    T_IDENTIFIER = 261,            /* T_IDENTIFIER  */
    T_TRUE = 262,                  /* T_TRUE  */
    T_FALSE = 263,                 /* T_FALSE  */
    T_INT = 264,                   /* T_INT  */
    T_DOUBLE = 265,                /* T_DOUBLE  */
    T_BOOL = 266,                  /* T_BOOL  */
    T_STRING = 267,                /* T_STRING  */
    T_IF = 268,                    /* T_IF  */
    T_WHILE = 269,                 /* T_WHILE  */
    T_FOR = 270,                   /* T_FOR  */
    T_ELSE = 271,                  /* T_ELSE  */
    T_DO = 272,                    /* T_DO  */
    T_BREAK = 273,                 /* T_BREAK  */
    T_RETURN = 274,                /* T_RETURN  */
    T_EQ = 275,                    /* T_EQ  */
    T_NE = 276,                    /* T_NE  */
    T_LE = 277,                    /* T_LE  */
    T_GE = 278,                    /* T_GE  */
    T_PP = 279,                    /* T_PP  */
    T_MM = 280,                    /* T_MM  */
    T_AND = 281,                   /* T_AND  */
    T_OR = 282,                    /* T_OR  */
    T_NOT_EQUAL = 283,             /* T_NOT_EQUAL  */
    T_NEWLINE = 284,               /* T_NEWLINE  */
    T_LEFT_PAR = 285,              /* T_LEFT_PAR  */
    T_RIGHT_PAR = 286,             /* T_RIGHT_PAR  */
    T_LEFT_BRA = 287,              /* T_LEFT_BRA  */
    T_RIGHT_BRA = 288,             /* T_RIGHT_BRA  */
    T_END_EXP = 289,               /* T_END_EXP  */
    T_ASSIGN = 290,                /* T_ASSIGN  */
    T_MINUS = 291,                 /* T_MINUS  */
    T_PLUS = 292,                  /* T_PLUS  */
    T_MULTIPLY = 293,              /* T_MULTIPLY  */
    T_DIV = 294,                   /* T_DIV  */
    T_MOD = 295,                   /* T_MOD  */
    T_GREATER_THAN = 296,          /* T_GREATER_THAN  */
    T_LESS_THAN = 297              /* T_LESS_THAN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 17 "parser.y"
union semrec
{
#line 17 "parser.y"

  int intval;
  char *strval;
  double dval;
  int boolvalue;

#line 114 "parser.tab.h"

};
#line 17 "parser.y"
typedef union semrec YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
