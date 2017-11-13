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
#define YYLAST   7242

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  377
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  639

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
     252,   256,   257,   258,   262,   263,   264,   268,   269,   271,
     272,   276,   277,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   298,   299,   301,   302,   306,   310,
     311,   312,   316,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   336,   337,   338,   342,   342,   343,
     344,   353,   354,   355,   356,   357,   358,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   381,   382,   383,   384,   385,   386,   387,
     391,   392,   396,   397,   401,   402,   403,   407,   411,   412,
     413,   414,   415,   419,   420,   421,   422,   426,   427,   428,
     436,   437,   438,   439,   440,   441,   442,   447,   448,   450,
     451,   455,   456,   458,   460,   464,   468,   469,   470,   471,
     475,   476,   480,   481,   485,   486,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     508,   509,   510,   514,   515,   516,   517,   522,   523,   524,
     525,   533,   534,   539,   540,   542,   546,   547,   548,   553,
     554,   555,   559,   560,   562,   566,   567,   569,   570,   574,
     575,   576,   580,   581,   582,   583,   584,   585,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   606,   607,   608,   612,   616,   617,   618,
     619,   620,   621,   625,   627,   631,   632,   636,   637,   638,
     639,   643,   644,   648,   649,   650,   651,   652,   653,   657,
     658,   658,   659,   659,   661,   662,   663,   669,   670,   670,
     675,   676,   680,   681,   685,   686,   688,   692,   693,   694,
     694,   694,   697,   698,   708,   709,   710,   711,   712,   713,
     719,   720,   724,   725,   726,   739,   740,   744,   745,   746,
     747,   748,   749,   750,   751,   752,   753,   754,   758,   759,
     763,   764,   768,   768,   773,   771,   781,   782
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
  "$@16", "compound_statement", "$@17", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@18", "$@19",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@20", "$@21",
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

#define YYPACT_NINF -218

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-218)))

#define YYTABLE_NINF -375

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    6792,  6959,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,    85,   -38,    -8,  -218,
       2,  -218,  -218,   160,  3977,  4048,  -218,   175,  -218,  -218,
    4119,  4190,  4261,  -218,  6737,  -218,  -218,  -218,   -39,    81,
    4757,  7137,   638,  -218,    84,   400,  -218,    32,  -218,  4332,
       3,    33,  -218,  -218,  7014,  3764,  7014,  -218,  -218,  -218,
    -218,  -218,    81,  -218,    23,    48,  -218,  6296,  -218,  -218,
    -218,  -218,  -218,  5953,  -218,  -218,  -218,    13,   173,  4757,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
     469,  -218,  6041,  -218,   799,  1187,  1284,  2157,  2545,  2836,
    2933,    -2,   177,  3321,  -218,   189,  4394,   214,  4456,   201,
     224,   229,   251,   190,  -218,  -218,  -218,   400,   253,    84,
    -218,  -218,  -218,  6792,   197,  6571,  5271,     3,  7171,   454,
    -218,   158,  -218,  7014,  7014,  6351,   178,  6041,  4891,    81,
     168,  -218,  6186,  5293,  -218,    49,  -218,   137,  4757,  -218,
    6063,  6063,  7137,  6041,  6041,   441,  -218,  -218,   237,   215,
     336,  -218,  -218,  5689,  6041,   346,  -218,  6041,  -218,  -218,
    -218,  6041,  -218,  -218,  6041,  6041,  6041,  6041,  -218,  -218,
    -218,  -218,  6041,  -218,  -218,  6041,  6041,  6041,  6041,  4981,
    5003,  6041,  5025,  6041,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,   331,   345,  -218,  -218,  -218,  -218,  -218,   112,  5777,
    -218,   160,  6516,   289,  -218,  6626,  -218,  -218,   143,   305,
     278,  -218,   283,  4847,  -218,   290,   300,  5381,  -218,  -218,
    6041,  -218,    66,  -218,   322,  6406,  6461,  3835,  -218,    81,
     193,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
     332,   352,  5535,  -218,   354,   360,  5403,   137,  6681,  5425,
     347,  4757,  -218,  -218,   367,   370,   269,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  6041,  6041,
    -218,  5115,   362,  5799,  -218,  -218,   285,  -218,    24,  -218,
    -218,  6041,  6041,  6041,   896,  6041,  6041,  1381,  1478,  1575,
    1672,  6041,  6041,  6041,  6041,  2254,  6041,  6041,  2642,  2739,
    3030,  3127,  -218,  3224,  -218,    -2,   148,  -218,   177,   217,
     372,   380,  5667,  -218,  -218,  -218,  -218,  -218,  3598,  -218,
    6131,  -218,   117,  -218,  -218,  -218,  6847,  6903,   455,  -218,
     456,  5821,   391,  4869,  -218,  -218,  6041,  -218,   392,   395,
    -218,   174,   232,  -218,  6041,  -218,  3906,  -218,  -218,  -218,
    -218,   396,  5535,  -218,  -218,  6041,  -218,   401,  -218,   406,
    5535,  -218,   410,   429,  5513,   404,   349,  -218,  7069,  7069,
    7069,  -218,  -218,  -218,  -218,  -218,  5667,  -218,  6041,  -218,
    6041,  6041,  -218,  -218,  -218,  -218,   993,  1090,  1769,  1866,
    1963,  2060,  2351,  2448,  6041,  6041,  6041,  6041,   413,   414,
    5137,   523,  -218,   187,  5777,   150,  -218,   448,  5159,   262,
     298,  -218,   303,  4555,   319,    34,    12,    38,  4512,  -218,
     102,  -218,  -218,  -218,  -218,  3508,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,   450,  -218,
     451,   459,   460,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
     461,   471,  -218,  -218,   472,  5535,  -218,  -218,  6041,  -218,
     474,   404,   263,   287,  -218,   458,   -19,    50,   203,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,   475,    31,  -218,  5667,
    5557,  -218,  -218,  -218,  -218,  -218,   690,  4555,  -218,  4555,
     482,  6041,  6041,   453,  6041,  6041,   500,  6792,  3688,  -218,
      41,  -218,  -218,  -218,  -218,  -218,  -218,   107,  6041,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,   485,
     486,  -218,  6041,  5249,  -218,  -218,  7103,  6041,  -218,  -218,
    5667,  5645,  -218,  -218,  -218,  -218,  -218,  5777,  -218,  -218,
    5777,  -218,  -218,  -218,   484,  -218,  4555,  3418,   325,  6041,
     327,   329,   334,  4645,  4645,  4645,  -218,  -218,  6041,  -218,
    -218,  -218,  -218,  -218,  -218,  6241,  -218,  -218,  -218,  -218,
    -218,  4555,  -218,  6041,  4555,   335,  4555,  4555,  4555,  6041,
    6041,  6041,  5909,  5931,  -218,   514,  -218,  -218,   499,  -218,
    -218,   337,   344,   365,  4555,   369,  4555,   376,  4555,  4555,
     478,  4667,    76,  4555,  -218,  4555,  4555,  -218,  4555,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   172,   151,   152,   153,   155,   156,   220,   216,
     217,   218,   166,   158,   159,   160,   161,   164,   165,   162,
     163,   157,   167,   168,   180,   181,     0,     0,   219,   221,
       0,   154,   371,     0,     0,     0,   170,     0,   171,   169,
       0,     0,     0,   131,     0,   368,   370,   143,   204,     0,
       0,     0,     0,   226,     0,   250,   129,     0,   144,     0,
     225,     0,   133,   135,     0,     0,     0,   137,   139,   141,
       1,   369,     0,    11,     0,     0,   207,     0,     2,     8,
       9,    12,    13,     0,    42,    44,    10,     0,     0,     0,
      50,    51,    52,    53,    54,    55,    25,     3,     4,     6,
      41,    56,     0,    58,     0,     0,     0,     0,     0,     0,
       0,   101,   104,     0,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   219,   251,   249,   248,   132,     0,
     130,   150,   147,     0,     0,     0,     0,   224,     0,     0,
     182,     0,   186,     0,     0,     0,     0,     0,     0,   206,
       0,   200,     0,     0,   192,   270,   267,   271,     0,    47,
       0,     0,     0,     0,     0,    56,   111,   124,     0,     0,
       0,    31,    32,     0,     0,     0,    46,     0,    59,    61,
      63,     0,    67,    69,     0,     0,     0,     0,    81,    83,
      77,    79,     0,    87,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,   188,   268,   265,   190,   222,
     215,     0,     0,   240,   227,   252,   247,   145,     0,     0,
     376,     0,     0,   328,   375,     0,   262,   238,   261,     0,
       0,   256,     0,     0,   228,    51,     0,     0,   176,   183,
       0,   184,     0,   193,   199,     0,     0,     0,   173,   205,
       0,   202,   214,   213,   211,   210,   209,   201,   208,   289,
       0,     0,     0,   273,    51,     0,     0,   269,     0,     0,
       0,     0,    43,    45,     0,     0,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   113,     0,     7,
       5,     0,     0,     0,    30,    27,     0,    38,     0,    29,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,   103,   102,     0,   106,   105,     0,
       0,     0,     0,   295,   148,   377,   373,   327,     0,   245,
       0,   259,   270,   260,   244,   237,     0,     0,   246,   239,
       0,     0,     0,     0,   229,   236,     0,   235,    51,     0,
     197,   187,     0,   185,     0,   178,     0,   174,   203,   290,
     272,     0,     0,   274,   280,     0,   279,     0,   291,     0,
       0,   281,    51,     0,     0,    48,     0,    49,     0,     0,
       0,   112,   127,   126,   125,    37,     0,    57,    35,    28,
       0,    36,    26,    60,    62,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   298,     0,     0,     0,   305,     2,     0,     0,
       0,   339,     0,     0,     0,     0,     0,     0,     0,   334,
       0,   332,   333,   313,   314,     0,   330,   315,   316,   317,
     318,   255,   258,   253,   257,   264,   263,   243,     0,   231,
       0,     0,     0,   232,   234,   196,   195,   194,   198,   276,
       0,     0,   278,   292,     0,     0,   282,   288,     0,   287,
       0,     0,     0,     0,    18,     0,     0,     0,     0,    40,
      39,   110,   109,   108,   312,   311,     0,     0,   308,   296,
       0,   293,   297,   304,   303,   306,     0,     0,   320,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   367,
       0,   365,   358,   364,   359,   362,   360,     0,   336,   335,
     329,   331,   241,   242,   230,   233,   275,   277,   284,     0,
       0,   285,     0,     0,    17,    15,     0,     0,    16,    14,
       0,     0,    33,   309,   310,   307,   301,     0,   294,   300,
       0,   324,   319,   325,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   366,   357,   363,   361,
     283,   286,    24,    23,    22,     0,    19,    21,    34,   302,
     299,     0,   323,   343,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   321,   338,   340,   351,   124,   350,
     344,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,     0,     0,   346,     0,   337,
     341,   354,   353,   352,   345,   356,   355,   349,   347
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -218,  -218,  -218,  -218,  -218,  -218,  -149,    35,  -218,  -218,
     373,  -218,  -218,  -218,   -81,  -170,  -218,  -218,  -218,   233,
    -218,  -218,  -159,  -169,  -218,  -218,  -218,  -218,   114,  -218,
    -218,   202,   381,   382,   383,  -218,   -32,    36,  -218,   -84,
     -48,  -124,    51,  -218,   462,  -218,  -218,    29,  -218,  -218,
     179,   -79,   -63,  -218,   -49,  -218,   512,   -93,  -218,     6,
    -218,  -218,   -23,   -53,   -55,  -119,  -123,  -218,    11,  -218,
     -24,   -98,  -140,  -217,   192,    44,  -218,   164,   -21,   115,
    -218,  -218,  -218,  -118,  -218,  -218,   145,   -85,  -218,  -218,
    -218,  -218,  -218,  -218,   548,  -218,  -218,  -218,  -218
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    96,    97,    74,    98,    99,   483,   484,   100,   296,
     165,   160,   161,   102,   103,   104,   301,   302,   303,   105,
     305,   306,   106,   107,   313,   314,   311,   312,   108,   316,
     317,   109,   110,   111,   112,   113,   166,   167,   288,   440,
     115,    32,   221,    57,    58,   219,    34,   116,    36,    37,
     139,   140,   117,   242,   243,    38,    75,    76,    39,   118,
      41,    42,   244,    60,    61,   127,   260,   230,   231,   232,
     485,   156,   157,   422,   423,   424,   425,   426,    43,   442,
     443,   564,   510,   444,   338,   445,   446,   447,   448,   513,
     619,   449,   450,    44,    45,    46,   133,   134,   222
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     126,   141,   334,   141,   122,   168,    40,    40,   137,   220,
      59,   304,   229,   521,   154,   267,   224,   237,   114,   207,
     114,   176,   155,   315,   147,   401,   119,   120,   310,    35,
      35,   123,   554,   128,   266,   519,    53,   520,    50,   523,
      40,    40,   576,   142,    72,   142,    40,    40,    40,   149,
      40,    33,    47,   205,   261,   208,   255,   258,   548,   546,
     239,   125,   155,    35,    35,   169,   239,   361,    51,    35,
      35,    35,   216,    35,   168,   154,   141,   633,    52,   135,
     141,   141,   141,   136,    73,    62,    63,    53,    48,   162,
     298,    67,    68,    69,   199,    33,   300,   155,   335,   252,
     254,  -212,   291,   528,   336,   402,   218,  -212,   578,    54,
     129,   522,   555,   131,   353,   114,   114,   326,   142,   329,
      53,   148,   142,   142,   142,   152,   150,   549,   546,   153,
     343,   130,   151,   215,   270,   406,   407,   524,   274,    40,
     577,    40,   125,   372,   362,   379,    53,   412,   413,   414,
     384,   503,   408,   409,   410,   411,   255,   258,    40,   125,
      54,    53,    35,    53,    35,   363,   239,   239,    49,   256,
      55,    73,   236,   342,   163,   634,    64,    53,    65,   249,
     291,    35,   141,   141,   154,   291,   228,   168,   499,   265,
    -149,   213,   360,   340,   256,   200,    73,   153,   218,   275,
     276,   529,   267,   228,   550,   341,   579,   502,   114,   297,
     132,  -149,   397,   268,   441,   206,   292,   269,   416,   340,
     403,   404,   405,   153,   142,   142,   291,   415,    40,    55,
     420,    40,   421,   466,    54,    53,    54,   240,   289,   125,
     486,   487,   261,   215,    55,   145,    55,   386,   504,   164,
      54,    35,   257,   240,    35,   333,   250,   241,    66,    56,
      55,   475,   251,   509,   542,   500,   204,   214,   125,   352,
     389,   501,   215,   359,    40,   125,    47,   368,   209,   346,
     223,   551,   556,   559,   348,   342,   398,   552,   544,   137,
     152,  -266,   293,  -266,   153,   291,   417,    35,   371,   511,
      55,   210,   377,   154,   514,   383,   344,   211,    54,   318,
     319,   240,   465,   467,   290,   291,   468,   123,    55,   228,
     517,   441,   245,   246,   391,   392,   593,   394,   414,   212,
     597,  -146,   114,   556,   559,   599,   414,   330,   414,   294,
     589,  -322,   543,   590,    40,   621,    40,   390,   292,   299,
     292,   331,    40,    40,   527,  -254,   347,   452,   454,   215,
     349,   350,   399,   400,   545,   546,   414,    35,   333,    35,
     625,   354,   497,   337,   512,    35,    35,   414,   215,   515,
     508,   355,   345,   491,   492,   493,   125,   458,   114,   461,
     215,   228,   462,   573,   574,   518,   114,   228,   228,   320,
     321,   364,   594,   291,   596,   291,   598,   291,   470,   369,
     600,   471,   606,   291,   620,   291,   474,   307,   308,   309,
     480,   622,   291,   101,   385,   101,   481,   567,   568,   370,
     570,   571,   333,   575,   489,   373,   490,   392,     9,    10,
      11,   374,   623,   291,   387,   395,   626,   291,   388,   418,
     392,    40,   392,   628,   291,   138,   159,   419,   455,   456,
     333,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   124,   459,   463,    35,   101,   464,   469,   170,   171,
     172,   215,   472,   473,     2,   595,    55,   396,   601,   602,
     603,   476,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     477,   539,   494,   495,   540,   611,   612,   613,   615,   617,
     101,   101,   154,    40,    40,    28,   498,   506,    30,   569,
     155,   532,   533,   272,   273,   333,   333,   547,   238,   287,
     534,   535,   536,   557,   560,   173,    35,    35,   516,   174,
     101,   175,   537,   538,   101,   541,   553,   101,   101,   101,
     101,   566,   572,   591,   392,   101,   580,   581,   101,   101,
     101,   101,   101,   101,   618,   101,  -127,   631,   582,   584,
     323,   586,   325,   587,   146,   328,   333,   333,   488,   505,
     531,   217,    71,   333,   557,   560,   333,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   392,     0,     0,     0,     0,     0,
       0,   562,   563,     0,   565,     0,     0,     0,     0,   392,
       0,     0,     0,   608,     0,     0,     0,     0,     0,   121,
       0,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,   392,     0,     0,
       0,   608,     0,     0,     0,     0,   101,     0,     0,    86,
       0,     0,     0,     0,   101,   101,   101,     0,   101,   101,
       0,   592,     0,     0,   101,   101,   101,   101,     0,   101,
     101,   561,     0,   427,    79,    80,    81,    82,    83,     0,
      84,    85,     0,     0,     0,     0,   604,     0,    87,   605,
      88,   607,   609,   610,    89,     0,     0,     0,     0,     0,
       0,    86,     0,    90,    91,    92,    93,    94,    95,   624,
       0,   627,     0,   629,   630,     0,     0,   101,   635,     0,
     636,   637,     0,   638,     0,     0,     0,   428,   429,   430,
       0,   431,   432,   433,   434,   435,   436,   437,   438,     0,
      87,     0,    88,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,   223,     0,    90,    91,    92,    93,    94,
      95,     0,     0,     0,     0,     0,     0,     0,   101,   439,
     101,     0,     0,   101,     0,     0,     0,     0,     0,     0,
     177,   101,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     -66,     0,   -66,   -66,   -66,   178,   -66,   -66,   -66,   -66,
     179,   180,   -66,   -66,   -66,   -66,   -66,   177,   -66,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,     0,   -71,
     -71,   -71,   178,   -71,   -71,   -71,   -71,   179,   180,   -71,
     -71,   -71,   -71,   -71,   177,   -71,   -68,   -68,   -68,   -68,
     -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,   -68,     0,   -68,   -68,   -68,   178,
     -68,   -68,   -68,   -68,   179,   180,   -68,   -68,   -68,   -68,
     -68,   177,   -68,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   -70,     0,   -70,   -70,   -70,   178,   -70,   -70,   -70,
     -70,   179,   180,   -70,   -70,   -70,   -70,   -70,   181,   -70,
     -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,     0,
     -72,   -72,   -72,   -72,   182,   183,   -72,   -72,     0,     0,
     -72,   -72,   -72,   -72,   -72,   184,   -72,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   185,   186,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,   -76,   -76,   -76,
     -76,   -76,   181,   -76,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -75,     0,   -75,   -75,   -75,   -75,   182,   183,
     -75,   -75,     0,     0,   -75,   -75,   -75,   -75,   -75,   181,
     -75,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,
       0,   -73,   -73,   -73,   -73,   182,   183,   -73,   -73,     0,
       0,   -73,   -73,   -73,   -73,   -73,   181,   -73,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -74,     0,   -74,   -74,
     -74,   -74,   182,   183,   -74,   -74,     0,     0,   -74,   -74,
     -74,   -74,   -74,   184,   -74,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   185,   186,   -85,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,     0,   -85,   -85,   -85,   -85,   -85,
     184,   -85,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   185,   186,   -82,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,     0,   -82,   -82,   -82,   -82,   -82,   184,   -82,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   185,   186,
     -84,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,     0,   -84,
     -84,   -84,   -84,   -84,   184,   -84,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   185,   186,   -78,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,     0,     0,   -78,   -78,   -78,   -78,
     -78,   184,   -78,   -80,   -80,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   185,   186,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
       0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   187,   -80,
     -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,
       0,   188,   189,   -86,   -86,   -86,   -86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,     0,
     190,   191,   -86,   -86,   -86,   187,   -86,   -91,   -91,   -91,
     -91,   -91,   -91,     0,   -91,   -91,     0,     0,   188,   189,
     -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,     0,   190,   191,   -91,
     -91,   -91,   187,   -91,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,     0,     0,   188,   189,   -88,   -88,   -88,
     -88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,     0,   190,   191,   -88,   -88,   -88,   187,
     -88,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,
       0,     0,   188,   189,   -90,   -90,   -90,   -90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,   190,   191,   -90,   -90,   -90,   192,   -90,   -92,   -92,
     -92,   -92,   -92,   -92,     0,   -92,   -92,     0,     0,     0,
       0,   193,   194,   -92,   -92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,     0,
     -92,   -92,   -92,   192,   -92,   -94,   -94,   -94,   -94,   -94,
     -94,     0,   -94,   -94,     0,     0,     0,     0,   193,   194,
     -94,   -94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,     0,   -94,     0,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,     0,     0,     0,     0,   -94,   -94,   -94,
     192,   -94,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,
     -93,     0,     0,     0,     0,   193,   194,   -93,   -93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,     0,     0,   -93,   -93,   -93,   195,   -93,   -95,
     -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,     0,     0,
       0,     0,     0,     0,   -95,   -95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,     0,   -95,
     -95,   196,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,
       0,   -95,   -95,   -95,   197,   -95,   -98,   -98,   -98,   -98,
     -98,   -98,     0,   -98,   -98,     0,     0,     0,     0,     0,
       0,   -98,   -98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,     0,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,     0,   -98,     0,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,     0,     0,     0,     0,   198,   -98,
     -98,   195,   -98,   -97,   -97,   -97,   -97,   -97,   -97,     0,
     -97,   -97,     0,     0,     0,     0,     0,     0,   -97,   -97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
       0,   -97,     0,   -97,   -97,   196,   -97,   -97,   -97,   -97,
     -97,     0,     0,     0,     0,   -97,   -97,   -97,   195,   -97,
     -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,     0,
       0,     0,     0,     0,     0,   -96,   -96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,     0,
     -96,   -96,   196,   -96,   -96,   -96,   -96,   -96,     0,     0,
       0,     0,   -96,   -96,   -96,   197,   -96,   -99,   -99,   -99,
     -99,   -99,   -99,     0,   -99,   -99,     0,     0,     0,     0,
       0,     0,   -99,   -99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
       0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,     0,   -99,     0,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,     0,     0,     0,     0,   198,
     -99,   -99,   201,   -99,  -107,  -107,  -107,  -107,  -107,  -107,
       0,  -107,  -107,     0,     0,     0,     0,     0,     0,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,     0,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,     0,  -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,     0,     0,     0,     0,     0,     0,   203,   414,
    -107,  -342,  -342,  -342,  -342,  -342,  -342,     0,  -342,  -342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,     0,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,     0,   291,     0,     0,     0,
       0,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,     1,
       0,   427,    79,    80,    81,    82,    83,  -342,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    86,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,   428,   429,   430,     0,   431,
     432,   433,   434,   435,   436,   437,   438,    27,    87,    28,
      88,    29,    30,    31,    89,     0,     0,     0,     0,     0,
       0,   223,   530,    90,    91,    92,    93,    94,    95,     1,
       0,   427,    79,    80,    81,    82,    83,   439,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    86,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,   428,   429,   430,     0,   431,
     432,   433,   434,   435,   436,   437,   438,    27,    87,    28,
      88,    29,    30,    31,    89,     0,     0,     0,     0,     0,
       0,   223,     0,    90,    91,    92,    93,    94,    95,     1,
       0,    78,    79,    80,    81,    82,    83,   439,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    86,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    87,    28,
      88,    29,    30,    31,    89,   143,     0,  -175,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,   439,     0,     0,
       0,     0,     0,     0,  -175,     0,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -175,     0,  -175,   138,  -175,  -179,  -175,
    -175,  -175,  -175,  -175,  -175,     0,     0,   144,     0,     0,
    -175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -175,     0,     2,     0,  -179,  -179,  -179,
    -179,  -179,  -179,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -179,     0,    28,   138,  -179,  -177,
    -179,  -179,  -179,  -179,  -179,  -179,     0,     0,     0,     0,
       0,  -179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -179,     0,     2,     0,  -177,  -177,
    -177,  -177,  -177,  -177,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -177,     0,    28,     1,  -177,
    -134,  -177,  -177,  -177,  -177,  -177,  -177,     0,     0,     0,
       0,     0,  -177,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -177,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     1,
      29,  -136,    31,  -134,  -134,  -134,     0,  -134,     0,     0,
       0,     0,     0,  -134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -134,     0,     2,     0,
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
      27,     0,    28,   131,    29,     0,    31,  -142,  -142,  -142,
       0,  -142,     0,     0,     0,     0,     0,  -142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -142,     0,  -372,     0,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,     0,     0,
       0,     0,     0,     0,     0,   138,     0,  -189,     0,     0,
       0,  -372,     0,  -372,     0,  -372,  -372,  -372,     0,     0,
    -149,     0,     0,     0,     0,  -374,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
     132,  -149,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,   138,     0,  -191,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
    -189,  -189,     0,  -189,  -189,     0,     0,     0,     0,     0,
    -189,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,  -189,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,   525,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,    28,     0,     0,
       0,     0,  -191,  -191,     0,  -191,  -191,     0,     0,     0,
       0,     0,  -191,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -191,     0,     0,   427,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,    86,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,   526,   428,   429,   430,     0,   431,   432,   433,   434,
     435,   436,   437,   438,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,   223,     0,
      90,    91,    92,    93,    94,    95,     0,     0,    78,    79,
      80,    81,    82,    83,   439,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,   439,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    77,     0,
      78,    79,    80,    81,    82,    83,   632,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    86,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    28,    88,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,   351,     0,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     460,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,   253,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,    87,   124,    88,
       0,     0,    86,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,     0,    87,
     124,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,   322,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   324,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   327,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    88,     0,     0,    86,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,    87,     0,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,   393,     0,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   496,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     507,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
      86,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
     583,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,   233,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     0,     0,    86,    89,     0,   262,     0,     0,
       0,     9,    10,    11,    90,    91,    92,    93,    94,    95,
       0,    87,   124,    88,     0,     0,     0,    89,     0,     0,
       0,     0,   234,     0,     0,     0,    90,   235,    92,    93,
      94,    95,     0,    87,   124,    88,     0,     0,     0,    89,
       0,     0,     0,     0,   263,     0,     0,     0,    90,   264,
      92,    93,    94,    95,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,   356,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,   375,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,    87,   124,    88,     0,     0,    86,    89,     0,   380,
       0,     0,   357,     9,    10,    11,    90,   358,    92,    93,
      94,    95,     0,    87,   124,    88,     0,     0,     0,    89,
       0,     0,     0,     0,   376,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    87,   124,    88,     0,     0,
       0,    89,     0,     0,     0,     0,   381,     0,     0,     0,
      90,   382,    92,    93,    94,    95,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,   478,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
       0,     0,     0,    87,   124,    88,     0,     0,    86,    89,
       0,     0,     0,     0,   479,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    87,   124,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,   420,     0,   421,
     332,   558,    90,    91,    92,    93,    94,    95,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
      86,    89,     0,     0,     0,   420,     0,   421,   332,   588,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,   420,     0,   421,
     332,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,   295,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,    86,    89,     0,     0,     0,     0,     0,     0,
     332,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,   396,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,    89,     0,     0,
       0,     0,   457,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     0,     0,    86,    89,   614,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,    89,   616,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,    87,     0,    88,     0,     0,     0,   158,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     1,    87,    53,    88,     0,     0,     0,   271,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,   340,   259,     0,
       0,   153,     0,     0,     0,     0,     2,    55,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,   152,   259,     0,     0,   153,     0,     0,     0,
       0,     2,    55,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,   152,   -20,   -20,
       0,   153,     0,     0,     0,     0,     2,    55,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,   152,     0,     0,     0,   153,     0,     0,     0,
       0,     2,    55,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,     2,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     365,     2,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   225,     0,   226,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,   223,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,   227,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
       0,    31,     0,   339,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    70,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,   378,     0,
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
      24,    25,    26,   451,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   453,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,   585,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,   482,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,    77,     0,
      28,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,   482,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,   138,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,     0,     0,    28,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      55,    64,   219,    66,    52,    89,     0,     1,    61,   133,
      33,   181,   135,     1,    77,   155,   134,   136,    50,   117,
      52,   102,    77,   192,     1,     1,    50,    51,   187,     0,
       1,    54,     1,     1,   153,     1,     3,     3,    76,     1,
      34,    35,     1,    64,    83,    66,    40,    41,    42,     1,
      44,     0,     1,   116,   152,   118,   149,   150,    77,    78,
     139,    55,   117,    34,    35,    89,   145,     1,    76,    40,
      41,    42,   127,    44,   158,   138,   139,     1,    76,    76,
     143,   144,   145,    80,     3,    34,    35,     3,     3,    76,
     174,    40,    41,    42,    96,    44,   177,   152,   222,   147,
     148,    78,    78,     1,   222,    81,   129,    84,     1,    76,
      78,    99,    81,     1,   233,   147,   148,   201,   139,   203,
       3,    98,   143,   144,   145,    76,    78,    77,    78,    80,
     228,    99,    84,   127,   158,   305,   306,    99,   162,   133,
      99,   135,   136,   262,    78,   268,     3,   316,   317,     1,
     269,     1,   311,   312,   313,   314,   249,   250,   152,   153,
      76,     3,   133,     3,   135,    99,   245,   246,    83,     1,
      86,     3,   136,   228,     1,    99,     1,     3,     3,     1,
      78,   152,   245,   246,   247,    78,   135,   271,     1,   153,
      78,     1,   240,    76,     1,    18,     3,    80,   221,   163,
     164,    99,   342,   152,     1,   228,    99,   424,   240,   173,
      98,    99,   293,    76,   338,     1,     1,    80,     1,    76,
     301,   302,   303,    80,   245,   246,    78,    79,   222,    86,
      80,   225,    82,     1,    76,     3,    76,    79,     1,   233,
     389,   390,   340,   237,    86,    66,    86,   271,    98,    76,
      76,   222,    84,    79,   225,   219,    78,    99,    83,    99,
      86,   380,    84,     1,     1,    78,    77,    77,   262,   233,
       1,    84,   266,   237,   268,   269,   225,    84,    77,     1,
      83,    78,   499,   500,     1,   340,     1,    84,     1,   342,
      76,    77,    77,    79,    80,    78,    79,   268,   262,     1,
      86,    77,   266,   366,     1,   269,     1,    78,    76,   195,
     196,    79,   361,   362,    77,    78,   364,   340,    86,   268,
       1,   445,   143,   144,   288,   289,     1,   291,     1,    78,
       1,    78,   364,   550,   551,     1,     1,     6,     1,     3,
     557,    79,    79,   560,   338,     1,   340,    78,     1,     3,
       1,     6,   346,   347,   438,    77,    78,   346,   347,   353,
      77,    78,    77,    78,    77,    78,     1,   338,   332,   340,
       1,    81,   420,    84,    76,   346,   347,     1,   372,    76,
     428,    81,    77,   415,   416,   417,   380,   351,   420,   353,
     384,   340,   356,   517,   518,    76,   428,   346,   347,   197,
     198,    79,    77,    78,    77,    78,    77,    78,   372,    77,
      76,   375,    77,    78,    77,    78,   380,   184,   185,   186,
     384,    77,    78,    50,    77,    52,    77,   511,   512,    77,
     514,   515,   396,   518,   398,    81,   400,   401,    38,    39,
      40,    81,    77,    78,    77,    83,    77,    78,    78,    77,
     414,   445,   416,    77,    78,     1,    83,    77,     3,     3,
     424,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    71,    81,    81,   445,   102,    81,    81,     9,    10,
      11,   475,    81,    77,    30,   569,    86,    83,   573,   574,
     575,    81,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      81,   475,    99,    99,   478,   599,   600,   601,   602,   603,
     147,   148,   585,   517,   518,    71,     3,    79,    74,    76,
     585,    81,    81,   160,   161,   499,   500,    79,    84,    98,
      81,    81,    81,   499,   500,    76,   517,   518,   433,    80,
     177,    82,    81,    81,   181,    81,    81,   184,   185,   186,
     187,    79,    62,    79,   528,   192,    81,    81,   195,   196,
     197,   198,   199,   200,    60,   202,    77,    99,   542,   543,
     199,   546,   200,   547,    72,   202,   550,   551,   396,   425,
     445,   129,    44,   557,   550,   551,   560,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   578,    -1,    -1,    -1,    -1,    -1,
      -1,   506,   507,    -1,   509,    -1,    -1,    -1,    -1,   593,
      -1,    -1,    -1,   597,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   621,    -1,    -1,
      -1,   625,    -1,    -1,    -1,    -1,   293,    -1,    -1,    31,
      -1,    -1,    -1,    -1,   301,   302,   303,    -1,   305,   306,
      -1,   566,    -1,    -1,   311,   312,   313,   314,    -1,   316,
     317,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,   591,    -1,    70,   594,
      72,   596,   597,   598,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    85,    86,    87,    88,    89,    90,   614,
      -1,   616,    -1,   618,   619,    -1,    -1,   364,   623,    -1,
     625,   626,    -1,   628,    -1,    -1,    -1,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   415,    99,
     417,    -1,    -1,   420,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   428,     3,     4,     5,     6,     7,     8,    -1,    10,
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
      90,    91,    92,    93,    94,    95,    96,    97,     1,    99,
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
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
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
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    93,    94,    95,    96,    97,     1,    99,     3,     4,
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
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    95,    96,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    -1,
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
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    95,    96,    97,     1,    99,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    95,    96,    97,     1,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    95,
      96,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    97,     1,
      99,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,     1,    73,     3,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    -1,    -1,
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
       3,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
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
      -1,    71,     1,    73,     3,    75,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,     1,    73,    -1,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      98,    99,    38,    39,    40,    41,    42,    43,    44,    45,
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
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    85,    86,    87,    88,    89,    90,
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
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      31,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
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
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
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
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    30,    86,    -1,    -1,    -1,    -1,    -1,    -1,    38,
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
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    71,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   141,   142,   146,   147,   148,   149,   155,   158,
     159,   160,   161,   178,   193,   194,   195,   142,     3,    83,
      76,    76,    76,     3,    76,    86,    99,   143,   144,   162,
     163,   164,   142,   142,     1,     3,    83,   142,   142,   142,
       0,   194,    83,     3,   103,   156,   157,     1,     3,     4,
       5,     6,     7,     8,    10,    11,    31,    70,    72,    76,
      85,    86,    87,    88,    89,    90,   101,   102,   104,   105,
     108,   110,   113,   114,   115,   119,   122,   123,   128,   131,
     132,   133,   134,   135,   136,   140,   147,   152,   159,   170,
     170,     1,   140,   162,    71,   159,   164,   165,     1,    78,
      99,     1,    98,   196,   197,    76,    80,   163,     1,   150,
     151,   152,   178,     1,    83,   150,   156,     1,    98,     1,
      78,    84,    76,    80,   152,   164,   171,   172,    76,   110,
     111,   112,    76,     1,    76,   110,   136,   137,   139,   170,
       9,    10,    11,    76,    80,    82,   114,     1,    86,    91,
      92,     1,    87,    88,     1,    12,    13,     1,    14,    15,
      93,    94,     1,    16,    17,     1,    85,     1,    95,    96,
      18,     1,    19,    97,    77,   152,     1,   171,   152,    77,
      77,    78,    78,     1,    77,   159,   164,   144,   162,   145,
     141,   142,   198,    83,   183,     1,     3,    77,   142,   166,
     167,   168,   169,    34,    81,    86,   137,   165,    84,   151,
      79,    99,   153,   154,   162,   150,   150,     1,    84,     1,
      78,    84,   140,     1,   140,   157,     1,    84,   157,    77,
     166,   171,    34,    81,    86,   137,   165,   172,    76,    80,
     170,    76,   110,   110,   170,   137,   137,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    98,   138,     1,
      77,    78,     1,    77,     3,    77,   109,   137,   139,     3,
     114,   116,   117,   118,   115,   120,   121,   119,   119,   119,
     122,   126,   127,   124,   125,   123,   129,   130,   128,   128,
     131,   131,     1,   132,     1,   133,   139,     1,   134,   139,
       6,     6,    83,   137,   173,   141,   183,    84,   184,    77,
      76,   162,   164,   171,     1,    77,     1,    78,     1,    77,
      78,     1,   137,   165,    81,    81,    34,    81,    86,   137,
     140,     1,    78,    99,    79,    84,     1,    84,    84,    77,
      77,   137,   165,    81,    81,    34,    81,   137,    77,   166,
      34,    81,    86,   137,   165,    77,   170,    77,    78,     1,
      78,   137,   137,     1,   137,    83,    83,   114,     1,    77,
      78,     1,    81,   114,   114,   114,   115,   115,   122,   122,
     122,   122,   123,   123,     1,    79,     1,    79,    77,    77,
      80,    82,   173,   174,   175,   176,   177,     3,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    99,
     139,   141,   179,   180,   183,   185,   186,   187,   188,   191,
     192,    56,   168,    56,   168,     3,     3,    81,   137,    81,
       1,   137,   137,    81,    81,   154,     1,   154,   140,    81,
     137,   137,    81,    77,   137,   165,    81,    81,    34,    81,
     137,    77,    58,   106,   107,   170,   106,   106,   174,   137,
     137,   136,   136,   136,    99,    99,     1,   140,     3,     1,
      78,    84,   173,     1,    98,   177,    79,     1,   140,     1,
     182,     1,    76,   189,     1,    76,   179,     1,    76,     1,
       3,     1,    99,     1,    99,     1,    99,   139,     1,    99,
      84,   186,    81,    81,    81,    81,    81,    81,    81,   137,
     137,    81,     1,    79,     1,    77,    78,    79,    77,    77,
       1,    78,    84,    81,     1,    81,   173,   175,    84,   173,
     175,     1,   179,   179,   181,   179,    79,   139,   139,    76,
     139,   139,    62,   141,   141,   187,     1,    99,     1,    99,
      81,    81,   137,     1,   137,     1,   107,   137,    84,   173,
     173,    79,   179,     1,    77,   139,    77,     1,    77,     1,
      76,   187,   187,   187,   179,   179,    77,   179,   137,   179,
     179,   139,   139,   139,    77,   139,    77,   139,    60,   190,
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
     136,   137,   137,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   139,   139,   139,   139,   140,   141,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   143,   145,   144,   144,
     144,   146,   146,   146,   146,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   148,   148,   148,   148,   148,   148,
     149,   149,   150,   150,   151,   151,   151,   151,   152,   152,
     152,   152,   152,   153,   153,   153,   153,   154,   154,   154,
     155,   155,   155,   155,   155,   155,   155,   156,   156,   156,
     156,   157,   157,   157,   157,   158,   159,   159,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   164,   164,   164,
     164,   165,   165,   166,   166,   166,   167,   167,   167,   168,
     168,   168,   169,   169,   169,   170,   170,   170,   170,   171,
     171,   171,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   173,   174,   174,   174,
     174,   174,   174,   175,   175,   176,   176,   177,   177,   177,
     177,   178,   178,   179,   179,   179,   179,   179,   179,   180,
     181,   180,   182,   180,   180,   180,   180,   183,   184,   183,
     185,   185,   186,   186,   187,   187,   187,   188,   188,   189,
     190,   188,   188,   188,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   193,   193,
     194,   194,   196,   195,   197,   195,   198,   198
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
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     2,
       3,     1,     3,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     3,     2,     0,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     2,     4,     5,     5,     4,
       1,     1,     1,     2,     2,     3,     1,     3,     2,     1,
       2,     1,     2,     1,     3,     3,     3,     2,     3,     1,
       4,     5,     5,     6,     2,     5,     4,     1,     3,     3,
       3,     3,     1,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     4,     4,     2,     1,     1,     3,     3,     4,
       6,     5,     5,     6,     5,     4,     4,     4,     3,     4,
       3,     6,     6,     5,     4,     4,     4,     3,     2,     2,
       1,     1,     2,     3,     1,     3,     1,     3,     3,     2,
       2,     1,     1,     3,     3,     2,     1,     2,     2,     2,
       1,     1,     3,     2,     3,     5,     4,     5,     4,     3,
       3,     3,     4,     6,     5,     5,     6,     4,     4,     2,
       3,     3,     4,     3,     4,     1,     3,     2,     1,     4,
       3,     3,     4,     2,     2,     1,     2,     3,     2,     3,
       3,     7,     7,     1,     1,     1,     1,     1,     1,     3,
       0,     5,     0,     4,     3,     3,     3,     2,     0,     4,
       1,     2,     1,     1,     1,     2,     2,     7,     5,     0,
       0,     7,     3,     4,     5,     7,     6,     7,     6,     7,
       5,     5,     7,     7,     7,     7,     7,     3,     2,     2,
       2,     3,     2,     3,     2,     2,     3,     2,     1,     2,
       1,     1,     0,     5,     0,     4,     1,     2
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
#line 3206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 76 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "bison.y" /* yacc.c:1646  */
    { process_literal(I_CONSTANT); }
#line 3218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 96 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 98 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "bison.y" /* yacc.c:1646  */
    { call_functionNoParams(); }
#line 3260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 124 "bison.y" /* yacc.c:1646  */
    { save_op(); eval_unary(); }
#line 3266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 125 "bison.y" /* yacc.c:1646  */
    { save_op(); eval_unary(); }
#line 3272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 140 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 152 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 157 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 157 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 158 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 158 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 188 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 188 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 189 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 189 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 190 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 190 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 194 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 199 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 199 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 200 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 200 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 205 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 213 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 218 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 218 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 219 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 219 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 220 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 220 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 221 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 221 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 231 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 231 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 232 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 232 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 234 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 240 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 246 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 252 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 258 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 264 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 271 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 272 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 277 "bison.y" /* yacc.c:1646  */
    { process_assign(); }
#line 3524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 284 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 285 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 286 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 287 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 288 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 289 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 290 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 291 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 292 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 293 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 294 "bison.y" /* yacc.c:1646  */
    {save_op();}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 301 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 302 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 310 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 311 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 316 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 323 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 325 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 327 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 329 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 331 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 332 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 338 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 342 "bison.y" /* yacc.c:1646  */
    { save_op(); }
#line 3668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 342 "bison.y" /* yacc.c:1646  */
    { process_assign(); }
#line 3674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 343 "bison.y" /* yacc.c:1646  */
    { initializeID(); }
#line 3680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 344 "bison.y" /* yacc.c:1646  */
    { 
					if(yychar == IDENTIFIER || yychar == I_CONSTANT || yychar == F_CONSTANT)
						yyerrok; 

					yyclearin;  
					clearSemanticRecords(); }
#line 3691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 384 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 385 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 386 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 387 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 407 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 415 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 421 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 422 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 441 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 442 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 450 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 451 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 458 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 460 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 490 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 3781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 508 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 509 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 510 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 514 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 515 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 516 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 517 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 542 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 548 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 562 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 569 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 570 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 612 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 620 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 621 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 627 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 638 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 639 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 644 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 658 "bison.y" /* yacc.c:1646  */
    { begin_case(); }
#line 3901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 658 "bison.y" /* yacc.c:1646  */
    { /*end_case();*/}
#line 3907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 659 "bison.y" /* yacc.c:1646  */
    { create_default(); }
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 659 "bison.y" /* yacc.c:1646  */
    { append_exit(); }
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 661 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 662 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 663 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 670 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; pushTable(); }
#line 3943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 670 "bison.y" /* yacc.c:1646  */
    {inContext = FALSE;  popTable();}
#line 3949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 688 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 3955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 694 "bison.y" /* yacc.c:1646  */
    { start_switch(); }
#line 3961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 694 "bison.y" /* yacc.c:1646  */
    { save_comparator(); }
#line 3967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 694 "bison.y" /* yacc.c:1646  */
    { end_switch(); }
#line 3973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 697 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 698 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 719 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 720 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 724 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 725 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 726 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 739 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 740 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 749 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 750 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 751 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 752 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 753 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 754 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 768 "bison.y" /* yacc.c:1646  */
    { start_function(); stackPos -= 4; }
#line 4069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 768 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; }
#line 4075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 773 "bison.y" /* yacc.c:1646  */
    { start_function(); stackPos -= 4; }
#line 4081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 777 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE;  stackPos -= 4;}
#line 4087 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4091 "y.tab.c" /* yacc.c:1646  */
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



