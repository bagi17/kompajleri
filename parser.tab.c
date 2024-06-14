/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int column_number; 
extern int yylineno; 
extern int yylex();
extern int yyparse();

void yyerror(const char *s);
int yylex();


#line 86 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_CONSTANT = 3,               /* INT_CONSTANT  */
  YYSYMBOL_DOUBLE_CONSTANT = 4,            /* DOUBLE_CONSTANT  */
  YYSYMBOL_STRING_CONSTANT = 5,            /* STRING_CONSTANT  */
  YYSYMBOL_T_IDENTIFIER = 6,               /* T_IDENTIFIER  */
  YYSYMBOL_T_TRUE = 7,                     /* T_TRUE  */
  YYSYMBOL_T_FALSE = 8,                    /* T_FALSE  */
  YYSYMBOL_T_INT = 9,                      /* T_INT  */
  YYSYMBOL_T_DOUBLE = 10,                  /* T_DOUBLE  */
  YYSYMBOL_T_BOOL = 11,                    /* T_BOOL  */
  YYSYMBOL_T_STRING = 12,                  /* T_STRING  */
  YYSYMBOL_T_IF = 13,                      /* T_IF  */
  YYSYMBOL_T_WHILE = 14,                   /* T_WHILE  */
  YYSYMBOL_T_FOR = 15,                     /* T_FOR  */
  YYSYMBOL_T_ELSE = 16,                    /* T_ELSE  */
  YYSYMBOL_T_DO = 17,                      /* T_DO  */
  YYSYMBOL_T_BREAK = 18,                   /* T_BREAK  */
  YYSYMBOL_T_RETURN = 19,                  /* T_RETURN  */
  YYSYMBOL_T_EQ = 20,                      /* T_EQ  */
  YYSYMBOL_T_NE = 21,                      /* T_NE  */
  YYSYMBOL_T_LE = 22,                      /* T_LE  */
  YYSYMBOL_T_GE = 23,                      /* T_GE  */
  YYSYMBOL_T_PP = 24,                      /* T_PP  */
  YYSYMBOL_T_MM = 25,                      /* T_MM  */
  YYSYMBOL_T_AND = 26,                     /* T_AND  */
  YYSYMBOL_T_OR = 27,                      /* T_OR  */
  YYSYMBOL_T_NOT_EQUAL = 28,               /* T_NOT_EQUAL  */
  YYSYMBOL_T_NEWLINE = 29,                 /* T_NEWLINE  */
  YYSYMBOL_T_LEFT_PAR = 30,                /* T_LEFT_PAR  */
  YYSYMBOL_T_RIGHT_PAR = 31,               /* T_RIGHT_PAR  */
  YYSYMBOL_T_LEFT_BRA = 32,                /* T_LEFT_BRA  */
  YYSYMBOL_T_RIGHT_BRA = 33,               /* T_RIGHT_BRA  */
  YYSYMBOL_T_END_EXP = 34,                 /* T_END_EXP  */
  YYSYMBOL_T_ASSIGN = 35,                  /* T_ASSIGN  */
  YYSYMBOL_T_MINUS = 36,                   /* T_MINUS  */
  YYSYMBOL_T_PLUS = 37,                    /* T_PLUS  */
  YYSYMBOL_T_MULTIPLY = 38,                /* T_MULTIPLY  */
  YYSYMBOL_T_DIV = 39,                     /* T_DIV  */
  YYSYMBOL_T_MOD = 40,                     /* T_MOD  */
  YYSYMBOL_T_GREATER_THAN = 41,            /* T_GREATER_THAN  */
  YYSYMBOL_T_LESS_THAN = 42,               /* T_LESS_THAN  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_statement = 45,                 /* statement  */
  YYSYMBOL_int_exp = 46,                   /* int_exp  */
  YYSYMBOL_double_exp = 47,                /* double_exp  */
  YYSYMBOL_bool_exp = 48,                  /* bool_exp  */
  YYSYMBOL_compare_exp = 49,               /* compare_exp  */
  YYSYMBOL_string_exp = 50,                /* string_exp  */
  YYSYMBOL_if_statement = 51,              /* if_statement  */
  YYSYMBOL_while_statement = 52,           /* while_statement  */
  YYSYMBOL_for_statement = 53              /* for_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    57,    61,    62,    63,    64,    65,    66,
      67,    70,    71,    72,    73,    74,    75,    76,    79,    80,
      81,    82,    83,    84,    87,    88,    89,    90,    91,    92,
      93,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   117,
     118,   128,   129,   133,   137
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_CONSTANT",
  "DOUBLE_CONSTANT", "STRING_CONSTANT", "T_IDENTIFIER", "T_TRUE",
  "T_FALSE", "T_INT", "T_DOUBLE", "T_BOOL", "T_STRING", "T_IF", "T_WHILE",
  "T_FOR", "T_ELSE", "T_DO", "T_BREAK", "T_RETURN", "T_EQ", "T_NE", "T_LE",
  "T_GE", "T_PP", "T_MM", "T_AND", "T_OR", "T_NOT_EQUAL", "T_NEWLINE",
  "T_LEFT_PAR", "T_RIGHT_PAR", "T_LEFT_BRA", "T_RIGHT_BRA", "T_END_EXP",
  "T_ASSIGN", "T_MINUS", "T_PLUS", "T_MULTIPLY", "T_DIV", "T_MOD",
  "T_GREATER_THAN", "T_LESS_THAN", "$accept", "program", "statement",
  "int_exp", "double_exp", "bool_exp", "compare_exp", "string_exp",
  "if_statement", "while_statement", "for_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -55,   147,   -55,     9,    14,    18,    20,    36,    38,    43,
     -55,   -55,   -55,   -55,    40,    42,    44,    57,    46,    46,
      72,    35,    53,    46,   121,   -55,   -55,   -55,   -55,    46,
      46,    77,   107,   124,    83,   183,   134,    35,    24,    53,
     169,   -13,   115,   143,    69,    49,   100,   185,    35,    35,
      35,    35,    35,    35,    35,    35,    35,    35,    35,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    46,
      46,   144,    52,    52,    52,    52,    52,    52,   159,   178,
     132,   -55,    71,   -55,   -55,   199,   -55,   -55,   -55,   -55,
     181,   181,   181,   181,   -32,   -32,   -55,   -55,   -55,   181,
     181,   128,   128,   128,   128,   136,   136,   -55,   -55,   128,
     128,   -55,   -55,   174,    52,   112,   112,   -19,   -19,   -19,
     -19,   174,    35,   -55,   182,   189,   156,   207,   -55,    46,
     192,    -9,   174,    35,   193,   142,   -55,   195,   174,   196,
     -55
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       2,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    18,    24,    25,     0,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,    49,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     5,     6,     0,     7,    17,    23,    30,
      35,    36,    31,    32,    13,    12,    14,    15,    16,    33,
      34,    41,    42,    37,    38,    20,    19,    21,    22,    39,
      40,    27,    28,     0,     0,    47,    48,    43,    44,    45,
      46,     0,     0,    50,     0,     0,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
      54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -55,   -54,   -21,   -20,   -18,   125,   -55,   -55,   -55,
     -55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    10,    31,    32,    33,    34,    43,    11,    12,
      13
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    35,    40,    -1,    -1,    41,    54,    55,    56,    45,
      46,    44,    47,    69,    70,    14,    80,    69,    70,    82,
      15,    84,    -1,    -1,    16,   133,    17,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    25,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    25,
      26,   111,   112,    27,    28,    25,    26,    26,    81,   124,
      52,    53,    54,    55,    56,    37,    18,   125,    19,    48,
      49,    50,    51,    20,    29,    21,    30,    22,   134,    23,
      87,    36,   114,    39,   139,    52,    53,    54,    55,    56,
      57,    58,    24,    80,    82,    69,    70,    48,    49,    50,
      51,   126,    88,    72,    73,    74,    75,    63,    64,    65,
      66,   131,   135,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    76,    77,    42,    59,    60,    61,
      62,    88,    -1,    -1,    74,    75,    63,    64,    65,    66,
      79,    67,    68,    63,    64,    65,    66,     2,    67,    68,
      69,    70,    85,    76,    77,    71,     3,     4,     5,     6,
       7,     8,     9,    87,    63,    64,    65,    66,    52,    53,
      54,    55,    56,   137,    65,    66,   113,    86,    52,    53,
      54,    55,    56,     3,     4,     5,     6,     7,     8,     9,
     129,   121,    52,    53,    54,    55,    56,   115,   116,   117,
     118,   119,   120,    83,   123,    63,    64,    65,    66,    69,
      70,    69,    70,   122,    78,   127,    89,    52,    53,    54,
      55,    56,   128,   130,   132,     0,   136,   138,     0,   140
};

static const yytype_int16 yycheck[] =
{
      21,    19,    22,    22,    23,    23,    38,    39,    40,    30,
      30,    29,    30,    26,    27,     6,    37,    26,    27,    39,
       6,    34,    41,    42,     6,    34,     6,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,     3,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     3,
       4,    69,    70,     7,     8,     3,     4,     4,    34,   113,
      36,    37,    38,    39,    40,    30,    30,   121,    30,    20,
      21,    22,    23,    30,    28,    35,    30,    35,   132,    35,
      31,     9,    30,    30,   138,    36,    37,    38,    39,    40,
      41,    42,    35,   114,   114,    26,    27,    20,    21,    22,
      23,   122,    31,    20,    21,    22,    23,    36,    37,    38,
      39,   129,   133,    36,    37,    38,    39,    40,    41,    42,
      20,    21,    22,    23,    41,    42,     5,    20,    21,    22,
      23,    31,    20,    21,    22,    23,    36,    37,    38,    39,
       6,    41,    42,    36,    37,    38,    39,     0,    41,    42,
      26,    27,    37,    41,    42,    31,     9,    10,    11,    12,
      13,    14,    15,    31,    36,    37,    38,    39,    36,    37,
      38,    39,    40,    31,    38,    39,    32,    34,    36,    37,
      38,    39,    40,     9,    10,    11,    12,    13,    14,    15,
      34,    32,    36,    37,    38,    39,    40,    72,    73,    74,
      75,    76,    77,    34,     5,    36,    37,    38,    39,    26,
      27,    26,    27,    35,    31,    33,    31,    36,    37,    38,
      39,    40,    33,    16,    32,    -1,    33,    32,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    44,     0,     9,    10,    11,    12,    13,    14,    15,
      45,    51,    52,    53,     6,     6,     6,     6,    30,    30,
      30,    35,    35,    35,    35,     3,     4,     7,     8,    28,
      30,    46,    47,    48,    49,    48,     9,    30,    46,    30,
      47,    48,     5,    50,    48,    46,    47,    48,    20,    21,
      22,    23,    36,    37,    38,    39,    40,    41,    42,    20,
      21,    22,    23,    36,    37,    38,    39,    41,    42,    26,
      27,    31,    20,    21,    22,    23,    41,    42,    31,     6,
      46,    34,    47,    34,    34,    37,    34,    31,    31,    31,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    48,    48,    32,    30,    49,    49,    49,    49,    49,
      49,    32,    35,     5,    45,    45,    46,    33,    33,    34,
      16,    48,    32,    34,    45,    46,    33,    31,    32,    45,
      33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    45,    45,    45,    45,
      45,    46,    46,    46,    46,    46,    46,    46,    47,    47,
      47,    47,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    50,
      50,    51,    51,    52,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     5,     5,     5,     5,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     1,     1,     1,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,    11,     7,     7,    14
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: program statement  */
#line 56 "parser.y"
                       {}
#line 1227 "parser.tab.c"
    break;

  case 3: /* program: %empty  */
#line 57 "parser.y"
      {}
#line 1233 "parser.tab.c"
    break;

  case 4: /* statement: T_INT T_IDENTIFIER T_ASSIGN int_exp T_END_EXP  */
#line 61 "parser.y"
                                                           { printf("%d \n", (yyvsp[-1].intval)); }
#line 1239 "parser.tab.c"
    break;

  case 5: /* statement: T_DOUBLE T_IDENTIFIER T_ASSIGN double_exp T_END_EXP  */
#line 62 "parser.y"
                                                                { printf("%f \n", (yyvsp[-1].dval)); }
#line 1245 "parser.tab.c"
    break;

  case 6: /* statement: T_BOOL T_IDENTIFIER T_ASSIGN bool_exp T_END_EXP  */
#line 63 "parser.y"
                                                            { printf("%s \n", (yyvsp[-1].boolvalue) ? "True":"False"); }
#line 1251 "parser.tab.c"
    break;

  case 7: /* statement: T_STRING T_IDENTIFIER T_ASSIGN string_exp T_END_EXP  */
#line 64 "parser.y"
                                                                { printf("%s \n", (yyvsp[-1].strval)); }
#line 1257 "parser.tab.c"
    break;

  case 8: /* statement: if_statement  */
#line 65 "parser.y"
                         { printf("izvrsena if naredba \n"); }
#line 1263 "parser.tab.c"
    break;

  case 9: /* statement: while_statement  */
#line 66 "parser.y"
                            { printf("izvrsena while naredba \n"); }
#line 1269 "parser.tab.c"
    break;

  case 10: /* statement: for_statement  */
#line 67 "parser.y"
                          { printf("izvrsena for naredba \n"); }
#line 1275 "parser.tab.c"
    break;

  case 11: /* int_exp: INT_CONSTANT  */
#line 70 "parser.y"
                      { (yyval.intval) = (yyvsp[0].intval); }
#line 1281 "parser.tab.c"
    break;

  case 12: /* int_exp: int_exp T_PLUS int_exp  */
#line 71 "parser.y"
                                 { (yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval); }
#line 1287 "parser.tab.c"
    break;

  case 13: /* int_exp: int_exp T_MINUS int_exp  */
#line 72 "parser.y"
                                  { (yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval); }
#line 1293 "parser.tab.c"
    break;

  case 14: /* int_exp: int_exp T_MULTIPLY int_exp  */
#line 73 "parser.y"
                                     { (yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval); }
#line 1299 "parser.tab.c"
    break;

  case 15: /* int_exp: int_exp T_DIV int_exp  */
#line 74 "parser.y"
                                { (yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval); }
#line 1305 "parser.tab.c"
    break;

  case 16: /* int_exp: int_exp T_MOD int_exp  */
#line 75 "parser.y"
                                { (yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval); }
#line 1311 "parser.tab.c"
    break;

  case 17: /* int_exp: T_LEFT_PAR int_exp T_RIGHT_PAR  */
#line 76 "parser.y"
                                         { (yyval.intval) = (yyvsp[-1].intval); }
#line 1317 "parser.tab.c"
    break;

  case 18: /* double_exp: DOUBLE_CONSTANT  */
#line 79 "parser.y"
                             { (yyval.dval) = (yyvsp[0].dval); }
#line 1323 "parser.tab.c"
    break;

  case 19: /* double_exp: double_exp T_PLUS double_exp  */
#line 80 "parser.y"
                                       { (yyval.dval) = (yyvsp[-2].dval) + (yyvsp[0].dval); }
#line 1329 "parser.tab.c"
    break;

  case 20: /* double_exp: double_exp T_MINUS double_exp  */
#line 81 "parser.y"
                                        { (yyval.dval) = (yyvsp[-2].dval) - (yyvsp[0].dval); }
#line 1335 "parser.tab.c"
    break;

  case 21: /* double_exp: double_exp T_MULTIPLY double_exp  */
#line 82 "parser.y"
                                           { (yyval.dval) = (yyvsp[-2].dval) * (yyvsp[0].dval); }
#line 1341 "parser.tab.c"
    break;

  case 22: /* double_exp: double_exp T_DIV double_exp  */
#line 83 "parser.y"
                                      { (yyval.dval) = (yyvsp[-2].dval) / (yyvsp[0].dval); }
#line 1347 "parser.tab.c"
    break;

  case 23: /* double_exp: T_LEFT_PAR double_exp T_RIGHT_PAR  */
#line 84 "parser.y"
                                            { (yyval.dval) = (yyvsp[-1].dval); }
#line 1353 "parser.tab.c"
    break;

  case 24: /* bool_exp: T_TRUE  */
#line 87 "parser.y"
                 { (yyval.boolvalue) = (yyvsp[0].boolvalue); }
#line 1359 "parser.tab.c"
    break;

  case 25: /* bool_exp: T_FALSE  */
#line 88 "parser.y"
                  { (yyval.boolvalue) = (yyvsp[0].boolvalue); }
#line 1365 "parser.tab.c"
    break;

  case 26: /* bool_exp: compare_exp  */
#line 89 "parser.y"
                      { (yyval.boolvalue) = (yyvsp[0].boolvalue); }
#line 1371 "parser.tab.c"
    break;

  case 27: /* bool_exp: bool_exp T_AND bool_exp  */
#line 90 "parser.y"
                                  { (yyval.boolvalue) = (yyvsp[-2].boolvalue) && (yyvsp[0].boolvalue); }
#line 1377 "parser.tab.c"
    break;

  case 28: /* bool_exp: bool_exp T_OR bool_exp  */
#line 91 "parser.y"
                                 { (yyval.boolvalue) = (yyvsp[-2].boolvalue) || (yyvsp[0].boolvalue); }
#line 1383 "parser.tab.c"
    break;

  case 29: /* bool_exp: T_NOT_EQUAL bool_exp  */
#line 92 "parser.y"
                               { (yyval.boolvalue) = (yyvsp[0].boolvalue) == 1; }
#line 1389 "parser.tab.c"
    break;

  case 30: /* bool_exp: T_LEFT_PAR bool_exp T_RIGHT_PAR  */
#line 93 "parser.y"
                                          { (yyval.boolvalue) = (yyvsp[-1].boolvalue); }
#line 1395 "parser.tab.c"
    break;

  case 31: /* compare_exp: int_exp T_LE int_exp  */
#line 97 "parser.y"
                                  { (yyval.boolvalue) = (yyvsp[-2].intval) <= (yyvsp[0].intval) ? 1 : 0; }
#line 1401 "parser.tab.c"
    break;

  case 32: /* compare_exp: int_exp T_GE int_exp  */
#line 98 "parser.y"
                                 { (yyval.boolvalue) = (yyvsp[-2].intval) >= (yyvsp[0].intval) ? 1 : 0; }
#line 1407 "parser.tab.c"
    break;

  case 33: /* compare_exp: int_exp T_GREATER_THAN int_exp  */
#line 99 "parser.y"
                                           { (yyval.boolvalue) = (yyvsp[-2].intval) > (yyvsp[0].intval) ? 1 : 0; }
#line 1413 "parser.tab.c"
    break;

  case 34: /* compare_exp: int_exp T_LESS_THAN int_exp  */
#line 100 "parser.y"
                                        { (yyval.boolvalue) = (yyvsp[-2].intval) < (yyvsp[0].intval) ? 1 : 0; }
#line 1419 "parser.tab.c"
    break;

  case 35: /* compare_exp: int_exp T_EQ int_exp  */
#line 101 "parser.y"
                                 { (yyval.boolvalue) = (yyvsp[-2].intval) == (yyvsp[0].intval) ? 1 : 0; }
#line 1425 "parser.tab.c"
    break;

  case 36: /* compare_exp: int_exp T_NE int_exp  */
#line 102 "parser.y"
                                 { (yyval.boolvalue) = (yyvsp[-2].intval) != (yyvsp[0].intval) ? 1 : 0; }
#line 1431 "parser.tab.c"
    break;

  case 37: /* compare_exp: double_exp T_LE double_exp  */
#line 103 "parser.y"
                                       { (yyval.boolvalue) = (yyvsp[-2].dval) <= (yyvsp[0].dval) ? 1 : 0; }
#line 1437 "parser.tab.c"
    break;

  case 38: /* compare_exp: double_exp T_GE double_exp  */
#line 104 "parser.y"
                                       { (yyval.boolvalue) = (yyvsp[-2].dval) >= (yyvsp[0].dval) ? 1 : 0; }
#line 1443 "parser.tab.c"
    break;

  case 39: /* compare_exp: double_exp T_GREATER_THAN double_exp  */
#line 105 "parser.y"
                                                 { (yyval.boolvalue) = (yyvsp[-2].dval) > (yyvsp[0].dval) ? 1 : 0; }
#line 1449 "parser.tab.c"
    break;

  case 40: /* compare_exp: double_exp T_LESS_THAN double_exp  */
#line 106 "parser.y"
                                              { (yyval.boolvalue) = (yyvsp[-2].dval) < (yyvsp[0].dval) ? 1 : 0; }
#line 1455 "parser.tab.c"
    break;

  case 41: /* compare_exp: double_exp T_EQ double_exp  */
#line 107 "parser.y"
                                       { (yyval.boolvalue) = (yyvsp[-2].dval) == (yyvsp[0].dval) ? 1 : 0; }
#line 1461 "parser.tab.c"
    break;

  case 42: /* compare_exp: double_exp T_NE double_exp  */
#line 108 "parser.y"
                                       { (yyval.boolvalue) = (yyvsp[-2].dval) != (yyvsp[0].dval) ? 1 : 0; }
#line 1467 "parser.tab.c"
    break;

  case 43: /* compare_exp: compare_exp T_LE compare_exp  */
#line 109 "parser.y"
                                         { (yyval.boolvalue) = (yyvsp[-2].boolvalue) <= (yyvsp[0].boolvalue) ? 1 : 0; }
#line 1473 "parser.tab.c"
    break;

  case 44: /* compare_exp: compare_exp T_GE compare_exp  */
#line 110 "parser.y"
                                         { (yyval.boolvalue) = (yyvsp[-2].boolvalue) >= (yyvsp[0].boolvalue) ? 1 : 0; }
#line 1479 "parser.tab.c"
    break;

  case 45: /* compare_exp: compare_exp T_GREATER_THAN compare_exp  */
#line 111 "parser.y"
                                                   { (yyval.boolvalue) = (yyvsp[-2].boolvalue) > (yyvsp[0].boolvalue) ? 1 : 0; }
#line 1485 "parser.tab.c"
    break;

  case 46: /* compare_exp: compare_exp T_LESS_THAN compare_exp  */
#line 112 "parser.y"
                                                { (yyval.boolvalue) = (yyvsp[-2].boolvalue) < (yyvsp[0].boolvalue) ? 1 : 0; }
#line 1491 "parser.tab.c"
    break;

  case 47: /* compare_exp: compare_exp T_EQ compare_exp  */
#line 113 "parser.y"
                                         { (yyval.boolvalue) = (yyvsp[-2].boolvalue) == (yyvsp[0].boolvalue) ? 1 : 0; }
#line 1497 "parser.tab.c"
    break;

  case 48: /* compare_exp: compare_exp T_NE compare_exp  */
#line 114 "parser.y"
                                         { (yyval.boolvalue) = (yyvsp[-2].boolvalue) != (yyvsp[0].boolvalue) ? 1 : 0; }
#line 1503 "parser.tab.c"
    break;

  case 49: /* string_exp: STRING_CONSTANT  */
#line 117 "parser.y"
                            { (yyval.strval) = (yyvsp[0].strval); }
#line 1509 "parser.tab.c"
    break;

  case 50: /* string_exp: STRING_CONSTANT T_PLUS STRING_CONSTANT  */
#line 118 "parser.y"
                                                   { 
                (yyval.strval) = malloc(strlen((yyvsp[-2].strval)) + strlen((yyvsp[0].strval)) + 1);
                strcpy((yyval.strval), (yyvsp[-2].strval));
                strcat((yyval.strval), (yyvsp[0].strval));
                free((yyvsp[-2].strval));
                free((yyvsp[0].strval));
           }
#line 1521 "parser.tab.c"
    break;

  case 51: /* if_statement: T_IF T_LEFT_PAR bool_exp T_RIGHT_PAR T_LEFT_BRA statement T_RIGHT_BRA T_ELSE T_LEFT_BRA statement T_RIGHT_BRA  */
#line 128 "parser.y"
                                                                                                                          { if ((yyvsp[-8].boolvalue) == 1) { (yyval.intval) = (yyvsp[-5].intval); } else { (yyval.intval) = (yyvsp[-1].intval); } }
#line 1527 "parser.tab.c"
    break;

  case 52: /* if_statement: T_IF T_LEFT_PAR bool_exp T_RIGHT_PAR T_LEFT_BRA statement T_RIGHT_BRA  */
#line 129 "parser.y"
                                                                                  { if ((yyvsp[-4].boolvalue) == 1) { (yyval.intval) = (yyvsp[-1].intval); } }
#line 1533 "parser.tab.c"
    break;

  case 53: /* while_statement: T_WHILE T_LEFT_PAR bool_exp T_RIGHT_PAR T_LEFT_BRA statement T_RIGHT_BRA  */
#line 133 "parser.y"
                                                                                   { if ((yyvsp[-4].boolvalue) == 1) { (yyval.intval) = (yyvsp[-1].intval); } }
#line 1539 "parser.tab.c"
    break;

  case 54: /* for_statement: T_FOR T_LEFT_PAR T_INT T_IDENTIFIER T_ASSIGN int_exp T_END_EXP bool_exp T_END_EXP int_exp T_RIGHT_PAR T_LEFT_BRA statement T_RIGHT_BRA  */
#line 137 "parser.y"
                                                                                                                                              { if((yyvsp[-6].boolvalue) == 1) { (yyval.intval) = (yyvsp[-1].intval); (yyvsp[-8].intval) = (yyvsp[-4].intval); } }
#line 1545 "parser.tab.c"
    break;


#line 1549 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 142 "parser.y"


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

