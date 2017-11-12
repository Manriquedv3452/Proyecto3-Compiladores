/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison.y" /* yacc.c:339  */


/* Taken from http://www.quut.com/c/ANSI-C-grammar-y.html*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "semanticStack.h"
#include "symbolTable.h"
#define FALSE 0
#define TRUE 1

#include "semanticActions.h"

void yyerror(const char *);
void yynote(char *noteInfo, int line, int column, int writeCode, int cursorPosi);
void yywarning(char *warningInfo, int line, int column, int writeCode, int cursorPosi);
extern int getToken(void);
extern char* yytext;
extern int yylineno;
extern int column;
extern int previousColumn;
extern void print(void);
extern int nextToken;

extern char* previousToken;
extern int cursorPos;
extern int previousTokenCode;

#define yylex getToken
#define YYERROR_VERBOSE 1

int errorFound = FALSE;
int inFunction = FALSE;
int inContext = FALSE;
int unDecleared = FALSE;
char* actualFunction;


#line 106 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    FUNC_NAME = 262,
    SIZEOF = 263,
    PTR_OP = 264,
    INC_OP = 265,
    DEC_OP = 266,
    LEFT_OP = 267,
    RIGHT_OP = 268,
    LE_OP = 269,
    GE_OP = 270,
    EQ_OP = 271,
    NE_OP = 272,
    AND_OP = 273,
    OR_OP = 274,
    MUL_ASSIGN = 275,
    DIV_ASSIGN = 276,
    MOD_ASSIGN = 277,
    ADD_ASSIGN = 278,
    SUB_ASSIGN = 279,
    LEFT_ASSIGN = 280,
    RIGHT_ASSIGN = 281,
    AND_ASSIGN = 282,
    XOR_ASSIGN = 283,
    OR_ASSIGN = 284,
    TYPEDEF_NAME = 285,
    ENUMERATION_CONSTANT = 286,
    TYPEDEF = 287,
    EXTERN = 288,
    STATIC = 289,
    AUTO = 290,
    REGISTER = 291,
    INLINE = 292,
    CONST = 293,
    RESTRICT = 294,
    VOLATILE = 295,
    BOOL = 296,
    CHAR = 297,
    SHORT = 298,
    INT = 299,
    LONG = 300,
    SIGNED = 301,
    UNSIGNED = 302,
    FLOAT = 303,
    DOUBLE = 304,
    VOID = 305,
    COMPLEX = 306,
    IMAGINARY = 307,
    STRUCT = 308,
    UNION = 309,
    ENUM = 310,
    ELLIPSIS = 311,
    CASE = 312,
    DEFAULT = 313,
    IF = 314,
    ELSE = 315,
    SWITCH = 316,
    WHILE = 317,
    DO = 318,
    FOR = 319,
    GOTO = 320,
    CONTINUE = 321,
    BREAK = 322,
    RETURN = 323,
    ALIGNAS = 324,
    ALIGNOF = 325,
    ATOMIC = 326,
    GENERIC = 327,
    NORETURN = 328,
    STATIC_ASSERT = 329,
    THREAD_LOCAL = 330
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPEDEF_NAME 285
#define ENUMERATION_CONSTANT 286
#define TYPEDEF 287
#define EXTERN 288
#define STATIC 289
#define AUTO 290
#define REGISTER 291
#define INLINE 292
#define CONST 293
#define RESTRICT 294
#define VOLATILE 295
#define BOOL 296
#define CHAR 297
#define SHORT 298
#define INT 299
#define LONG 300
#define SIGNED 301
#define UNSIGNED 302
#define FLOAT 303
#define DOUBLE 304
#define VOID 305
#define COMPLEX 306
#define IMAGINARY 307
#define STRUCT 308
#define UNION 309
#define ENUM 310
#define ELLIPSIS 311
#define CASE 312
#define DEFAULT 313
#define IF 314
#define ELSE 315
#define SWITCH 316
#define WHILE 317
#define DO 318
#define FOR 319
#define GOTO 320
#define CONTINUE 321
#define BREAK 322
#define RETURN 323
#define ALIGNAS 324
#define ALIGNOF 325
#define ATOMIC 326
#define GENERIC 327
#define NORETURN 328
#define STATIC_ASSERT 329
#define THREAD_LOCAL 330

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 307 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8116

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  397
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  683

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    78,    88,    82,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    96,    84,    89,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    70,    71,    72,    73,    75,    79,    80,
      81,    85,    89,    90,    94,    95,    96,   100,   101,   103,
     107,   108,   110,   111,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   135,   136,   137,   144,   145,   148,
     149,   153,   154,   155,   156,   157,   158,   159,   167,   168,
     169,   170,   171,   172,   176,   177,   184,   185,   185,   186,
     186,   187,   187,   188,   189,   190,   191,   195,   196,   196,
     197,   197,   199,   200,   202,   206,   207,   208,   209,   210,
     214,   215,   216,   217,   218,   220,   222,   227,   228,   229,
     230,   231,   235,   236,   237,   241,   242,   243,   247,   248,
     249,   253,   254,   255,   259,   260,   261,   265,   266,   267,
     268,   269,   273,   274,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   295,   296,   298,   299,   303,
     307,   308,   309,   311,   313,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   333,   334,   335,   339,
     339,   340,   341,   350,   351,   352,   353,   354,   355,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   378,   379,   380,   381,   382,
     383,   384,   388,   389,   393,   394,   398,   399,   400,   404,
     408,   409,   410,   411,   412,   416,   417,   418,   419,   423,
     424,   425,   433,   434,   435,   436,   437,   438,   439,   444,
     445,   447,   448,   452,   453,   455,   457,   461,   465,   466,
     467,   468,   472,   473,   477,   478,   482,   483,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   505,   506,   507,   511,   512,   513,   514,   519,
     520,   521,   522,   524,   525,   530,   531,   536,   537,   539,
     543,   544,   545,   550,   551,   552,   556,   557,   559,   563,
     564,   566,   567,   571,   572,   573,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   603,   604,   605,
     607,   608,   609,   613,   614,   615,   616,   617,   618,   622,
     624,   628,   629,   633,   634,   635,   636,   640,   641,   645,
     646,   647,   648,   649,   650,   654,   655,   655,   656,   656,
     658,   659,   660,   666,   667,   668,   672,   673,   677,   678,
     682,   683,   685,   689,   690,   691,   691,   691,   694,   695,
     705,   706,   707,   708,   709,   710,   714,   715,   716,   717,
     719,   720,   721,   722,   723,   725,   727,   728,   729,   731,
     732,   733,   734,   735,   736,   737,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   755,   756,   760,
     761,   765,   765,   765,   770,   768,   778,   779
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF",
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('",
  "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "$@1", "$@2", "$@3",
  "additive_expression", "$@4", "$@5", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "$@6", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement", "$@7",
  "$@8", "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@9", "$@10",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@11", "$@12", "$@13",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    40,    41,    44,    58,
      91,    93,    46,   123,   125,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -300

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-300)))

#define YYTABLE_NINF -395

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7632,  7799,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,    60,   -63,    -3,  -300,
      44,  -300,  -300,    92,  3588,  3659,  -300,   185,  -300,  -300,
    3730,  3801,  3872,  -300,  7577,  -300,  -300,  -300,    40,    17,
    4817,  8011,  5041,    39,  -300,   141,   283,  -300,    49,  -300,
    3943,   -27,   142,  -300,  -300,  7854,  3375,  7854,  -300,  -300,
    -300,  -300,  -300,    17,  -300,    38,   123,  -300,  7081,  -300,
    -300,  -300,  -300,  -300,  6683,  6771,  6771,  -300,   101,   109,
    4817,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,   510,  -300,  6793,  -300,   902,  1290,  1387,  2260,  2648,
     134,   107,   166,   262,  2842,  -300,   215,  4333,   199,  4395,
     226,   227,   255,   256,  -300,    87,   233,  -300,  -300,  -300,
     305,   268,   141,  -300,  -300,  -300,  7632,   281,  7411,  6111,
     -27,  8045,  7136,  -300,   184,  -300,  7854,  7854,  7191,   154,
    6793,  5063,    17,    29,  -300,  6916,  6133,  -300,   197,  -300,
     221,  4817,  -300,  4817,  -300,  -300,  8011,  5085,   418,  -300,
    -300,   273,   210,   362,  -300,  -300,   694,  6793,   369,  -300,
    6793,  5175,  5197,  5219,  6793,  5309,  5331,  6793,  6793,  5353,
    6793,  6793,  6793,  5443,  6793,  6793,  6793,  5465,  5487,  5577,
    5599,  5621,  6793,  5711,  5733,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,   368,   377,  -300,  -300,  -300,  -300,  -300,  -300,
     105,  6529,  -300,    92,  7356,  3029,  -300,  7466,  -300,  -300,
     213,   327,   290,  -300,   317,  4907,  -300,   309,   311,  6155,
    -300,  -300,  6793,  -300,    54,  -300,   314,  7246,  7301,  3446,
    -300,    17,   169,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,   320,   321,  6375,  -300,   344,   353,  6243,   221,
    7521,  6265,   335,   341,   350,   359,   371,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  6793,  6793,
    -300,  5755,   374,  6551,  -300,  -300,   329,  -300,   251,  -300,
    -300,  -300,  6793,  -300,  6793,  -300,  6793,   999,  -300,  6793,
    -300,  6793,  1484,  1581,  -300,  1678,  1775,  1872,  1969,  -300,
    2066,  2163,  2357,  2454,  -300,  2551,  -300,  2745,  -300,   134,
    -300,   107,  -300,   166,    11,  -300,   262,   372,   111,   383,
     388,   536,  -300,  -300,  -300,   281,   387,  5845,    75,    18,
    -300,    32,  3998,    74,    53,    15,    22,  4451,  -300,  -300,
      81,  -300,  -300,  -300,  -300,  3119,  -300,  -300,  -300,  -300,
    -300,  -300,  6861,  -300,   334,  -300,  -300,  -300,  7687,  7743,
     467,  -300,   477,  6639,   401,  4929,  -300,  -300,  6793,  -300,
     404,   408,  -300,   219,   241,  -300,  6793,  -300,  3517,  -300,
    -300,  -300,  -300,   409,  6375,  -300,  -300,  6793,  -300,   412,
    -300,   423,  6375,  -300,   422,   441,  6287,   440,   440,  -300,
    7909,  7943,  -300,  -300,  -300,  -300,  -300,  6507,  -300,  6793,
    -300,  5867,  6793,  -300,  -300,  -300,  -300,  1096,  1193,  6793,
    6793,  6793,  6793,  6793,   430,   436,   161,  5889,   535,  -300,
     212,  6529,   114,  -300,  -300,  4042,  4637,  -300,  4637,   474,
    6793,  6793,   479,  6793,  5979,   488,   494,  7632,  3209,  -300,
      26,  -300,  -300,  -300,  -300,  -300,  -300,   106,  6793,  -300,
     802,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
     490,  -300,   491,   492,   495,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,   507,   508,  -300,  -300,   513,  6375,  -300,  -300,
    6793,  -300,   514,    79,   132,  -300,   487,  7026,   177,   230,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,   480,
    -300,   515,    82,  -300,  6507,  6397,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,   496,  -300,  4637,  2939,   346,  6793,
     376,   481,   381,   509,   117,   425,  3299,  4482,  4504,  -300,
    -300,  6793,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
     516,   517,  -300,  6793,  6001,  -300,  7977,  6793,  -300,  -300,
    6507,  6419,  -300,  -300,  -300,  -300,  -300,  -300,  6529,  -300,
    -300,  6529,  4637,  -300,  6793,  4637,   398,  4637,  4637,  4637,
    4132,  6793,  6793,  6023,  6793,   526,  6793,  4764,  6661,  4951,
    -300,  -300,  -300,  -300,  -300,  6971,  -300,  -300,  -300,  -300,
    -300,  -300,   531,  -300,  -300,  -300,   527,  -300,  -300,  -300,
     400,   410,   528,   471,   483,  4637,   485,   530,  4637,   501,
    4637,   504,  4594,  4637,   506,  4637,  4637,   511,   512,   518,
    4727,    50,  4637,  -300,  4637,  4637,  -300,  4637,  4175,  -300,
    4637,  4637,  -300,  -300,  4265,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   174,   153,   154,   155,   157,   158,   222,   218,
     219,   220,   168,   160,   161,   162,   163,   166,   167,   164,
     165,   159,   169,   170,   182,   183,     0,     0,   221,   223,
       0,   156,   390,     0,     0,     0,   172,     0,   173,   171,
       0,     0,     0,   132,     0,   387,   389,   145,   206,     0,
       0,     0,     0,     0,   228,     0,     0,   130,     0,   146,
       0,   227,     0,   135,   137,     0,     0,     0,   139,   141,
     143,     1,   388,     0,    11,     0,     0,   209,     0,     2,
       8,     9,    12,    13,     0,     0,     0,    10,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    24,     3,     4,
       6,    41,    54,     0,    56,     0,     0,     0,     0,     0,
      95,    98,   101,   104,     0,   129,     0,     0,     0,     0,
       0,     0,     0,     0,   133,     0,   254,   221,   255,   251,
     250,   134,     0,   131,   152,   149,     0,     0,     0,     0,
     226,     0,     0,   184,     0,   188,     0,     0,     0,     0,
       0,     0,   208,     0,   202,     0,     0,   194,   274,   271,
     275,     0,    45,     0,    42,    43,     0,     0,    54,   112,
     125,     0,     0,     0,    30,    31,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   190,   272,   269,   192,
     224,   217,     0,     0,   242,   229,   253,   256,   249,   147,
       0,     0,   396,     0,     0,     0,   395,     0,   266,   240,
     265,     0,     0,   260,     0,     0,   230,    49,     0,     0,
     178,   185,     0,   186,     0,   195,   201,     0,     0,     0,
     175,   207,     0,   204,   216,   215,   213,   212,   211,   203,
     210,   293,     0,     0,     0,   277,    49,     0,     0,   273,
       0,     0,     0,     0,     0,     0,     0,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   114,     0,     7,
       5,     0,     0,     0,    29,    26,     0,    37,     0,    28,
      66,    63,     0,    64,     0,    65,     0,     0,    72,     0,
      73,     0,     0,     0,    78,     0,     0,     0,     0,    86,
       0,     0,     0,     0,    90,     0,    94,     0,    97,    96,
     100,    99,   103,   102,     0,   106,   105,     0,     0,     0,
       0,     0,   299,   150,   397,     0,     2,     0,     0,     0,
     345,     0,     0,     0,     0,     0,     0,     0,   333,   340,
       0,   338,   339,   319,   320,     0,   336,   321,   322,   323,
     324,   247,     0,   263,   274,   264,   246,   239,     0,     0,
     248,   241,     0,     0,     0,     0,   231,   238,     0,   237,
      49,     0,   199,   189,     0,   187,     0,   180,     0,   176,
     205,   294,   276,     0,     0,   278,   284,     0,   283,     0,
     295,     0,     0,   285,    49,     0,     0,    46,     0,    47,
       0,     0,   113,   128,   127,   126,    36,     0,    55,    34,
      27,     0,    35,    25,    58,    60,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   304,
       0,     0,     0,   311,   393,     0,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   386,
       0,   384,   377,   383,   378,   381,   379,     0,   342,   341,
       0,   334,   337,   259,   262,   257,   261,   268,   267,   245,
       0,   233,     0,     0,     0,   234,   236,   198,   197,   196,
     200,   280,     0,     0,   282,   296,     0,     0,   286,   292,
       0,   291,     0,     0,     0,    17,     0,     0,     0,     0,
      40,    39,    38,   111,   109,   110,   108,   318,   317,     0,
     300,     0,     0,   314,   302,     0,   297,   303,   310,   309,
     312,   330,   325,   331,     0,   332,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   385,
     376,   382,   380,   243,   244,   232,   235,   279,   281,   288,
       0,     0,   289,     0,     0,    15,     0,     0,    16,    14,
       0,     0,    32,   301,   315,   316,   313,   307,     0,   298,
     306,     0,     0,   329,   349,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     287,   290,    23,    22,    21,     0,    18,    20,    33,   308,
     305,   327,   344,   346,   359,   356,   125,   358,   357,   350,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   365,     0,     0,   354,     0,     0,   369,
       0,     0,   371,   352,     0,   343,   347,   360,   364,   361,
     363,   362,   351,   375,   370,   372,   374,   373,   355,   366,
     367,   368,   353
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,  -300,  -300,  -300,  -300,   188,    51,  -300,  -300,
     484,  -300,   -69,  -176,  -300,  -300,  -300,   152,  -300,  -300,
     119,   267,   415,   416,   414,   419,   426,  -300,   -21,    67,
    -300,   -76,   -47,  -115,    37,  -300,   498,  -300,  -300,    24,
    -300,  -300,    35,   -96,   -50,  -300,  -164,  -300,   558,  -105,
    -300,     1,  -300,  -300,   -15,   -59,   -56,  -130,  -128,  -300,
    -132,  -300,    10,  -111,  -154,  -210,   205,    65,  -300,   181,
      19,    96,  -300,  -300,  -300,  -131,  -300,   271,  -299,  -300,
    -300,  -300,  -300,  -300,  -300,   593,  -300,  -300,  -300,  -300,
    -300
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    97,    98,    75,    99,   100,   514,   515,   101,   296,
     168,   103,   104,   105,   302,   304,   306,   106,   309,   311,
     107,   108,   109,   110,   111,   112,   113,   114,   169,   170,
     288,   360,   116,    32,   223,    58,    59,   221,    34,   117,
      36,    37,   142,   143,   118,   244,   245,    38,    76,    77,
      39,   119,    41,    42,   246,    61,    62,   130,   262,   232,
     233,   234,   516,   159,   160,   449,   450,   451,   452,   453,
      43,   362,   363,   544,   459,   364,   365,   366,   367,   368,
     462,   646,   369,   370,    44,    45,    46,   136,   345,   137,
     224
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     129,    40,    40,   140,   269,   123,   226,   208,   307,   239,
     231,   343,   439,    50,   171,   144,   471,   144,    60,   460,
      74,   222,   158,   473,    35,    35,   268,   559,   157,   115,
     258,   115,    74,   463,   179,    40,    40,    33,    47,   150,
     125,    40,    40,    40,   263,    40,   241,   257,   260,   138,
     131,   671,   241,   139,   469,   393,   470,   128,    35,    35,
     120,   121,   158,    48,    35,    35,    35,   206,    35,   209,
     216,    63,    64,    51,   218,   467,   458,    68,    69,    70,
     573,    33,   478,   585,   145,   171,   145,   171,   214,   291,
     440,   157,   144,    53,   461,    54,   144,   144,   144,   158,
     172,   298,   148,   254,   256,   385,   134,   561,   464,   344,
     361,   300,   442,   259,   472,   538,  -214,   220,   602,   375,
      52,   474,  -214,    73,   152,   560,   334,   132,   338,   115,
     115,   217,   394,   437,   404,   438,   151,    40,   124,    40,
     128,   416,   411,    49,    54,    54,   257,   260,   133,   672,
     468,   241,   241,   395,  -328,   251,    40,   128,   574,   291,
      35,   145,    35,   586,   215,   145,   145,   145,    55,   558,
     258,   272,    74,   273,   374,   230,   274,   166,    56,    35,
     479,   247,   248,  -151,   291,   167,    65,    54,    66,   291,
     443,    57,   230,   603,   447,   392,   448,   144,   144,   157,
     207,   153,   199,   135,  -151,   562,   238,   154,   220,   575,
     576,   292,   539,   534,   454,   373,    54,    55,    55,   198,
     269,   115,    54,   267,   428,    40,    40,    56,    40,   497,
     499,   580,   252,   434,   276,   435,   128,   436,   253,   529,
     217,   537,   498,   297,    54,   530,   484,   486,    35,    35,
     361,    35,   432,   400,   579,   576,   604,   605,   607,   609,
      55,   263,   200,   242,    47,   128,   145,   145,    67,   217,
      56,    40,   128,   155,   289,   155,  -270,   156,  -270,   156,
     201,   477,   507,   243,   126,    56,  -252,   293,   342,   372,
     535,   378,   205,   156,    35,    55,   536,   270,   242,    56,
     457,   271,   384,   210,   211,    56,   391,   230,   581,   316,
     317,   318,   320,   321,   582,   140,   374,    55,   380,    56,
     242,     9,    10,    11,   587,   590,   115,    56,   376,   291,
     429,   403,   433,   212,   213,   409,   292,    54,   415,   312,
     313,   315,   292,     9,    10,    11,  -148,   594,   157,   500,
     290,   291,   555,   557,   127,   422,   423,   125,   425,  -252,
    -252,  -252,  -252,  -252,   225,   294,    40,  -258,   379,    56,
     587,   590,   299,    40,   339,   115,   127,   439,   619,    40,
      40,   620,   599,   340,   547,   548,   217,   550,   552,    35,
     386,    56,   387,   396,   381,   382,    35,   401,   402,   439,
     532,   439,    35,    35,   377,   217,   430,   431,   342,   230,
     372,   439,   417,   128,   156,   230,   230,   217,   418,   523,
     524,   525,   526,   595,   291,   405,   115,   419,    79,    80,
      81,    82,    83,    84,   406,    85,    86,   420,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   466,   421,
     490,   441,   493,   597,   291,   494,    87,   426,   600,   291,
     444,   158,   322,   323,   325,   445,   455,   157,    40,    40,
     487,   502,   650,   596,   503,   623,   291,   647,   291,   506,
     488,    40,   491,   512,   439,   495,   439,   648,   291,   496,
     501,    35,    35,   504,   342,    88,   520,    89,   522,   423,
     505,    90,   657,   508,    35,   439,   423,   439,   217,   423,
      91,    92,    93,    94,    95,    96,   287,    47,   342,   173,
     174,   175,   509,   427,   359,   630,   631,   633,   634,   527,
     636,   639,   641,   644,   102,   528,   102,   446,   533,    79,
      80,    81,    82,    83,    84,   423,    85,    86,   651,   291,
     553,   542,   543,   546,   545,   549,   554,    40,   598,   158,
     652,   291,   654,   291,   583,   157,   577,    87,   162,   164,
     165,   563,   564,   565,   570,   592,   566,   571,   658,   291,
      35,   660,   291,   664,   291,   601,   176,   102,   567,   568,
     177,   645,   178,    47,   569,   572,   584,   610,   611,   588,
     591,   342,   342,   635,  -128,   649,    88,   655,    89,   518,
     667,   668,    90,   327,   331,   329,   447,   669,   448,   341,
     333,    91,    92,    93,    94,    95,    96,   616,   423,   336,
     219,   149,   519,   540,   102,   102,   482,    72,     0,     0,
     612,   614,   593,     0,   617,   588,   591,   342,   342,     0,
       0,     0,     0,     0,     0,   342,     0,     0,   342,     0,
       0,   423,     0,     0,   102,     0,   626,     0,   102,     0,
       0,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,     0,   102,   621,     0,
       0,   622,     0,   624,   625,   627,   629,    79,    80,    81,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   423,     0,     0,
       0,     0,     0,     0,   626,    87,   102,     0,     0,     0,
       0,   653,     0,     0,   656,     0,   659,     0,   662,   663,
       0,   665,   666,     0,     0,     0,     0,     0,   673,     0,
     674,   675,     0,   676,   678,     0,   679,   680,     0,     0,
     682,     0,     0,     0,    88,     0,    89,     0,     0,     0,
      90,   295,     0,     0,     0,     0,     0,   102,     0,    91,
      92,    93,    94,    95,    96,     0,   102,     0,   102,     0,
     102,     0,     0,   102,     0,   102,     0,     0,     0,     0,
       0,     0,  -335,     1,     0,  -335,  -335,  -335,  -335,  -335,
    -335,     0,  -335,  -335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     2,  -335,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,  -335,
    -335,    27,  -335,    28,  -335,    29,  -335,    31,  -335,     0,
     102,     0,     0,     0,     0,  -335,  -335,  -335,  -335,  -335,
    -335,  -335,  -335,     0,     0,     0,     0,     0,     0,     0,
       0,  -335,     0,   180,     0,   -67,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,   102,   102,     0,   102,     0,     0,
       0,   102,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -67,     0,   -67,   -67,   -67,   181,   -67,
     -67,   -67,   -67,   182,   183,   -67,   -67,   -67,   -67,   -67,
     180,   -67,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     -74,     0,   -74,   -74,   -74,   181,   -74,   -74,   -74,   -74,
     182,   183,   -74,   -74,   -74,   -74,   -74,   180,   -74,   -69,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,     0,   -69,
     -69,   -69,   181,   -69,   -69,   -69,   -69,   182,   183,   -69,
     -69,   -69,   -69,   -69,   180,   -69,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,   -71,     0,   -71,   -71,   -71,   181,
     -71,   -71,   -71,   -71,   182,   183,   -71,   -71,   -71,   -71,
     -71,   184,   -71,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,     0,   -75,   -75,   -75,   -75,   185,   186,   -75,
     -75,     0,     0,   -75,   -75,   -75,   -75,   -75,   187,   -75,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   188,
     189,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -80,   -80,   -80,   -80,   -80,   184,   -80,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -79,     0,   -79,   -79,   -79,
     -79,   185,   186,   -79,   -79,     0,     0,   -79,   -79,   -79,
     -79,   -79,   184,   -79,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,     0,   -76,   -76,   -76,   -76,   185,   186,
     -76,   -76,     0,     0,   -76,   -76,   -76,   -76,   -76,   184,
     -76,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
       0,   -77,   -77,   -77,   -77,   185,   186,   -77,   -77,     0,
       0,   -77,   -77,   -77,   -77,   -77,   187,   -77,   -85,   -85,
     -85,   -85,   -85,   -85,     0,   -85,   -85,   188,   189,   -85,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,   -85,
     -85,   -85,   -85,   187,   -85,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   188,   189,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,     0,   -83,   -83,   -83,   -83,   -83,
     187,   -83,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
     -84,   188,   189,   -84,   -84,   -84,   -84,   -84,   -84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,   -84,   -84,   -84,   -84,   -84,   187,   -84,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   188,   189,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,
     -81,   -81,   -81,   -81,   187,   -81,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   188,   189,   -82,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,   -82,   -82,   -82,   -82,
     -82,   190,   -82,   -87,   -87,   -87,   -87,   -87,   -87,     0,
     -87,   -87,     0,     0,   191,   192,   -87,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,     0,     0,   193,   194,   -87,   -87,   -87,   190,   -87,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,     0,
       0,   191,   192,   -91,   -91,   -91,   -91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,     0,
     193,   194,   -91,   -91,   -91,   190,   -91,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -88,     0,     0,   191,   192,
     -88,   -88,   -88,   -88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,     0,   193,   194,   -88,
     -88,   -88,   190,   -88,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   -89,   -89,     0,     0,   191,   192,   -89,   -89,   -89,
     -89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,     0,   193,   194,   -89,   -89,   -89,   195,
     -89,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,
       0,     0,     0,     0,   196,   197,   -92,   -92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,
       0,     0,     0,   -92,   -92,   -92,   195,   -92,   -93,   -93,
     -93,   -93,   -93,   -93,     0,   -93,   -93,     0,     0,     0,
       0,   196,   197,   -93,   -93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,     0,     0,     0,     0,
     -93,   -93,   -93,   202,   -93,  -107,  -107,  -107,  -107,  -107,
    -107,     0,  -107,  -107,     0,     0,     0,     0,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,     0,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,     0,  -107,     0,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,     0,     0,     0,     0,     0,     0,   204,
     439,  -107,  -348,  -348,  -348,  -348,  -348,  -348,     0,  -348,
    -348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,     0,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,     0,   291,     0,     0,
       0,     0,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
       1,     0,   346,    80,    81,    82,    83,    84,  -348,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   347,   348,   349,     0,
     350,   351,   352,   353,   354,   355,   356,   357,    27,    88,
      28,    89,    29,    30,    31,    90,     0,     0,     0,     0,
       0,     0,   225,   358,    91,    92,    93,    94,    95,    96,
     480,     0,   346,    80,    81,    82,    83,    84,   359,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   347,   348,   349,     0,
     350,   351,   352,   353,   354,   355,   356,   357,    27,    88,
      28,    89,    29,    30,    31,    90,     0,     0,     0,     0,
       0,     0,   225,   481,    91,    92,    93,    94,    95,    96,
     556,     0,    79,    80,    81,    82,    83,    84,   359,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    88,
      28,    89,    29,    30,    31,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       1,     0,    79,    80,    81,    82,    83,    84,   359,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      87,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    88,
      28,    89,    29,     0,    31,    90,   146,     0,  -177,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,   359,     0,
       0,     0,     0,     0,     0,  -177,     0,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -177,     0,  -177,   141,  -177,  -181,
    -177,  -177,  -177,  -177,  -177,  -177,     0,     0,   147,     0,
       0,  -177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -177,     0,     2,     0,  -181,  -181,
    -181,  -181,  -181,  -181,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -181,     0,    28,   141,  -181,
    -179,  -181,  -181,  -181,  -181,  -181,  -181,     0,     0,     0,
       0,     0,  -181,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -181,     0,     2,     0,  -179,
    -179,  -179,  -179,  -179,  -179,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -179,     0,    28,     1,
    -179,  -136,  -179,  -179,  -179,  -179,  -179,  -179,     0,     0,
       0,     0,     0,  -179,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -179,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       1,    29,  -138,    31,  -136,  -136,  -136,     0,  -136,     0,
       0,     0,     0,     0,  -136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -136,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     1,    29,  -140,    31,  -138,  -138,  -138,     0,  -138,
       0,     0,     0,     0,     0,  -138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -138,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     1,    29,  -142,    31,  -140,  -140,  -140,     0,
    -140,     0,     0,     0,     0,     0,  -140,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -140,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     1,    29,  -144,    31,  -142,  -142,  -142,
       0,  -142,     0,     0,     0,     0,     0,  -142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -142,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,   134,    29,     0,    31,  -144,  -144,
    -144,     0,  -144,     0,     0,     0,     0,     0,  -144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -144,     0,  -391,     0,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,
    -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,  -391,   465,
       0,   346,    80,    81,    82,    83,    84,     0,    85,    86,
       0,     0,  -391,     0,  -391,     0,  -391,  -391,  -391,     0,
       0,  -151,     0,     0,     0,     0,  -394,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,  -151,   541,     0,   346,    80,    81,    82,    83,
      84,     0,    85,    86,     0,   347,   348,   349,     0,   350,
     351,   352,   353,   354,   355,   356,   357,     0,    88,     0,
      89,     0,     0,    87,    90,     0,     0,     0,     0,     0,
       0,   225,     0,    91,    92,    93,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,   359,     0,   347,
     348,   349,     0,   350,   351,   352,   353,   354,   355,   356,
     357,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,   225,     0,    91,    92,    93,
      94,    95,    96,   628,     0,   346,    80,    81,    82,    83,
      84,   359,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,     0,   346,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,   347,
     348,   349,     0,   350,   351,   352,   353,   354,   355,   356,
     357,     0,    88,     0,    89,     0,    87,     0,    90,     0,
       0,     0,     0,     0,     0,   225,     0,    91,    92,    93,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,   359,   347,   348,   349,     0,   350,   351,   352,   353,
     354,   355,   356,   357,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   225,     0,
      91,    92,    93,    94,    95,    96,   681,     0,   346,    80,
      81,    82,    83,    84,   359,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   347,   348,   349,     0,   350,   351,   352,   353,
     354,   355,   356,   357,   141,    88,  -191,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,   225,     0,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     2,   359,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,   141,     0,  -193,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,  -191,
    -191,     0,  -191,  -191,     0,     0,     0,     0,     0,  -191,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,  -191,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,   475,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,    28,     0,     0,     0,
       0,  -193,  -193,     0,  -193,  -193,     0,     0,     0,     0,
       0,  -193,    87,   606,     0,    79,    80,    81,    82,    83,
      84,     0,    85,    86,  -193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   608,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,    87,    91,    92,    93,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     476,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,    88,     0,    89,     0,     0,     0,
      90,   359,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,     0,     0,   346,    80,    81,
      82,    83,    84,   359,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     346,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,   347,   348,   349,     0,   350,   351,   352,   353,   354,
     355,   356,   357,     0,    88,     0,    89,     0,    87,     0,
      90,   661,     0,     0,     0,     0,     0,   225,     0,    91,
      92,    93,    94,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,   359,   347,   348,   349,     0,   350,   351,
     352,   353,   354,   355,   356,   357,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
     225,     0,    91,    92,    93,    94,    95,    96,     0,     0,
      79,    80,    81,    82,    83,    84,   359,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,   637,     0,    79,    80,    81,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,    78,     0,
      79,    80,    81,    82,    83,    84,   670,    85,    86,     0,
       0,     0,     0,     0,    88,     0,    89,     0,     0,     0,
      90,   638,     0,     0,     0,     0,     0,     2,    87,    91,
      92,    93,    94,    95,    96,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    28,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   383,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     492,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,   642,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,    88,   127,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
     127,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,   643,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   122,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   275,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,   301,     0,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -57,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   303,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -57,   -59,   -59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     305,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -59,   -61,
     -61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -57,     0,   -57,     0,     0,
     -61,   -57,     0,     0,     0,     0,     0,     0,     0,     0,
     -57,   -57,   -57,   -57,   -57,   -57,     0,   -59,     0,   -59,
       0,     0,     0,   -59,     0,     0,     0,     0,     0,     0,
       0,     0,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -61,
       0,   -61,     0,     0,     0,   -61,     0,     0,     0,     0,
       0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     308,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,
     -68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   310,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -68,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   314,     0,    79,    80,    81,    82,
      83,    84,   -70,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -68,
       0,   -68,     0,     0,    87,   -68,     0,     0,     0,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -70,     0,   -70,     0,     0,     0,   -70,     0,     0,
       0,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,   319,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   324,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   326,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,    87,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,   328,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     330,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   332,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,   335,     0,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   337,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   424,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,    87,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,    88,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,   456,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   521,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     531,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
      87,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     551,     0,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   613,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   632,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,   235,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,   264,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,    88,   127,    89,     0,     0,    87,    90,     0,   388,
       0,     0,   236,     9,    10,    11,    91,   237,    93,    94,
      95,    96,     0,    88,   127,    89,     0,     0,     0,    90,
       0,     0,     0,     0,   265,     0,     0,     0,    91,   266,
      93,    94,    95,    96,     0,    88,   127,    89,     0,     0,
       0,    90,     0,     0,     0,     0,   389,     0,     0,     0,
      91,   390,    93,    94,    95,    96,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    87,    85,    86,   407,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,   412,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,    88,   127,    89,     0,     0,    87,    90,
       0,   510,     0,     0,   408,     9,    10,    11,    91,    92,
      93,    94,    95,    96,     0,    88,   127,    89,     0,     0,
       0,    90,     0,     0,     0,     0,   413,     0,     0,     0,
      91,   414,    93,    94,    95,    96,     0,    88,   127,    89,
       0,     0,     0,    90,     0,     0,     0,     0,   511,     0,
       0,     0,    91,    92,    93,    94,    95,    96,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    87,    85,    86,     0,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,   127,    89,     0,     0,
      87,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,   447,     0,   448,
     341,   589,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,   447,
       0,   448,   341,   618,    91,    92,    93,    94,    95,    96,
      79,    80,    81,    82,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,    87,    90,     0,     0,     0,   447,     0,   448,
     341,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,   341,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,   427,     0,    91,    92,    93,    94,
      95,    96,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,    80,    81,    82,    83,    84,
      87,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,    87,    90,     0,     0,     0,     0,
     489,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,    88,     0,    89,     0,     0,     0,    90,   640,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,    88,     0,    89,     0,     0,     0,   161,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,    79,    80,    81,    82,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    87,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,     0,   163,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     1,    88,    54,    89,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,   372,   261,     0,
       0,   156,     0,     0,     0,     0,     2,    56,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,   155,   261,     0,     0,   156,     0,     0,     0,
       0,     2,    56,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,   155,   -19,   -19,
       0,   156,     0,     0,     0,     0,     2,    56,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,   155,   578,     0,     0,   156,     0,     0,     0,
       0,     2,    56,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,   155,     0,     0,
       0,   156,     0,     0,     0,     0,     2,    56,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     240,     2,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,     2,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     397,     2,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   399,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   227,     0,   228,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,  -392,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,   229,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    71,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,   410,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   483,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   485,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,   517,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   513,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   615,     0,
      28,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,   513,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,    78,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,   513,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,   141,     0,    28,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,    28,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      56,     0,     1,    62,   158,    52,   137,   118,   184,   139,
     138,   221,     1,    76,    90,    65,     1,    67,    33,     1,
       3,   136,    78,     1,     0,     1,   156,     1,    78,    50,
       1,    52,     3,     1,   103,    34,    35,     0,     1,     1,
      55,    40,    41,    42,   155,    44,   142,   152,   153,    76,
       1,     1,   148,    80,     1,     1,     3,    56,    34,    35,
      50,    51,   118,     3,    40,    41,    42,   117,    44,   119,
     126,    34,    35,    76,   130,     1,     1,    40,    41,    42,
       1,    44,     1,     1,    65,   161,    67,   163,     1,    78,
      79,   141,   142,     1,    76,     3,   146,   147,   148,   155,
      90,   177,    67,   150,   151,   235,     1,     1,    76,   224,
     225,   180,     1,    84,    99,     1,    78,   132,     1,   230,
      76,    99,    84,    83,     1,    99,   202,    78,   204,   150,
     151,   130,    78,   309,   264,   311,    98,   136,    99,   138,
     139,   271,   270,    83,     3,     3,   251,   252,    99,    99,
      76,   247,   248,    99,    79,     1,   155,   156,    79,    78,
     136,   142,   138,    81,    77,   146,   147,   148,    76,   468,
       1,   161,     3,   163,   230,   138,   166,    76,    86,   155,
      99,   146,   147,    78,    78,    76,     1,     3,     3,    78,
      79,    99,   155,    76,    80,   242,    82,   247,   248,   249,
       1,    78,    95,    98,    99,    99,   139,    84,   223,    77,
      78,     1,    98,     1,   345,   230,     3,    76,    76,    85,
     374,   242,     3,   156,   293,   224,   225,    86,   227,   393,
     394,     1,    78,   302,   167,   304,   235,   306,    84,    78,
     239,   451,     1,   176,     3,    84,   378,   379,   224,   225,
     365,   227,     1,    84,    77,    78,   555,   556,   557,   558,
      76,   372,    96,    79,   227,   264,   247,   248,    83,   268,
      86,   270,   271,    76,     1,    76,    77,    80,    79,    80,
      18,   357,   412,    99,     1,    86,     3,    77,   221,    76,
      78,     1,    77,    80,   270,    76,    84,    76,    79,    86,
     347,    80,   235,    77,    77,    86,   239,   270,    78,   190,
     191,   192,   193,   194,    84,   374,   372,    76,     1,    86,
      79,    38,    39,    40,   534,   535,   347,    86,     1,    78,
       1,   264,    81,    78,    78,   268,     1,     3,   271,   187,
     188,   189,     1,    38,    39,    40,    78,     1,   398,   396,
      77,    78,   467,   468,    71,   288,   289,   372,   291,    76,
      77,    78,    79,    80,    83,     3,   365,    77,    78,    86,
     580,   581,     3,   372,     6,   396,    71,     1,   588,   378,
     379,   591,     1,     6,   460,   461,   385,   463,   464,   365,
      81,    86,    81,    79,    77,    78,   372,    77,    77,     1,
     447,     1,   378,   379,    77,   404,    77,    78,   341,   372,
      76,     1,    77,   412,    80,   378,   379,   416,    77,   440,
     441,   442,   443,    77,    78,    81,   447,    77,     3,     4,
       5,     6,     7,     8,    81,    10,    11,    78,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   352,    78,
     383,    79,   385,    77,    78,   388,    31,    83,    77,    78,
      77,   517,   195,   196,   197,    77,    79,   517,   467,   468,
       3,   404,     1,   549,   407,    77,    78,    77,    78,   412,
       3,   480,    81,   416,     1,    81,     1,    77,    78,    81,
      81,   467,   468,    81,   427,    70,   429,    72,   431,   432,
      77,    76,     1,    81,   480,     1,   439,     1,   507,   442,
      85,    86,    87,    88,    89,    90,    98,   480,   451,     9,
      10,    11,    81,    83,    99,   601,   602,   603,   604,    99,
     606,   607,   608,   609,    50,    99,    52,     1,     3,     3,
       4,     5,     6,     7,     8,   478,    10,    11,    77,    78,
      62,   455,   456,    79,   458,    76,    62,   556,    77,   615,
      77,    78,    77,    78,    84,   615,    79,    31,    84,    85,
      86,    81,    81,    81,   507,    79,    81,   510,    77,    78,
     556,    77,    78,    77,    78,    76,    76,   103,    81,    81,
      80,    60,    82,   556,    81,    81,    81,    81,    81,   534,
     535,   534,   535,    77,    77,    77,    70,    77,    72,   421,
      99,    99,    76,   198,   200,   199,    80,    99,    82,    83,
     201,    85,    86,    87,    88,    89,    90,   576,   561,   203,
     132,    73,   427,   452,   150,   151,   365,    44,    -1,    -1,
     573,   574,   546,    -1,   577,   580,   581,   580,   581,    -1,
      -1,    -1,    -1,    -1,    -1,   588,    -1,    -1,   591,    -1,
      -1,   594,    -1,    -1,   180,    -1,   599,    -1,   184,    -1,
      -1,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,    -1,   203,   592,    -1,
      -1,   595,    -1,   597,   598,   599,   600,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   650,    -1,    -1,
      -1,    -1,    -1,    -1,   657,    31,   242,    -1,    -1,    -1,
      -1,   635,    -1,    -1,   638,    -1,   640,    -1,   642,   643,
      -1,   645,   646,    -1,    -1,    -1,    -1,    -1,   652,    -1,
     654,   655,    -1,   657,   658,    -1,   660,   661,    -1,    -1,
     664,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,   293,    -1,    85,
      86,    87,    88,    89,    90,    -1,   302,    -1,   304,    -1,
     306,    -1,    -1,   309,    -1,   311,    -1,    -1,    -1,    -1,
      -1,    -1,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   347,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
     396,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,   440,   441,    -1,   443,    -1,    -1,
      -1,   447,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     1,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    93,    94,    95,    96,    97,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      93,    94,    95,    96,    97,     1,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    93,    94,    95,
      96,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    93,    94,    95,    96,    97,     1,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    93,    94,    95,    96,    97,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    93,    94,
      95,    96,    97,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    93,    94,    95,    96,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    93,    94,    95,    96,    97,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    93,
      94,    95,    96,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    93,    94,    95,    96,
      97,     1,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    93,    94,    95,    96,    97,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      93,    94,    95,    96,    97,     1,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    93,    94,    95,
      96,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    93,    94,    95,    96,    97,     1,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    95,    96,    97,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      95,    96,    97,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    78,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    76,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,     1,    73,     3,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,     1,    73,
       3,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,     1,
      73,     3,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
       1,    73,     3,    75,    76,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,     1,    73,     3,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,     1,    73,     3,    75,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,     1,    73,     3,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,     1,    73,    -1,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    72,    -1,    31,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,     1,    70,     3,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    31,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,     3,     4,     5,
       6,     7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    72,    -1,    31,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    30,    31,    85,
      86,    87,    88,    89,    90,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,    34,
      -1,    -1,    81,    38,    39,    40,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,
      -1,    34,    -1,    -1,    81,    38,    39,    40,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     1,    70,     3,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    76,    77,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    30,    86,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    30,    86,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    30,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    30,    86,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    30,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,     1,    -1,
      71,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,     1,    -1,    71,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,     1,    -1,    71,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   133,   134,   138,   139,   140,   141,   147,   150,
     151,   152,   153,   170,   184,   185,   186,   134,     3,    83,
      76,    76,    76,     1,     3,    76,    86,    99,   135,   136,
     154,   155,   156,   134,   134,     1,     3,    83,   134,   134,
     134,     0,   185,    83,     3,   103,   148,   149,     1,     3,
       4,     5,     6,     7,     8,    10,    11,    31,    70,    72,
      76,    85,    86,    87,    88,    89,    90,   101,   102,   104,
     105,   108,   110,   111,   112,   113,   117,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   132,   139,   144,   151,
     162,   162,     1,   132,    99,   154,     1,    71,   151,   156,
     157,     1,    78,    99,     1,    98,   187,   189,    76,    80,
     155,     1,   142,   143,   144,   170,     1,    83,   142,   148,
       1,    98,     1,    78,    84,    76,    80,   144,   156,   163,
     164,    76,   110,    76,   110,   110,    76,    76,   110,   128,
     129,   131,   162,     9,    10,    11,    76,    80,    82,   112,
       1,    86,    91,    92,     1,    87,    88,     1,    12,    13,
       1,    14,    15,    93,    94,     1,    16,    17,    85,    95,
      96,    18,     1,    19,    97,    77,   144,     1,   163,   144,
      77,    77,    78,    78,     1,    77,   156,   151,   156,   136,
     154,   137,   133,   134,   190,    83,   175,     1,     3,    77,
     134,   158,   159,   160,   161,    34,    81,    86,   129,   157,
      84,   143,    79,    99,   145,   146,   154,   142,   142,     1,
      84,     1,    78,    84,   132,     1,   132,   149,     1,    84,
     149,    77,   158,   163,    34,    81,    86,   129,   157,   164,
      76,    80,   162,   162,   162,     1,   129,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    98,   130,     1,
      77,    78,     1,    77,     3,    77,   109,   129,   131,     3,
     112,     1,   114,     1,   115,     1,   116,   113,     1,   118,
       1,   119,   117,   117,     1,   117,   120,   120,   120,     1,
     120,   120,   121,   121,     1,   121,     1,   122,     1,   123,
       1,   124,     1,   125,   131,     1,   126,     1,   131,     6,
       6,    83,   129,   165,   133,   188,     3,    57,    58,    59,
      61,    62,    63,    64,    65,    66,    67,    68,    84,    99,
     131,   133,   171,   172,   175,   176,   177,   178,   179,   182,
     183,    77,    76,   154,   156,   163,     1,    77,     1,    78,
       1,    77,    78,     1,   129,   157,    81,    81,    34,    81,
      86,   129,   132,     1,    78,    99,    79,    84,     1,    84,
      84,    77,    77,   129,   157,    81,    81,    34,    81,   129,
      77,   158,    34,    81,    86,   129,   157,    77,    77,    77,
      78,    78,   129,   129,     1,   129,    83,    83,   112,     1,
      77,    78,     1,    81,   112,   112,   112,   113,   113,     1,
      79,    79,     1,    79,    77,    77,     1,    80,    82,   165,
     166,   167,   168,   169,   175,    79,     1,   132,     1,   174,
       1,    76,   180,     1,    76,     1,   171,     1,    76,     1,
       3,     1,    99,     1,    99,     1,    99,   131,     1,    99,
       1,    84,   177,    56,   160,    56,   160,     3,     3,    81,
     129,    81,     1,   129,   129,    81,    81,   146,     1,   146,
     132,    81,   129,   129,    81,    77,   129,   157,    81,    81,
      34,    81,   129,    58,   106,   107,   162,     1,   106,   166,
     129,     1,   129,   128,   128,   128,   128,    99,    99,    78,
      84,     1,   132,     3,     1,    78,    84,   165,     1,    98,
     169,     1,   171,   171,   173,   171,    79,   131,   131,    76,
     131,     1,   131,    62,    62,   133,     1,   133,   178,     1,
      99,     1,    99,    81,    81,    81,    81,    81,    81,    81,
     129,   129,    81,     1,    79,    77,    78,    79,    77,    77,
       1,    78,    84,    84,    81,     1,    81,   165,   167,    84,
     165,   167,    79,   171,     1,    77,   131,    77,    77,     1,
      77,    76,     1,    76,   178,   178,     1,   178,     1,   178,
      81,    81,   129,     1,   129,     1,   107,   129,    84,   165,
     165,   171,   171,    77,   171,   171,   129,   171,     1,   171,
     131,   131,     1,   131,   131,    77,   131,     1,    77,   131,
      77,   131,     1,    77,   131,    60,   181,    77,    77,    77,
       1,    77,    77,   171,    77,    77,   171,     1,    77,   171,
      77,    77,   171,   171,    77,   171,   171,    99,    99,    99,
      99,     1,    99,   171,   171,   171,   171,     1,   171,   171,
     171,     1,   171
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   103,   104,   104,   105,   105,   105,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   109,
     109,   110,   110,   110,   110,   110,   110,   110,   111,   111,
     111,   111,   111,   111,   112,   112,   113,   114,   113,   115,
     113,   116,   113,   113,   113,   113,   113,   117,   118,   117,
     119,   117,   117,   117,   117,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   121,   121,   122,   122,   122,
     122,   122,   123,   123,   123,   124,   124,   124,   125,   125,
     125,   126,   126,   126,   127,   127,   127,   128,   128,   128,
     128,   128,   129,   129,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   131,   131,   132,
     133,   133,   133,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   135,   135,   135,   137,
     136,   136,   136,   138,   138,   138,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   140,   140,   140,
     140,   140,   141,   141,   142,   142,   143,   143,   143,   143,
     144,   144,   144,   144,   144,   145,   145,   145,   145,   146,
     146,   146,   147,   147,   147,   147,   147,   147,   147,   148,
     148,   148,   148,   149,   149,   149,   149,   150,   151,   151,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   156,
     156,   156,   156,   156,   156,   157,   157,   158,   158,   158,
     159,   159,   159,   160,   160,   160,   161,   161,   161,   162,
     162,   162,   162,   163,   163,   163,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   166,   166,   166,   167,
     167,   168,   168,   169,   169,   169,   169,   170,   170,   171,
     171,   171,   171,   171,   171,   172,   173,   172,   174,   172,
     172,   172,   172,   175,   175,   175,   176,   176,   177,   177,
     178,   178,   178,   179,   179,   180,   181,   179,   179,   179,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   184,   184,   185,
     185,   187,   188,   186,   189,   186,   190,   190
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     6,     6,     6,     1,     3,     3,
       3,     3,     3,     3,     1,     4,     3,     4,     3,     3,
       2,     2,     6,     7,     4,     4,     4,     1,     3,     3,
       3,     1,     2,     2,     2,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     0,     4,     0,
       4,     0,     4,     3,     3,     3,     3,     1,     0,     4,
       0,     4,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     5,     5,
       5,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       2,     3,     1,     3,     3,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     3,     2,     0,
       4,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     2,     4,     5,
       5,     4,     1,     1,     1,     2,     2,     3,     1,     3,
       2,     1,     2,     1,     2,     1,     3,     3,     3,     2,
       3,     1,     4,     5,     5,     6,     2,     5,     4,     1,
       3,     3,     3,     3,     1,     3,     3,     4,     1,     1,
       1,     1,     1,     1,     4,     4,     2,     1,     1,     3,
       3,     4,     6,     5,     5,     6,     5,     4,     4,     4,
       3,     4,     3,     6,     6,     5,     4,     4,     4,     3,
       2,     2,     1,     3,     2,     1,     2,     3,     1,     3,
       1,     3,     3,     2,     2,     1,     1,     3,     3,     2,
       1,     2,     2,     2,     1,     1,     3,     2,     3,     5,
       4,     5,     4,     3,     3,     3,     4,     6,     5,     5,
       6,     4,     4,     2,     3,     3,     4,     3,     4,     1,
       3,     4,     3,     2,     1,     4,     3,     3,     4,     2,
       2,     1,     2,     3,     2,     3,     3,     7,     7,     1,
       1,     1,     1,     1,     1,     3,     0,     5,     0,     4,
       3,     3,     3,     2,     3,     3,     1,     2,     1,     1,
       1,     2,     2,     7,     5,     0,     0,     7,     3,     4,
       5,     7,     6,     7,     6,     7,     5,     5,     5,     5,
       7,     7,     7,     7,     7,     6,     7,     7,     7,     6,
       7,     6,     7,     7,     7,     7,     3,     2,     2,     2,
       3,     2,     3,     2,     2,     3,     2,     1,     2,     1,
       1,     0,     0,     6,     0,     4,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 61 "bison.y" /* yacc.c:1646  */
    { 
						
						if(nextToken == IDENTIFIER)
							process_id(); 
						else if (nextToken == '(')
							process_function(); 
						else if (nextToken == '=' || 275 <= nextToken <= 284)
							verify_id_for_Assign();
					}
#line 3399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 75 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 79 "bison.y" /* yacc.c:1646  */
    { process_literal(I_CONSTANT); }
#line 3411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 95 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 103 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 110 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 111 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 117 "bison.y" /* yacc.c:1646  */
    { call_functionNoParams(); }
#line 3447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 136 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 137 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 148 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 149 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 185 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 185 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 186 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 186 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 187 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 188 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 190 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 191 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 196 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 196 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 197 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 197 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 199 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 200 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 202 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 209 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 210 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 222 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 230 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 231 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 237 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 243 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 249 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 255 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 261 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 267 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 268 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 269 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 274 "bison.y" /* yacc.c:1646  */
    {process_assign();}
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 281 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 282 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 283 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 284 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 285 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 286 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 287 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 288 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 289 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 290 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 291 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 298 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 299 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 307 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 308 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 311 "bison.y" /* yacc.c:1646  */
    { yyerrok;  }
#line 3759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 313 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 320 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 322 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 324 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 326 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 328 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 329 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 335 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 339 "bison.y" /* yacc.c:1646  */
    { save_assign(); }
#line 3813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 339 "bison.y" /* yacc.c:1646  */
    { process_assign(); }
#line 3819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 341 "bison.y" /* yacc.c:1646  */
    { 
					if(yychar == IDENTIFIER || yychar == I_CONSTANT || yychar == F_CONSTANT)
						yyerrok; 

					yyclearin;  
					clearSemanticRecords(); }
#line 3830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 381 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 382 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 383 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 384 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 404 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 412 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 418 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 419 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 438 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 439 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 447 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 448 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 455 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 457 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 487 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 3920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 505 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 506 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 507 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 511 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 512 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 513 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 514 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 524 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 525 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 539 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 545 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 559 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 566 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 567 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 607 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 608 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 609 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 617 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 618 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 624 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 635 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 636 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 641 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 655 "bison.y" /* yacc.c:1646  */
    { begin_case(); }
#line 4064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 655 "bison.y" /* yacc.c:1646  */
    { /*end_case();*/}
#line 4070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 656 "bison.y" /* yacc.c:1646  */
    { create_default(); }
#line 4076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 656 "bison.y" /* yacc.c:1646  */
    { append_exit(); }
#line 4082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 658 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 659 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 660 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 668 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 685 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 691 "bison.y" /* yacc.c:1646  */
    { start_switch(); }
#line 4118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 691 "bison.y" /* yacc.c:1646  */
    { save_comparator(); }
#line 4124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 691 "bison.y" /* yacc.c:1646  */
    { end_switch(); }
#line 4130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 694 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 695 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 714 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 715 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 716 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 717 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 719 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 720 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 721 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 722 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 723 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 725 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 727 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 728 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 729 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 731 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 732 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 733 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 734 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 735 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 736 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 737 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 746 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 747 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 748 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 749 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 750 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 751 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 765 "bison.y" /* yacc.c:1646  */
    { start_function(); stackPos -= 4; }
#line 4304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 765 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; pushTable(); }
#line 4310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 765 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; /*temp*/ }
#line 4316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 770 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE;  start_function(); stackPos -= 4; pushTable(); }
#line 4322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 774 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; /*temp*/}
#line 4328 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4332 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 782 "bison.y" /* yacc.c:1906  */


#include "semanticActions.c"



