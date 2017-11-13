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
int inContext = FALSE;
int unDecleared = FALSE;
char* actualFunction;



#line 107 "y.tab.c" /* yacc.c:339  */

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

#line 308 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7378

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  383
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  649

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
       0,    62,    62,    71,    72,    73,    74,    76,    80,    81,
      82,    86,    90,    91,    95,    96,    97,    98,   103,   104,
     106,   110,   111,   113,   114,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   138,   139,   140,   147,   148,
     152,   156,   157,   157,   158,   158,   159,   160,   161,   162,
     170,   171,   172,   173,   174,   175,   179,   180,   187,   188,
     188,   189,   189,   190,   190,   194,   198,   199,   199,   200,
     200,   205,   209,   210,   211,   213,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   223,   230,   231,   231,   232,
     232,   234,   238,   239,   240,   244,   245,   246,   250,   251,
     252,   256,   257,   258,   262,   263,   264,   268,   269,   270,
     271,   272,   276,   277,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   298,   299,   301,   302,   306,
     310,   311,   312,   316,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   336,   337,   338,   342,   342,
     343,   344,   353,   354,   355,   356,   357,   358,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   381,   382,   383,   384,   385,   386,
     387,   391,   392,   396,   397,   401,   402,   403,   407,   411,
     412,   413,   414,   415,   419,   420,   421,   422,   426,   427,
     428,   436,   437,   438,   439,   440,   441,   442,   447,   448,
     450,   451,   455,   456,   458,   460,   464,   468,   469,   470,
     471,   475,   476,   480,   481,   485,   486,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   508,   509,   510,   514,   515,   516,   517,   522,   523,
     524,   525,   527,   528,   533,   534,   539,   540,   542,   546,
     547,   548,   553,   554,   555,   559,   560,   562,   566,   567,
     569,   570,   574,   575,   576,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   606,   607,   608,   610,
     611,   612,   616,   617,   618,   619,   620,   621,   625,   627,
     631,   632,   636,   637,   638,   639,   643,   644,   648,   649,
     650,   651,   652,   653,   657,   658,   658,   659,   659,   661,
     662,   663,   669,   670,   671,   675,   676,   680,   681,   685,
     686,   688,   692,   693,   694,   694,   694,   697,   698,   708,
     709,   710,   711,   712,   713,   719,   720,   724,   725,   726,
     739,   740,   744,   745,   746,   747,   748,   749,   750,   751,
     752,   753,   754,   758,   759,   763,   764,   768,   768,   768,
     773,   771,   781,   782
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
  "argument_expression_list", "unary_expression", "$@1", "$@2",
  "unary_operator", "cast_expression", "multiplicative_expression", "$@3",
  "$@4", "$@5", "additive_expression", "$@6", "$@7", "shift_expression",
  "relational_expression", "$@8", "$@9", "$@10", "$@11",
  "equality_expression", "$@12", "$@13", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "$@14", "storage_class_specifier", "type_specifier",
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
  "static_assert_declaration", "statement", "labeled_statement", "$@15",
  "$@16", "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@17", "$@18",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@19", "$@20", "$@21",
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

#define YYPACT_NINF -495

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-495)))

#define YYTABLE_NINF -381

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    6928,  7095,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,    33,   -37,   -34,  -495,
     -22,  -495,  -495,    15,  4026,  4097,  -495,   171,  -495,  -495,
    4168,  4239,  4310,  -495,  6873,  -495,  -495,  -495,   -51,    61,
    4845,  7273,  4792,  -495,    24,   264,  -495,    25,  -495,  4381,
     -31,   344,  -495,  -495,  7150,  3813,  7150,  -495,  -495,  -495,
    -495,  -495,    61,  -495,    34,   105,  -495,   634,  -495,  -495,
    -495,  -495,  -495,  6151,  -495,  -495,  -495,    -9,   248,  4845,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
     558,  -495,  6173,  -495,   938,  1326,  1423,  2296,  2684,  2975,
    3072,   -24,    70,  3460,  -495,   113,  4504,   192,  4566,   129,
     143,    14,   164,   260,   172,  -495,  -495,  -495,   518,   186,
      24,  -495,  -495,  -495,  6928,   179,  6707,  5469,   -31,  7307,
    6255,  -495,   184,  -495,  7150,  7150,  6487,   148,  6173,  5069,
      61,   214,  -495,  6377,  5491,  -495,   -17,  -495,   -15,  4845,
    -495,  6261,  6261,  7273,  6173,  6173,   514,  -495,  -495,   130,
     274,   288,  -495,  -495,  5887,  6173,   291,  -495,  6173,  -495,
    -495,  -495,  6173,  -495,  -495,  6173,  6173,  6173,  6173,  -495,
    -495,  -495,  -495,  6173,  -495,  -495,  6173,  6173,  6173,  6173,
    5091,  5113,  6173,  5203,  5225,  -495,  -495,  -495,  -495,  -495,
    -495,  -495,   300,   322,  -495,  -495,  -495,  -495,  -495,  -495,
      98,  5909,  -495,    15,  6652,  3647,  -495,  6762,  -495,  -495,
     145,   289,   295,  -495,   331,  4935,  -495,   281,   284,  5513,
    -495,  -495,  6173,  -495,    37,  -495,   222,  6542,  6597,  3884,
    -495,    61,   247,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
    -495,  -495,   307,   313,  5733,  -495,   317,   325,  5601,   -15,
    6817,  5623,   304,  4845,  -495,  -495,   353,   343,   234,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
    6173,  6173,  -495,  5247,   366,  5997,  -495,  -495,   333,  -495,
     252,  -495,  -495,  6173,  6173,  6173,  1035,  6173,  6173,  1520,
    1617,  1714,  1811,  6173,  6173,  6173,  6173,  2393,  6173,  6173,
    2781,  2878,  3169,  3266,  -495,  3363,  -495,   -24,   275,  -495,
      70,   376,   278,   359,   379,  4979,  -495,  -495,  -495,   179,
     393,  5337,    23,   382,  -495,   391,  4665,   392,   236,    43,
      67,  4622,  -495,  -495,    42,  -495,  -495,  -495,  -495,  3737,
    -495,  -495,  -495,  -495,  -495,  -495,  6322,  -495,   197,  -495,
    -495,  -495,  6983,  7039,   460,  -495,   467,  6019,   390,  4957,
    -495,  -495,  6173,  -495,   394,   395,  -495,   213,   292,  -495,
    6173,  -495,  3955,  -495,  -495,  -495,  -495,   397,  5733,  -495,
    -495,  6173,  -495,   401,  -495,   400,  5733,  -495,   405,   407,
    5645,   402,   363,  -495,  7205,  7205,  7205,  -495,  -495,  -495,
    -495,  -495,  5865,  -495,  6173,  -495,  6173,  6173,  -495,  -495,
    -495,  -495,  1132,  1229,  1908,  2005,  2102,  2199,  2490,  2587,
    6173,  6173,  6173,  6173,  6173,   408,   409,   -59,  5359,   486,
    -495,   150,  5909,   112,  -495,  -495,  4436,  4665,  -495,  4665,
     411,  6173,  6173,   415,  6173,  6173,   430,  6928,   751,  -495,
      69,  -495,  -495,  -495,  -495,  -495,  -495,    65,  6173,  -495,
     848,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,
     422,  -495,   425,   439,   440,  -495,  -495,  -495,  -495,  -495,
    -495,  -495,   445,   447,  -495,  -495,   452,  5733,  -495,  -495,
    6173,  -495,   463,   402,    88,   335,  -495,   443,   -30,     2,
     235,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,   427,
    -495,   465,    77,  -495,  5865,  5755,  -495,  -495,  -495,  -495,
    -495,  -495,  -495,  -495,   468,  -495,  4665,  3557,   354,  6173,
     357,   360,   404,   494,   494,   494,  -495,  -495,  6173,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,   469,   473,  -495,
    6173,  5381,  -495,  -495,  7239,  6173,  -495,  -495,  5865,  5777,
    -495,  -495,  -495,  -495,  -495,  -495,  5909,  -495,  -495,  5909,
    4665,  -495,  6173,  4665,   368,  4665,  4665,  4665,  6173,  6173,
    6173,  6041,  6129,  -495,  -495,  -495,  -495,  -495,  6432,  -495,
    -495,  -495,  -495,  -495,  -495,   488,  -495,  -495,   472,  -495,
    -495,   373,   384,   396,  4665,   432,  4665,   441,  4665,  4665,
     456,  4755,    74,  4665,  -495,  4665,  4665,  -495,  4665,  -495,
    -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495,  -495
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   173,   152,   153,   154,   156,   157,   221,   217,
     218,   219,   167,   159,   160,   161,   162,   165,   166,   163,
     164,   158,   168,   169,   181,   182,     0,     0,   220,   222,
       0,   155,   376,     0,     0,     0,   171,     0,   172,   170,
       0,     0,     0,   132,     0,   373,   375,   144,   205,     0,
       0,     0,     0,   227,     0,     0,   130,     0,   145,     0,
     226,     0,   134,   136,     0,     0,     0,   138,   140,   142,
       1,   374,     0,    11,     0,     0,   208,     0,     2,     8,
       9,    12,    13,     0,    42,    44,    10,     0,     0,     0,
      50,    51,    52,    53,    54,    55,    25,     3,     4,     6,
      41,    56,     0,    58,     0,     0,     0,     0,     0,     0,
       0,   101,   104,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,   220,   254,   250,   249,   133,
       0,   131,   151,   148,     0,     0,     0,     0,   225,     0,
       0,   183,     0,   187,     0,     0,     0,     0,     0,     0,
     207,     0,   201,     0,     0,   193,   273,   270,   274,     0,
      47,     0,     0,     0,     0,     0,    56,   112,   125,     0,
       0,     0,    31,    32,     0,     0,     0,    46,     0,    59,
      61,    63,     0,    67,    69,     0,     0,     0,     0,    81,
      83,    77,    79,     0,    87,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   189,   271,   268,   191,
     223,   216,     0,     0,   241,   228,   252,   255,   248,   146,
       0,     0,   382,     0,     0,     0,   381,     0,   265,   239,
     264,     0,     0,   259,     0,     0,   229,    51,     0,     0,
     177,   184,     0,   185,     0,   194,   200,     0,     0,     0,
     174,   206,     0,   203,   215,   214,   212,   211,   210,   202,
     209,   292,     0,     0,     0,   276,    51,     0,     0,   272,
       0,     0,     0,     0,    43,    45,     0,     0,     0,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   114,
       0,     7,     5,     0,     0,     0,    30,    27,     0,    38,
       0,    29,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,   103,   102,     0,   106,
     105,     0,     0,     0,     0,     0,   298,   149,   383,     0,
       2,     0,     0,     0,   344,     0,     0,     0,     0,     0,
       0,     0,   332,   339,     0,   337,   338,   318,   319,     0,
     335,   320,   321,   322,   323,   246,     0,   262,   273,   263,
     245,   238,     0,     0,   247,   240,     0,     0,     0,     0,
     230,   237,     0,   236,    51,     0,   198,   188,     0,   186,
       0,   179,     0,   175,   204,   293,   275,     0,     0,   277,
     283,     0,   282,     0,   294,     0,     0,   284,    51,     0,
       0,    48,     0,    49,     0,     0,     0,   113,   128,   127,
     126,    37,     0,    57,    35,    28,     0,    36,    26,    60,
      62,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,     0,     0,   310,   379,     0,     0,   325,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,   370,   363,   369,   364,   367,   365,     0,   341,   340,
       0,   333,   336,   258,   261,   256,   260,   267,   266,   244,
       0,   232,     0,     0,     0,   233,   235,   197,   196,   195,
     199,   279,     0,     0,   281,   295,     0,     0,   285,   291,
       0,   290,     0,     0,     0,     0,    18,     0,     0,     0,
       0,    40,    39,   111,   109,   110,   108,   317,   316,     0,
     299,     0,     0,   313,   301,     0,   296,   302,   309,   308,
     311,   329,   324,   330,     0,   331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,   362,   368,   366,
     242,   243,   231,   234,   278,   280,   287,     0,     0,   288,
       0,     0,    17,    15,     0,     0,    16,    14,     0,     0,
      33,   300,   314,   315,   312,   306,     0,   297,   305,     0,
       0,   328,   348,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   286,   289,    24,    23,    22,     0,    19,
      21,    34,   307,   304,   326,   343,   345,   356,   125,   355,
     349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   353,     0,     0,   351,     0,   342,
     346,   359,   358,   357,   350,   361,   360,   354,   352
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -495,  -495,  -495,  -495,  -495,  -495,   -29,   -12,  -495,  -495,
     429,  -495,  -495,  -495,   -81,  -162,  -495,  -495,  -495,    18,
    -495,  -495,  -136,  -159,  -495,  -495,  -495,  -495,   220,  -495,
    -495,   226,   365,   358,   369,  -495,   -41,    17,  -495,   -85,
     -44,  -129,   121,  -495,   433,  -495,  -495,    93,  -495,  -495,
     178,  -109,   -63,  -495,    60,  -495,   499,  -122,  -495,    16,
    -495,  -495,   -21,   -54,   -55,  -124,  -113,  -495,    81,  -495,
      36,  -107,  -150,  -219,   152,  -494,  -495,   123,   181,    73,
    -495,  -495,  -495,  -120,  -495,   227,  -342,  -495,  -495,  -495,
    -495,  -495,  -495,   541,  -495,  -495,  -495,  -495,  -495
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    96,    97,    74,    98,    99,   515,   516,   100,   298,
     166,   161,   162,   102,   103,   104,   303,   304,   305,   105,
     307,   308,   106,   107,   315,   316,   313,   314,   108,   318,
     319,   109,   110,   111,   112,   113,   167,   168,   290,   354,
     115,    32,   223,    57,    58,   221,    34,   116,    36,    37,
     140,   141,   117,   244,   245,    38,    75,    76,    39,   118,
      41,    42,   246,    60,    61,   128,   262,   232,   233,   234,
     517,   157,   158,   450,   451,   452,   453,   454,    43,   356,
     357,   544,   460,   358,   359,   360,   361,   362,   463,   629,
     363,   364,    44,    45,    46,   134,   339,   135,   224
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     127,   142,   337,   142,   169,   222,   269,   138,   122,   114,
     208,   114,    59,   239,   155,   226,    40,    40,    53,   529,
     306,   177,   156,   231,   459,   530,   129,    53,   257,   260,
     268,   241,    72,   123,   317,   148,    48,   241,   387,    50,
     586,   589,    51,   478,   471,   136,   263,   576,   574,   137,
      40,    40,   312,   206,    52,   209,    40,    40,    40,   153,
      40,   270,   156,   154,    73,   271,   558,   163,   473,   216,
     556,   126,   200,   218,   169,   643,   155,   142,   583,   577,
     574,   142,   142,   142,   586,   589,   119,   120,   201,   570,
     300,    54,   212,    35,    35,   338,   355,   302,   156,   132,
      54,    55,  -327,   130,   254,   256,   150,   114,   114,   220,
      55,   379,  -213,   538,    56,   388,    49,   328,  -213,   332,
     293,    33,    47,   369,   131,   170,   555,    35,    35,   257,
     260,   291,   149,    35,    35,    35,   389,    35,   241,   241,
     398,   479,   472,   293,   217,   432,   433,   410,    53,   251,
      40,   534,    40,   126,   238,    62,    63,   405,   584,   438,
     439,    67,    68,    69,   559,    33,   474,   571,   557,    40,
     126,   267,    64,   644,    65,   368,  -150,   434,   435,   436,
     437,   277,   278,   151,   142,   142,   155,    53,   169,   152,
     205,   299,   448,   207,   449,   272,   133,  -150,   386,   276,
      53,   114,   220,   309,   310,   311,   210,   292,   293,   367,
     539,   600,   601,   602,   423,   258,    53,    73,   269,   455,
     211,   366,   429,   430,   431,   154,   252,    35,   535,    35,
     355,    55,   253,   537,   536,   415,   578,   469,   336,   470,
      40,    40,   213,    40,   146,   143,    35,   143,   258,   164,
      73,   126,   378,   427,    66,   217,   385,   230,    55,   263,
      54,   214,   225,   242,  -147,   124,   477,  -251,   153,  -269,
      55,  -269,   154,   366,   230,   294,   440,   154,    55,   443,
     126,   397,   507,   243,   217,   403,    40,   126,   409,    54,
     370,   296,   242,   498,   301,    53,   372,   458,   259,    55,
     114,   390,     9,    10,    11,   294,   333,   417,   418,   412,
     420,   368,   416,   579,   138,   585,   588,    35,    35,   580,
      35,   143,   247,   248,   165,   143,   143,   143,   334,   155,
     293,   394,   374,   428,   424,   125,   572,   215,   553,   554,
    -251,  -251,  -251,  -251,  -251,   123,   500,    53,    47,   114,
      55,   295,   336,   293,   441,   592,   293,   444,   440,   585,
     588,   596,   380,    35,   294,   381,   371,   612,    54,   440,
     613,   242,  -257,   373,   440,    40,   547,   548,    55,   550,
     551,   411,    40,   461,   395,   631,   518,   519,    40,    40,
     396,   230,   464,   467,   490,   217,   493,   440,   399,   494,
     523,   524,   525,   526,   532,   598,   400,   114,   375,   376,
     425,   426,   573,   574,   217,   502,   320,   321,   503,   466,
      54,   414,   126,   506,   322,   323,   217,   512,   143,   143,
     413,   593,   293,   635,   595,   293,   445,   597,   293,   336,
     513,   521,   440,   522,   418,   616,   293,   497,   499,   421,
     630,   293,    35,   484,   486,   442,   446,   418,   462,    35,
     418,   632,   293,   487,   594,    35,    35,   465,   468,   336,
     488,   491,   456,   633,   293,   495,   496,   505,   501,   101,
     599,   101,   504,    40,    40,   422,   508,   230,   509,   533,
     546,   549,   552,   230,   230,   418,    40,    78,    79,    80,
      81,    82,    83,   560,    84,    85,   561,   527,   528,   636,
     293,   581,   160,   621,   622,   623,   625,   627,   638,   293,
     562,   563,   575,   217,   567,    86,   564,   568,   565,   542,
     543,   101,   545,   566,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   569,   155,   582,   590,   628,  -128,
     603,   336,   336,   156,   604,   641,     9,    10,    11,   327,
      35,    35,   609,   219,    87,   325,    88,   171,   172,   173,
      89,   147,   330,    35,   520,   418,   540,   101,   101,    90,
      91,    92,    93,    94,    95,    71,   482,   605,   607,   125,
     274,   275,   610,   353,     0,   336,   336,     0,     0,     0,
       0,    47,     0,   336,    55,     0,   336,   101,     0,   418,
       0,   101,   289,   618,   101,   101,   101,   101,     0,   591,
       0,     0,   101,     0,     0,   101,   101,   101,   101,   101,
     101,     0,   101,     0,   174,   139,     0,     0,   175,     0,
     176,     0,     0,     0,     0,     0,     0,     0,   418,     0,
       0,     0,   618,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   614,     2,     0,   615,     0,   617,   619,
     620,   101,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,   634,     0,   637,
       0,   639,   640,     0,     0,    28,   645,     0,   646,   647,
     153,   648,     0,     0,   154,     0,     0,     0,     0,     0,
      55,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,   101,   101,   101,     0,   101,   101,     0,     0,
       0,     0,   101,   101,   101,   101,     0,   101,   101,     0,
       0,     0,     1,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    86,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
      27,    87,    28,    88,    29,    30,    31,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,     0,     0,     0,     0,     0,  -334,     1,
     353,  -334,  -334,  -334,  -334,  -334,  -334,     0,  -334,  -334,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   101,     0,   101,     0,     0,     0,   101,     2,  -334,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,    27,  -334,    28,
    -334,    29,  -334,    31,  -334,     0,     0,     0,     0,     0,
       0,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,   178,
       0,   -66,   -66,   -66,   -66,   -66,   -66,  -334,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
       0,   -66,   -66,   -66,   179,   -66,   -66,   -66,   -66,   180,
     181,   -66,   -66,   -66,   -66,   -66,   178,   -66,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,     0,   -71,   -71,
     -71,   179,   -71,   -71,   -71,   -71,   180,   181,   -71,   -71,
     -71,   -71,   -71,   178,   -71,   -68,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   -68,     0,   -68,   -68,   -68,   179,   -68,
     -68,   -68,   -68,   180,   181,   -68,   -68,   -68,   -68,   -68,
     178,   -68,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,     0,   -70,   -70,   -70,   179,   -70,   -70,   -70,   -70,
     180,   181,   -70,   -70,   -70,   -70,   -70,   182,   -70,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,     0,   -72,
     -72,   -72,   -72,   183,   184,   -72,   -72,     0,     0,   -72,
     -72,   -72,   -72,   -72,   185,   -72,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   -76,   -76,   186,   187,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -76,   -76,   -76,   -76,
     -76,   182,   -76,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,     0,   -75,   -75,   -75,   -75,   183,   184,   -75,
     -75,     0,     0,   -75,   -75,   -75,   -75,   -75,   182,   -75,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,     0,
     -73,   -73,   -73,   -73,   183,   184,   -73,   -73,     0,     0,
     -73,   -73,   -73,   -73,   -73,   182,   -73,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,     0,   -74,   -74,   -74,
     -74,   183,   184,   -74,   -74,     0,     0,   -74,   -74,   -74,
     -74,   -74,   185,   -74,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   186,   187,   -85,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,   185,
     -85,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     186,   187,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -82,   -82,   -82,   -82,   -82,   185,   -82,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   186,   187,   -84,
     -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,   -84,
     -84,   -84,   -84,   185,   -84,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   186,   187,   -78,   -78,   -78,   -78,
     -78,   -78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,   -78,
     185,   -78,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   186,   187,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,   -80,   -80,   -80,   -80,   -80,   188,   -80,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,     0,
     189,   190,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,   191,
     192,   -86,   -86,   -86,   188,   -86,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -91,   -91,     0,     0,   189,   190,   -91,
     -91,   -91,   -91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,     0,   191,   192,   -91,   -91,
     -91,   188,   -91,   -88,   -88,   -88,   -88,   -88,   -88,     0,
     -88,   -88,     0,     0,   189,   190,   -88,   -88,   -88,   -88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,     0,   191,   192,   -88,   -88,   -88,   188,   -88,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,     0,
       0,   189,   190,   -90,   -90,   -90,   -90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,     0,
     191,   192,   -90,   -90,   -90,   193,   -90,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,     0,     0,     0,     0,
     194,   195,   -92,   -92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,   -92,
     -92,   -92,   193,   -92,   -94,   -94,   -94,   -94,   -94,   -94,
       0,   -94,   -94,     0,     0,     0,     0,   194,   195,   -94,
     -94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,     0,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,     0,     0,     0,     0,   -94,   -94,   -94,   193,
     -94,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,
       0,     0,     0,     0,   194,   195,   -93,   -93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
       0,     0,     0,   -93,   -93,   -93,   196,   -93,   -95,   -95,
     -95,   -95,   -95,   -95,     0,   -95,   -95,     0,     0,     0,
       0,     0,     0,   -95,   -95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,     0,   -95,     0,   -95,   -95,
     197,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,     0,
     -95,   -95,   -95,   198,   -95,   -98,   -98,   -98,   -98,   -98,
     -98,     0,   -98,   -98,     0,     0,     0,     0,     0,     0,
     -98,   -98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,     0,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,     0,   -98,     0,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,     0,     0,     0,     0,   199,   -98,   -98,
     196,   -98,   -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,
     -97,     0,     0,     0,     0,     0,     0,   -97,   -97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,
     -97,     0,   -97,   -97,   197,   -97,   -97,   -97,   -97,   -97,
       0,     0,     0,     0,   -97,   -97,   -97,   196,   -97,   -96,
     -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,     0,     0,
       0,     0,     0,     0,   -96,   -96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,     0,   -96,
     -96,   197,   -96,   -96,   -96,   -96,   -96,     0,     0,     0,
       0,   -96,   -96,   -96,   198,   -96,   -99,   -99,   -99,   -99,
     -99,   -99,     0,   -99,   -99,     0,     0,     0,     0,     0,
       0,   -99,   -99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,     0,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,     0,   -99,     0,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,     0,     0,     0,     0,   199,   -99,
     -99,   202,   -99,  -107,  -107,  -107,  -107,  -107,  -107,     0,
    -107,  -107,     0,     0,     0,     0,     0,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,     0,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
       0,  -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,     0,     0,     0,     0,     0,     0,   204,   440,  -107,
    -347,  -347,  -347,  -347,  -347,  -347,     0,  -347,  -347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,     0,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,     0,   293,     0,     0,     0,     0,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,     1,     0,
     340,    79,    80,    81,    82,    83,  -347,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,   341,   342,   343,     0,   344,   345,
     346,   347,   348,   349,   350,   351,    27,    87,    28,    88,
      29,    30,    31,    89,     0,     0,     0,     0,     0,     0,
     225,   352,    90,    91,    92,    93,    94,    95,   480,     0,
     340,    79,    80,    81,    82,    83,   353,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,   341,   342,   343,     0,   344,   345,
     346,   347,   348,   349,   350,   351,    27,    87,    28,    88,
      29,    30,    31,    89,   144,     0,  -176,     0,     0,     0,
     225,   481,    90,    91,    92,    93,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,   353,     0,     0,     0,
       0,     0,     0,  -176,     0,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -176,     0,  -176,   139,  -176,  -180,  -176,  -176,
    -176,  -176,  -176,  -176,     0,     0,   145,     0,     0,  -176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -176,     0,     2,     0,  -180,  -180,  -180,  -180,
    -180,  -180,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -180,     0,    28,   139,  -180,  -178,  -180,
    -180,  -180,  -180,  -180,  -180,     0,     0,     0,     0,     0,
    -180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -180,     0,     2,     0,  -178,  -178,  -178,
    -178,  -178,  -178,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -178,     0,    28,     1,  -178,  -135,
    -178,  -178,  -178,  -178,  -178,  -178,     0,     0,     0,     0,
       0,  -178,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -178,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     1,    29,
    -137,    31,  -135,  -135,  -135,     0,  -135,     0,     0,     0,
       0,     0,  -135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -135,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     1,
      29,  -139,    31,  -137,  -137,  -137,     0,  -137,     0,     0,
       0,     0,     0,  -137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -137,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       1,    29,  -141,    31,  -139,  -139,  -139,     0,  -139,     0,
       0,     0,     0,     0,  -139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -139,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     1,    29,  -143,    31,  -141,  -141,  -141,     0,  -141,
       0,     0,     0,     0,     0,  -141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -141,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,   132,    29,     0,    31,  -143,  -143,  -143,     0,
    -143,     0,     0,     0,     0,     0,  -143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -143,
       0,  -377,     0,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,   541,     0,   340,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
    -377,     0,  -377,     0,  -377,  -377,  -377,     0,     0,  -150,
       0,     0,     0,     0,  -380,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
    -150,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,   342,   343,     0,   344,   345,   346,
     347,   348,   349,   350,   351,   139,    87,  -190,    88,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,   225,
       0,    90,    91,    92,    93,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     2,   353,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,   139,     0,  -192,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
    -190,  -190,     0,  -190,  -190,     0,     0,     0,     0,     0,
    -190,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,  -190,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   475,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,    28,     0,     0,
       0,     0,  -192,  -192,     0,  -192,  -192,     0,     0,     0,
       0,     0,  -192,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -192,     0,     0,   340,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,    86,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,   476,   341,   342,   343,     0,   344,   345,   346,   347,
     348,   349,   350,   351,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,   225,     0,
      90,    91,    92,    93,    94,    95,     0,     0,    78,    79,
      80,    81,    82,    83,   353,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,   121,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    77,     0,    78,    79,
      80,    81,    82,    83,   642,    84,    85,     0,     0,     0,
       0,     0,    87,     0,    88,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     2,    86,    90,    91,    92,
      93,    94,    95,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    28,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,   377,     0,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   492,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
     447,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,    87,   125,    88,     0,     0,
      86,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,    87,   125,    88,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,   448,
       0,   449,   335,     0,    90,    91,    92,    93,    94,    95,
     255,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   324,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   326,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     0,     0,    86,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,    87,     0,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,   329,     0,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   331,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   419,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,    88,     0,     0,    86,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,   457,     0,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     531,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   606,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,    86,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,   235,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,   264,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,    87,
     125,    88,     0,     0,    86,    89,     0,   382,     0,     0,
     236,     9,    10,    11,    90,   237,    92,    93,    94,    95,
       0,    87,   125,    88,     0,     0,     0,    89,     0,     0,
       0,     0,   265,     0,     0,     0,    90,   266,    92,    93,
      94,    95,     0,    87,   125,    88,     0,     0,     0,    89,
       0,     0,     0,     0,   383,     0,     0,     0,    90,   384,
      92,    93,    94,    95,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,   401,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,   406,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,    87,   125,    88,     0,     0,    86,    89,     0,   510,
       0,     0,   402,     9,    10,    11,    90,    91,    92,    93,
      94,    95,     0,    87,   125,    88,     0,     0,     0,    89,
       0,     0,     0,     0,   407,     0,     0,     0,    90,   408,
      92,    93,    94,    95,     0,    87,   125,    88,     0,     0,
       0,    89,     0,     0,     0,     0,   511,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,     0,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,   125,    88,     0,     0,    86,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,   448,     0,   449,   335,   587,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,   448,     0,   449,
     335,   611,    90,    91,    92,    93,    94,    95,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
      86,    89,     0,     0,     0,   448,     0,   449,   335,     0,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,   297,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,   335,     0,    90,    91,    92,    93,    94,    95,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,    86,    89,     0,     0,     0,     0,     0,     0,
     422,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
     489,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,    89,   624,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     0,     0,    86,    89,   626,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,   159,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,    87,     0,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,   139,     0,    90,    91,
      92,    93,    94,    95,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,    86,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,    53,    28,     0,     0,    30,
       0,    87,     0,    88,     0,     0,     0,   273,     0,   240,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,   366,   261,
       0,     0,   154,     0,     0,     0,     0,     2,    55,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,   153,   261,     0,     0,   154,     0,     0,
       0,     0,     2,    55,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,   153,   -20,
     -20,     0,   154,     0,     0,     0,     0,     2,    55,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,     2,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   392,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   391,     2,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   393,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   227,     0,
     228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    30,    31,     0,     0,
       0,     0,     0,     0,     0,  -378,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,   229,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,     0,   365,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    70,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,   404,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   483,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   485,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     608,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,   514,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,    77,     0,    28,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   514,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   139,     0,
      28,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      55,    64,   221,    66,    89,   134,   156,    61,    52,    50,
     117,    52,    33,   137,    77,   135,     0,     1,     3,    78,
     182,   102,    77,   136,     1,    84,     1,     3,   150,   151,
     154,   140,    83,    54,   193,     1,     3,   146,     1,    76,
     534,   535,    76,     1,     1,    76,   153,    77,    78,    80,
      34,    35,   188,   116,    76,   118,    40,    41,    42,    76,
      44,    76,   117,    80,     3,    80,     1,    76,     1,   124,
       1,    55,    96,   128,   159,     1,   139,   140,     1,    77,
      78,   144,   145,   146,   578,   579,    50,    51,    18,     1,
     175,    76,    78,     0,     1,   224,   225,   178,   153,     1,
      76,    86,    79,    78,   148,   149,     1,   148,   149,   130,
      86,   235,    78,     1,    99,    78,    83,   202,    84,   204,
      78,     0,     1,   230,    99,    89,   468,    34,    35,   251,
     252,     1,    98,    40,    41,    42,    99,    44,   247,   248,
     264,    99,    99,    78,   128,   307,   308,   271,     3,     1,
     134,     1,   136,   137,   137,    34,    35,   270,    81,   318,
     319,    40,    41,    42,    99,    44,    99,    79,    99,   153,
     154,   154,     1,    99,     3,   230,    78,   313,   314,   315,
     316,   164,   165,    78,   247,   248,   249,     3,   273,    84,
      77,   174,    80,     1,    82,   159,    98,    99,   242,   163,
       3,   242,   223,   185,   186,   187,    77,    77,    78,   230,
      98,   553,   554,   555,   295,     1,     3,     3,   368,   339,
      77,    76,   303,   304,   305,    80,    78,   134,    78,   136,
     359,    86,    84,   452,    84,     1,     1,     1,   221,     3,
     224,   225,    78,   227,    66,    64,   153,    66,     1,     1,
       3,   235,   235,     1,    83,   239,   239,   136,    86,   366,
      76,     1,    83,    79,    78,     1,   351,     3,    76,    77,
      86,    79,    80,    76,   153,     1,     1,    80,    86,     1,
     264,   264,   406,    99,   268,   268,   270,   271,   271,    76,
       1,     3,    79,     1,     3,     3,     1,   341,    84,    86,
     341,    79,    38,    39,    40,     1,     6,   290,   291,   273,
     293,   366,    78,    78,   368,   534,   535,   224,   225,    84,
     227,   140,   144,   145,    76,   144,   145,   146,     6,   392,
      78,    84,     1,    81,     1,    71,     1,    77,   467,   468,
      76,    77,    78,    79,    80,   366,   390,     3,   227,   390,
      86,    77,   335,    78,    79,     1,    78,    79,     1,   578,
     579,     1,    81,   270,     1,    81,    77,   586,    76,     1,
     589,    79,    77,    78,     1,   359,   461,   462,    86,   464,
     465,    77,   366,     1,    77,     1,   415,   416,   372,   373,
      77,   270,     1,     1,   377,   379,   379,     1,    81,   382,
     441,   442,   443,   444,   448,     1,    81,   448,    77,    78,
      77,    78,    77,    78,   398,   398,   196,   197,   401,   346,
      76,    78,   406,   406,   198,   199,   410,   410,   247,   248,
      77,    77,    78,     1,    77,    78,    77,    77,    78,   422,
      77,   424,     1,   426,   427,    77,    78,   387,   388,    83,
      77,    78,   359,   372,   373,    79,    77,   440,    76,   366,
     443,    77,    78,     3,   549,   372,   373,    76,    76,   452,
       3,    81,    79,    77,    78,    81,    81,    77,    81,    50,
      76,    52,    81,   467,   468,    83,    81,   366,    81,     3,
      79,    76,    62,   372,   373,   478,   480,     3,     4,     5,
       6,     7,     8,    81,    10,    11,    81,    99,    99,    77,
      78,    84,    83,   598,   599,   600,   601,   602,    77,    78,
      81,    81,    79,   507,   507,    31,    81,   510,    81,   456,
     457,   102,   459,    81,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    81,   608,    81,    79,    60,    77,
      81,   534,   535,   608,    81,    99,    38,    39,    40,   201,
     467,   468,   574,   130,    70,   200,    72,     9,    10,    11,
      76,    72,   203,   480,   422,   558,   453,   148,   149,    85,
      86,    87,    88,    89,    90,    44,   359,   570,   571,    71,
     161,   162,   575,    99,    -1,   578,   579,    -1,    -1,    -1,
      -1,   480,    -1,   586,    86,    -1,   589,   178,    -1,   592,
      -1,   182,    98,   596,   185,   186,   187,   188,    -1,   546,
      -1,    -1,   193,    -1,    -1,   196,   197,   198,   199,   200,
     201,    -1,   203,    -1,    76,     1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   631,    -1,
      -1,    -1,   635,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   590,    30,    -1,   593,    -1,   595,   596,
     597,   242,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   624,    -1,   626,
      -1,   628,   629,    -1,    -1,    71,   633,    -1,   635,   636,
      76,   638,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   303,   304,   305,    -1,   307,   308,    -1,    -1,
      -1,    -1,   313,   314,   315,   316,    -1,   318,   319,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   390,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     441,   442,    -1,   444,    -1,    -1,    -1,   448,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
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
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    93,
      94,    95,    96,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    14,    15,    16,
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
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    95,
      96,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    95,    96,    97,     1,
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
      -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      95,    96,    97,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    95,    96,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    95,    96,    97,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    95,    96,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    95,    96,
      97,     1,    99,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    97,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     1,    -1,     3,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,     1,    73,     3,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,     1,    73,     3,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,     1,    73,     3,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,     1,    73,
       3,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,     1,
      73,     3,    75,    76,    77,    78,    -1,    80,    -1,    -1,
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
      -1,    71,     1,    73,    -1,    75,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,     1,    70,     3,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      76,    77,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    79,    80,    -1,    -1,    -1,
      -1,    -1,    86,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    31,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    85,    86,    87,
      88,    89,    90,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    83,    -1,    85,    86,    87,    88,    89,    90,
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
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    76,    -1,    34,    -1,    -1,
      81,    38,    39,    40,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
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
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    71,    -1,    -1,    74,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    30,    86,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    30,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    30,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,     1,    -1,    71,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,     1,    -1,
      71,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   141,   142,   146,   147,   148,   149,   155,   158,
     159,   160,   161,   178,   192,   193,   194,   142,     3,    83,
      76,    76,    76,     3,    76,    86,    99,   143,   144,   162,
     163,   164,   142,   142,     1,     3,    83,   142,   142,   142,
       0,   193,    83,     3,   103,   156,   157,     1,     3,     4,
       5,     6,     7,     8,    10,    11,    31,    70,    72,    76,
      85,    86,    87,    88,    89,    90,   101,   102,   104,   105,
     108,   110,   113,   114,   115,   119,   122,   123,   128,   131,
     132,   133,   134,   135,   136,   140,   147,   152,   159,   170,
     170,     1,   140,   162,     1,    71,   159,   164,   165,     1,
      78,    99,     1,    98,   195,   197,    76,    80,   163,     1,
     150,   151,   152,   178,     1,    83,   150,   156,     1,    98,
       1,    78,    84,    76,    80,   152,   164,   171,   172,    76,
     110,   111,   112,    76,     1,    76,   110,   136,   137,   139,
     170,     9,    10,    11,    76,    80,    82,   114,     1,    86,
      91,    92,     1,    87,    88,     1,    12,    13,     1,    14,
      15,    93,    94,     1,    16,    17,     1,    85,     1,    95,
      96,    18,     1,    19,    97,    77,   152,     1,   171,   152,
      77,    77,    78,    78,     1,    77,   164,   159,   164,   144,
     162,   145,   141,   142,   198,    83,   183,     1,     3,    77,
     142,   166,   167,   168,   169,    34,    81,    86,   137,   165,
      84,   151,    79,    99,   153,   154,   162,   150,   150,     1,
      84,     1,    78,    84,   140,     1,   140,   157,     1,    84,
     157,    77,   166,   171,    34,    81,    86,   137,   165,   172,
      76,    80,   170,    76,   110,   110,   170,   137,   137,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    98,
     138,     1,    77,    78,     1,    77,     3,    77,   109,   137,
     139,     3,   114,   116,   117,   118,   115,   120,   121,   119,
     119,   119,   122,   126,   127,   124,   125,   123,   129,   130,
     128,   128,   131,   131,     1,   132,     1,   133,   139,     1,
     134,     1,   139,     6,     6,    83,   137,   173,   141,   196,
       3,    57,    58,    59,    61,    62,    63,    64,    65,    66,
      67,    68,    84,    99,   139,   141,   179,   180,   183,   184,
     185,   186,   187,   190,   191,    77,    76,   162,   164,   171,
       1,    77,     1,    78,     1,    77,    78,     1,   137,   165,
      81,    81,    34,    81,    86,   137,   140,     1,    78,    99,
      79,    84,     1,    84,    84,    77,    77,   137,   165,    81,
      81,    34,    81,   137,    77,   166,    34,    81,    86,   137,
     165,    77,   170,    77,    78,     1,    78,   137,   137,     1,
     137,    83,    83,   114,     1,    77,    78,     1,    81,   114,
     114,   114,   115,   115,   122,   122,   122,   122,   123,   123,
       1,    79,    79,     1,    79,    77,    77,     1,    80,    82,
     173,   174,   175,   176,   177,   183,    79,     1,   140,     1,
     182,     1,    76,   188,     1,    76,   179,     1,    76,     1,
       3,     1,    99,     1,    99,     1,    99,   139,     1,    99,
       1,    84,   185,    56,   168,    56,   168,     3,     3,    81,
     137,    81,     1,   137,   137,    81,    81,   154,     1,   154,
     140,    81,   137,   137,    81,    77,   137,   165,    81,    81,
      34,    81,   137,    77,    58,   106,   107,   170,   106,   106,
     174,   137,   137,   136,   136,   136,   136,    99,    99,    78,
      84,     1,   140,     3,     1,    78,    84,   173,     1,    98,
     177,     1,   179,   179,   181,   179,    79,   139,   139,    76,
     139,   139,    62,   141,   141,   186,     1,    99,     1,    99,
      81,    81,    81,    81,    81,    81,    81,   137,   137,    81,
       1,    79,     1,    77,    78,    79,    77,    77,     1,    78,
      84,    84,    81,     1,    81,   173,   175,    84,   173,   175,
      79,   179,     1,    77,   139,    77,     1,    77,     1,    76,
     186,   186,   186,    81,    81,   137,     1,   137,     1,   107,
     137,    84,   173,   173,   179,   179,    77,   179,   137,   179,
     179,   139,   139,   139,    77,   139,    77,   139,    60,   189,
      77,     1,    77,    77,   179,     1,    77,   179,    77,   179,
     179,    99,    99,     1,    99,   179,   179,   179,   179
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   103,   104,   104,   105,   105,   105,   105,   106,   106,
     106,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     109,   110,   111,   110,   112,   110,   110,   110,   110,   110,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   116,
     115,   117,   115,   118,   115,   115,   119,   120,   119,   121,
     119,   119,   122,   122,   122,   122,   123,   124,   123,   125,
     123,   126,   123,   127,   123,   123,   128,   129,   128,   130,
     128,   128,   131,   131,   131,   132,   132,   132,   133,   133,
     133,   134,   134,   134,   135,   135,   135,   136,   136,   136,
     136,   136,   137,   137,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   139,   139,   139,   139,   140,
     141,   141,   141,   141,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   143,   143,   143,   145,   144,
     144,   144,   146,   146,   146,   146,   146,   146,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   148,   148,   148,   148,   148,   148,
     148,   149,   149,   150,   150,   151,   151,   151,   151,   152,
     152,   152,   152,   152,   153,   153,   153,   153,   154,   154,
     154,   155,   155,   155,   155,   155,   155,   155,   156,   156,
     156,   156,   157,   157,   157,   157,   158,   159,   159,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   164,
     164,   164,   164,   164,   165,   165,   166,   166,   166,   167,
     167,   167,   168,   168,   168,   169,   169,   169,   170,   170,
     170,   170,   171,   171,   171,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   173,   173,   173,   173,
     173,   173,   174,   174,   174,   174,   174,   174,   175,   175,
     176,   176,   177,   177,   177,   177,   178,   178,   179,   179,
     179,   179,   179,   179,   180,   181,   180,   182,   180,   180,
     180,   180,   183,   183,   183,   184,   184,   185,   185,   186,
     186,   186,   187,   187,   188,   189,   187,   187,   187,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   192,   192,   193,   193,   195,   196,   194,
     197,   194,   198,   198
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     6,     6,     6,     6,     1,     3,
       3,     3,     3,     3,     3,     1,     4,     3,     4,     3,
       3,     2,     2,     6,     7,     4,     4,     4,     1,     3,
       3,     1,     0,     3,     0,     3,     2,     2,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     0,
       4,     0,     4,     0,     4,     3,     1,     0,     4,     0,
       4,     3,     1,     3,     3,     3,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     3,     1,     0,     4,     0,
       4,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     5,     5,
       5,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       2,     3,     1,     3,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     3,     2,     0,     4,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     2,     4,     5,     5,
       4,     1,     1,     1,     2,     2,     3,     1,     3,     2,
       1,     2,     1,     2,     1,     3,     3,     3,     2,     3,
       1,     4,     5,     5,     6,     2,     5,     4,     1,     3,
       3,     3,     3,     1,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     4,     4,     2,     1,     1,     3,     3,
       4,     6,     5,     5,     6,     5,     4,     4,     4,     3,
       4,     3,     6,     6,     5,     4,     4,     4,     3,     2,
       2,     1,     3,     2,     1,     2,     3,     1,     3,     1,
       3,     3,     2,     2,     1,     1,     3,     3,     2,     1,
       2,     2,     2,     1,     1,     3,     2,     3,     5,     4,
       5,     4,     3,     3,     3,     4,     6,     5,     5,     6,
       4,     4,     2,     3,     3,     4,     3,     4,     1,     3,
       4,     3,     2,     1,     4,     3,     3,     4,     2,     2,
       1,     2,     3,     2,     3,     3,     7,     7,     1,     1,
       1,     1,     1,     1,     3,     0,     5,     0,     4,     3,
       3,     3,     2,     3,     3,     1,     2,     1,     1,     1,
       2,     2,     7,     5,     0,     0,     7,     3,     4,     5,
       7,     6,     7,     6,     7,     5,     5,     7,     7,     7,
       7,     7,     3,     2,     2,     2,     3,     2,     3,     2,
       2,     3,     2,     1,     2,     1,     1,     0,     0,     6,
       0,     4,     1,     2
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
#line 62 "bison.y" /* yacc.c:1646  */
    { 
						
						if(nextToken == IDENTIFIER)
							process_id(); 
						else if (nextToken == '(')
							process_function(); 
						else if (nextToken == '=' || 275 <= nextToken <= 284)
							verify_id_for_Assign();
					}
#line 3238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 76 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "bison.y" /* yacc.c:1646  */
    { process_literal(I_CONSTANT); }
#line 3250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 98 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "bison.y" /* yacc.c:1646  */
    { call_functionNoParams(); }
#line 3292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 124 "bison.y" /* yacc.c:1646  */
    { save_op(); eval_unary(); }
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 125 "bison.y" /* yacc.c:1646  */
    { save_op(); eval_unary(); }
#line 3304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 140 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 152 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 157 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 157 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 158 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 158 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 188 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 188 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 189 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 189 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 190 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 190 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 194 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 199 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 199 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 200 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 200 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 205 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 213 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 218 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 218 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 219 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 219 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 220 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 220 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 221 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 221 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 231 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 231 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 232 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 232 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 234 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 240 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 246 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 252 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 258 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 264 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 270 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 271 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 272 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 277 "bison.y" /* yacc.c:1646  */
    {process_assign();}
#line 3562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 284 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 285 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 286 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 287 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 288 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 289 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 290 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 291 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 292 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 293 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 294 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 301 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 302 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 310 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 311 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 316 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 323 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 325 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 327 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 329 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 331 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 332 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 338 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 342 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 342 "bison.y" /* yacc.c:1646  */
    { process_assign(); }
#line 3712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 343 "bison.y" /* yacc.c:1646  */
    { initializeID(); }
#line 3718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 344 "bison.y" /* yacc.c:1646  */
    { 
					if(yychar == IDENTIFIER || yychar == I_CONSTANT || yychar == F_CONSTANT)
						yyerrok; 

					yyclearin;  
					clearSemanticRecords(); }
#line 3729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 384 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 385 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 386 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 387 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 407 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 415 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 421 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 422 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 441 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 442 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 450 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 451 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 458 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 460 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 490 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 3819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 508 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 509 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 510 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 514 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 515 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 516 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 517 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 527 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 528 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 542 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 548 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 562 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 569 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 570 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 610 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 611 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 612 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 620 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 621 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 627 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 638 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 639 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 644 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 658 "bison.y" /* yacc.c:1646  */
    { begin_case(); }
#line 3963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 658 "bison.y" /* yacc.c:1646  */
    { /*end_case();*/}
#line 3969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 659 "bison.y" /* yacc.c:1646  */
    { create_default(); }
#line 3975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 659 "bison.y" /* yacc.c:1646  */
    { append_exit(); }
#line 3981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 661 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 662 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 663 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 671 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 688 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 694 "bison.y" /* yacc.c:1646  */
    { start_switch(); }
#line 4017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 694 "bison.y" /* yacc.c:1646  */
    { save_comparator(); }
#line 4023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 694 "bison.y" /* yacc.c:1646  */
    { end_switch(); }
#line 4029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 697 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 698 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 719 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 720 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 724 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 725 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 726 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 739 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 740 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 749 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 750 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 751 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 752 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 753 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 754 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 768 "bison.y" /* yacc.c:1646  */
    { start_function(); stackPos -= 4; }
#line 4125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 768 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; pushTable(); }
#line 4131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 768 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; }
#line 4137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 773 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE;  start_function(); stackPos -= 4; pushTable(); }
#line 4143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 777 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE;  popTable(); stackPos -= 4;}
#line 4149 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4153 "y.tab.c" /* yacc.c:1646  */
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
#line 785 "bison.y" /* yacc.c:1906  */


#include "semanticActions.c"



