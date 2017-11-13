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
int isDeclaration = FALSE;
int inContext = FALSE;
int unDecleared = FALSE;
char* actualFunction;



#line 108 "y.tab.c" /* yacc.c:339  */

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

#line 309 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   7994

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  93
/* YYNRULES -- Number of rules.  */
#define YYNRULES  396
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  681

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
       0,    63,    63,    72,    73,    74,    75,    77,    81,    82,
      83,    87,    91,    92,    96,    97,    98,   102,   103,   105,
     109,   110,   112,   113,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   137,   138,   139,   146,   147,   150,
     151,   155,   156,   156,   157,   157,   158,   159,   160,   161,
     169,   170,   171,   172,   173,   174,   178,   179,   186,   187,
     187,   188,   188,   189,   189,   190,   191,   192,   193,   197,
     198,   198,   199,   199,   201,   202,   204,   208,   209,   210,
     212,   216,   217,   218,   219,   220,   222,   229,   230,   231,
     232,   233,   237,   238,   239,   243,   244,   245,   249,   250,
     251,   255,   256,   257,   261,   262,   263,   267,   268,   269,
     270,   271,   275,   276,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   297,   298,   300,   301,   305,
     309,   310,   311,   315,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   335,   336,   337,   341,   341,
     342,   343,   352,   353,   354,   355,   356,   357,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   380,   381,   382,   383,   384,   385,
     386,   390,   391,   395,   396,   400,   401,   402,   406,   410,
     411,   412,   413,   414,   418,   419,   420,   421,   425,   426,
     427,   435,   436,   437,   438,   439,   440,   441,   446,   447,
     449,   450,   454,   455,   457,   459,   463,   467,   468,   469,
     470,   474,   475,   479,   480,   484,   485,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   507,   508,   509,   513,   514,   515,   516,   521,   522,
     523,   524,   526,   527,   532,   533,   538,   539,   541,   545,
     546,   547,   552,   553,   554,   558,   559,   561,   565,   566,
     568,   569,   573,   574,   575,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   605,   606,   607,   609,
     610,   611,   615,   616,   617,   618,   619,   620,   624,   626,
     630,   631,   635,   636,   637,   638,   642,   643,   647,   648,
     649,   650,   651,   652,   656,   657,   657,   658,   658,   660,
     661,   662,   668,   669,   670,   674,   675,   679,   680,   684,
     685,   687,   691,   692,   693,   693,   693,   696,   697,   707,
     708,   709,   710,   711,   712,   716,   717,   718,   719,   721,
     722,   723,   724,   725,   727,   729,   730,   731,   733,   734,
     735,   736,   737,   738,   739,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   757,   758,   762,   763,
     767,   767,   767,   772,   770,   780,   781
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
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "$@8", "storage_class_specifier", "type_specifier",
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
  "static_assert_declaration", "statement", "labeled_statement", "$@9",
  "$@10", "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@11", "$@12",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@13", "$@14", "$@15",
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

#define YYPACT_NINF -309

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-309)))

#define YYTABLE_NINF -394

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7510,  7677,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,    45,   -47,   -27,  -309,
      -8,  -309,  -309,   104,  3565,  3636,  -309,   229,  -309,  -309,
    3707,  3778,  3849,  -309,  7455,  -309,  -309,  -309,     9,    94,
    4695,  7889,  4941,  -309,   111,  3335,  -309,    18,  -309,  3920,
     -26,    44,  -309,  -309,  7732,   743,  7732,  -309,  -309,  -309,
    -309,  -309,    94,  -309,    90,    65,  -309,  6959,  -309,  -309,
    -309,  -309,  -309,  6561,  -309,  -309,  -309,   106,   167,  4695,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
     510,  -309,  6649,  -309,   950,  1338,  1435,  2308,  2696,   180,
     190,   206,   287,  2890,  -309,   233,  4310,   210,  4372,   253,
     266,   267,   290,   178,   268,  -309,  -309,  -309,   470,   294,
     111,  -309,  -309,  -309,  7510,   291,  7289,  5901,   -26,  7923,
    7014,  -309,   110,  -309,  7732,  7732,  7069,   123,  6649,  4963,
      94,    85,  -309,  6794,  5989,  -309,   249,  -309,   276,  4695,
    -309,  6671,  6671,  7889,  5053,   408,  -309,  -309,   239,   223,
     379,  -309,  -309,  6385,  6649,   384,  -309,  6649,  5075,  5097,
    5187,  6649,  5209,  5231,  6649,  6649,  6649,  6649,  6649,  6649,
    6649,  6649,  6649,  6649,  5321,  5343,  5365,  5455,  5477,  6649,
    5499,  5589,  -309,  -309,  -309,  -309,  -309,  -309,  -309,   394,
     398,  -309,  -309,  -309,  -309,  -309,  -309,    11,  6407,  -309,
     104,  7234,  3077,  -309,  7344,  -309,  -309,    36,   256,   241,
    -309,   243,   543,  -309,   342,   344,  6011,  -309,  -309,  6649,
    -309,    37,  -309,   348,  7124,  7179,  3423,  -309,    94,   131,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,   361,
     362,  6165,  -309,   365,   366,  6033,   276,  7399,  6121,   269,
    4695,  -309,  -309,   367,   364,   375,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  6649,  6649,  -309,
    5611,   373,  6429,  -309,  -309,   307,  -309,    12,  -309,  -309,
    -309,  6649,  -309,  6649,  -309,  6649,  1047,  -309,  6649,  -309,
    6649,  1532,  1629,  1726,  1823,  1920,  2017,  2114,  2211,  2405,
    2502,  -309,  2599,  -309,  2793,  -309,   180,  -309,   190,  -309,
     206,   193,  -309,   287,   378,   228,   382,   385,  4807,  -309,
    -309,  -309,   291,   389,  5633,    54,    66,  -309,   138,  3975,
     218,    79,    22,    59,   272,  -309,  -309,    74,  -309,  -309,
    -309,  -309,  3167,  -309,  -309,  -309,  -309,  -309,  -309,  6739,
    -309,   105,  -309,  -309,  -309,  7565,  7621,   458,  -309,   460,
    6517,   388,  4785,  -309,  -309,  6649,  -309,   404,   405,  -309,
     116,   225,  -309,  6649,  -309,  3494,  -309,  -309,  -309,  -309,
     407,  6165,  -309,  -309,  6649,  -309,   409,  -309,   400,  6165,
    -309,   412,   414,  6143,   413,   292,  -309,  7787,  7821,  -309,
    -309,  -309,  -309,  -309,  6297,  -309,  6649,  -309,  5723,  6649,
    -309,  -309,  -309,  -309,  1144,  1241,  6649,  6649,  6649,  6649,
    6649,   417,   424,   231,  5745,   500,  -309,   175,  6407,    80,
    -309,  -309,  4019,  4561,  -309,  4561,   425,  6649,  6649,   436,
    6649,  5767,   451,   468,  7510,  3257,  -309,    62,  -309,  -309,
    -309,  -309,  -309,  -309,    78,  6649,  -309,   850,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,   459,  -309,   461,
     462,   464,  -309,  -309,  -309,  -309,  -309,  -309,  -309,   476,
     478,  -309,  -309,   479,  6165,  -309,  -309,  6649,  -309,   482,
     413,   170,   174,  -309,   486,  6904,   245,   183,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,   455,  -309,   485,
      86,  -309,  6297,  6253,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,   489,  -309,  4561,  2987,   331,  6649,   335,   492,
     338,   496,   273,  4583,  3347,   521,  4428,  -309,  -309,  6649,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,   497,   498,
    -309,  6649,  5857,  -309,  7855,  6649,  -309,  -309,  6297,  6275,
    -309,  -309,  -309,  -309,  -309,  -309,  6407,  -309,  -309,  6407,
    4561,  -309,  6649,  4561,   340,  4561,  4561,  4561,  4109,  6649,
    6649,  5879,  6649,   503,  6649,  4829,  6539,  4919,  -309,  -309,
    -309,  -309,  -309,  6849,  -309,  -309,  -309,  -309,  -309,  -309,
     528,  -309,  -309,  -309,   512,  -309,  -309,  -309,   363,   372,
     517,   377,   393,  4561,   396,   522,  4561,   402,  4561,   406,
    4471,  4561,   423,  4561,  4561,   499,   501,   502,  4605,    76,
    4561,  -309,  4561,  4561,  -309,  4561,  4152,  -309,  4561,  4561,
    -309,  -309,  4242,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   173,   152,   153,   154,   156,   157,   221,   217,
     218,   219,   167,   159,   160,   161,   162,   165,   166,   163,
     164,   158,   168,   169,   181,   182,     0,     0,   220,   222,
       0,   155,   389,     0,     0,     0,   171,     0,   172,   170,
       0,     0,     0,   132,     0,   386,   388,   144,   205,     0,
       0,     0,     0,   227,     0,     0,   130,     0,   145,     0,
     226,     0,   134,   136,     0,     0,     0,   138,   140,   142,
       1,   387,     0,    11,     0,     0,   208,     0,     2,     8,
       9,    12,    13,     0,    42,    44,    10,     0,     0,     0,
      50,    51,    52,    53,    54,    55,    24,     3,     4,     6,
      41,    56,     0,    58,     0,     0,     0,     0,     0,    95,
      98,   101,   104,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,   220,   254,   250,   249,   133,
       0,   131,   151,   148,     0,     0,     0,     0,   225,     0,
       0,   183,     0,   187,     0,     0,     0,     0,     0,     0,
     207,     0,   201,     0,     0,   193,   273,   270,   274,     0,
      47,     0,     0,     0,     0,    56,   112,   125,     0,     0,
       0,    30,    31,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   189,   271,   268,   191,   223,   216,     0,
       0,   241,   228,   252,   255,   248,   146,     0,     0,   395,
       0,     0,     0,   394,     0,   265,   239,   264,     0,     0,
     259,     0,     0,   229,    51,     0,     0,   177,   184,     0,
     185,     0,   194,   200,     0,     0,     0,   174,   206,     0,
     203,   215,   214,   212,   211,   210,   202,   209,   292,     0,
       0,     0,   276,    51,     0,     0,   272,     0,     0,     0,
       0,    43,    45,     0,     0,     0,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   114,     0,     7,     5,
       0,     0,     0,    29,    26,     0,    37,     0,    28,    68,
      65,     0,    66,     0,    67,     0,     0,    74,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,    94,     0,    97,    96,   100,    99,   103,
     102,     0,   106,   105,     0,     0,     0,     0,     0,   298,
     149,   396,     0,     2,     0,     0,     0,   344,     0,     0,
       0,     0,     0,     0,     0,   332,   339,     0,   337,   338,
     318,   319,     0,   335,   320,   321,   322,   323,   246,     0,
     262,   273,   263,   245,   238,     0,     0,   247,   240,     0,
       0,     0,     0,   230,   237,     0,   236,    51,     0,   198,
     188,     0,   186,     0,   179,     0,   175,   204,   293,   275,
       0,     0,   277,   283,     0,   282,     0,   294,     0,     0,
     284,    51,     0,     0,    48,     0,    49,     0,     0,   113,
     128,   127,   126,    36,     0,    57,    34,    27,     0,    35,
      25,    60,    62,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
     310,   392,     0,     0,   325,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   385,     0,   383,   376,
     382,   377,   380,   378,     0,   341,   340,     0,   333,   336,
     258,   261,   256,   260,   267,   266,   244,     0,   232,     0,
       0,     0,   233,   235,   197,   196,   195,   199,   279,     0,
       0,   281,   295,     0,     0,   285,   291,     0,   290,     0,
       0,     0,     0,    17,     0,     0,     0,     0,    40,    39,
      38,   111,   109,   110,   108,   317,   316,     0,   299,     0,
       0,   313,   301,     0,   296,   302,   309,   308,   311,   329,
     324,   330,     0,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   384,   375,   381,
     379,   242,   243,   231,   234,   278,   280,   287,     0,     0,
     288,     0,     0,    15,     0,     0,    16,    14,     0,     0,
      32,   300,   314,   315,   312,   306,     0,   297,   305,     0,
       0,   328,   348,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   286,   289,
      23,    22,    21,     0,    18,    20,    33,   307,   304,   326,
     343,   345,   358,   355,   125,   357,   356,   349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,     0,     0,   353,     0,     0,   368,     0,     0,
     370,   351,     0,   342,   346,   359,   363,   360,   362,   361,
     350,   374,   369,   371,   373,   372,   354,   365,   366,   367,
     352
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -309,  -309,  -309,  -309,  -309,  -309,   184,    29,  -309,  -309,
     535,  -309,  -309,  -309,   -93,  -160,  -309,  -309,  -309,   181,
    -309,  -309,   346,   383,   410,   416,   419,   426,   421,  -309,
     -18,    63,  -309,    57,   -46,  -127,    30,  -309,   487,  -309,
    -309,    17,  -309,  -309,   147,  -100,   -40,  -309,    -1,  -309,
     551,  -123,  -309,     1,  -309,  -309,   -29,   -58,   -55,  -121,
    -126,  -309,    20,  -309,   -36,  -109,  -151,  -198,   201,   -81,
    -309,   177,    19,   109,  -309,  -309,  -309,  -124,  -309,   265,
    -308,  -309,  -309,  -309,  -309,  -309,  -309,   592,  -309,  -309,
    -309,  -309,  -309
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    96,    97,    74,    98,    99,   512,   513,   100,   295,
     165,   161,   162,   102,   103,   104,   301,   303,   305,   105,
     308,   310,   106,   107,   108,   109,   110,   111,   112,   113,
     166,   167,   287,   357,   115,    32,   220,    57,    58,   218,
      34,   116,    36,    37,   140,   141,   117,   241,   242,    38,
      75,    76,    39,   118,    41,    42,   243,    60,    61,   128,
     259,   229,   230,   231,   514,   157,   158,   446,   447,   448,
     449,   450,    43,   359,   360,   542,   456,   361,   362,   363,
     364,   365,   459,   644,   366,   367,    44,    45,    46,   134,
     342,   135,   221
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     127,    40,    40,   138,    59,   266,   122,   219,   205,   176,
     228,   223,   132,   429,   119,   120,   236,    35,    35,   129,
     340,   306,   156,   468,   142,   123,   142,   254,   257,    50,
      33,    47,   114,   265,   114,    40,    40,   155,   390,    53,
     238,    40,    40,    40,   260,    40,   238,    53,    48,    51,
     136,    35,    35,   169,   137,   455,   126,    35,    35,    35,
     470,    35,   156,   557,    62,    63,   150,   457,    52,   213,
      67,    68,    69,   215,    33,   475,   203,   669,   206,   559,
     466,   536,   467,   143,   299,   143,   255,   583,    73,  -150,
     290,   148,    72,   430,   341,   358,   130,    73,   156,   155,
     142,   217,   251,   253,   142,   142,   142,    53,    53,   133,
    -150,   382,   369,    53,    53,   391,   154,   131,   372,    53,
      54,   469,    55,   269,   248,   254,   257,   273,    49,   214,
     114,   114,   255,  -327,    73,    40,   392,    40,   126,   460,
     401,   408,   458,   151,   238,   238,   168,   413,   434,   152,
     435,    35,   290,    35,    40,   126,   290,   556,   471,   143,
     444,   558,   445,   143,   143,   143,   227,   584,  -213,   256,
      35,   571,   371,   476,  -213,   670,   532,   560,   537,   211,
      54,   369,   163,   227,   578,   154,    54,    54,   149,   239,
      55,   217,    54,   389,   436,   239,    55,    55,   370,   425,
     235,   249,    55,    56,   142,   142,   155,   250,   431,   240,
     432,   204,   433,   146,   461,   397,   168,   264,   451,   464,
     266,   114,    40,    40,   291,    40,   495,   275,    53,   439,
      64,   297,    65,   126,   415,   358,   296,   214,    35,    35,
     288,    35,   375,   164,   377,   602,   603,   605,   607,   572,
     535,   573,   574,   533,    47,   212,   331,   373,   335,   534,
     260,   579,   126,   143,   143,   195,   214,   580,    40,   126,
     291,   290,   437,   472,   600,    78,    79,    80,    81,    82,
      83,   339,    84,    85,    35,   196,   153,  -269,   504,  -269,
     154,   244,   245,   291,   465,   381,    55,   227,   454,   388,
     292,    54,   197,    86,   239,   198,   290,   440,   426,   527,
     202,    55,    66,   138,   371,   528,   289,   290,  -257,   376,
     378,   379,   577,   574,   400,   153,   114,   168,   406,   154,
     207,   412,   592,   374,   585,   588,   436,   553,   555,   597,
     123,   436,    87,   208,    88,   209,   414,   497,    89,   601,
     419,   420,   267,   422,    55,   155,   268,    90,    91,    92,
      93,    94,    95,    40,   436,   311,   312,   313,   210,   510,
      40,   473,  -147,   436,   222,   114,    40,    40,   648,    35,
     585,   588,   293,   214,   427,   428,    35,   298,   617,   494,
     496,   618,    35,    35,   436,   481,   483,   436,   530,   227,
     336,   339,   214,   655,   337,   227,   227,   436,   593,   290,
     126,   474,   595,   290,   214,   598,   290,   621,   290,   521,
     522,   523,   524,   383,   436,   384,   114,   393,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   398,   399,
     645,   290,   417,   487,   416,   490,   402,   403,   491,   646,
     290,   586,   589,   418,   649,   290,   423,   438,   463,   441,
     156,   484,   442,   485,   499,    40,    40,   500,   452,   488,
     650,   290,   503,   652,   290,   155,   509,   502,    40,   656,
     290,    35,    35,   658,   290,   492,   493,   339,   498,   518,
     501,   520,   420,   505,    35,   506,   424,   586,   589,   420,
     662,   290,   420,   531,   544,   214,   286,    47,     9,    10,
      11,   339,   547,   551,   545,   546,   525,   548,   550,   170,
     171,   172,   604,   526,    78,    79,    80,    81,    82,    83,
     552,    84,    85,   314,   315,   316,   317,   318,   420,   581,
     561,   125,   562,   563,   380,   564,    78,    79,    80,    81,
      82,    83,    86,    84,    85,    40,    55,   565,   156,   566,
     567,   540,   541,   570,   543,   575,   582,   568,   590,   596,
     569,    35,   599,   155,    86,   319,   320,   322,   608,   609,
     633,     9,    10,    11,    47,   101,   173,   101,   643,  -128,
     174,    87,   175,    88,   647,   339,   339,    89,   665,   653,
     666,   667,   516,   614,   594,   324,    90,    91,    92,    93,
      94,    95,   326,    87,   125,    88,   328,   216,   160,    89,
     356,   333,   420,   147,   330,   517,   538,   479,    90,    91,
      92,    93,    94,    95,   610,   612,    71,   101,   615,     0,
       0,   339,   339,     0,     0,     0,     0,     0,     0,   339,
       0,     0,   339,   591,     0,   420,   628,   629,   631,   632,
     624,   634,   637,   639,   642,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   271,   272,     0,   619,
       0,     0,   620,     0,   622,   623,   625,   627,     0,     0,
       0,   420,   101,     0,     0,     0,   101,     0,   624,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,     0,   101,     0,     0,     0,     0,
       0,     0,   651,     0,   144,   654,  -176,   657,     0,   660,
     661,     0,   663,   664,     0,     0,     0,     0,     0,   671,
       0,   672,   673,     0,   674,   676,     0,   677,   678,     0,
       0,   680,     0,  -176,   101,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -176,     0,  -176,     0,  -176,     0,  -176,  -176,
    -176,  -176,  -176,  -176,     0,     0,   145,   101,     0,  -176,
       0,     0,     0,     0,     0,     0,   101,     0,   101,     0,
     101,     0,  -176,   101,     0,   101,     0,     0,     0,     0,
    -334,     1,     0,  -334,  -334,  -334,  -334,  -334,  -334,     0,
    -334,  -334,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
       2,  -334,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,    27,
    -334,    28,  -334,    29,  -334,    31,  -334,     0,   101,     0,
       0,     0,     0,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,     0,     0,     0,     0,     0,     0,     0,     0,  -334,
       0,   177,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,   101,   101,     0,   101,     0,     0,     0,   101,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -69,     0,   -69,   -69,   -69,   178,   -69,   -69,   -69,
     -69,   179,   180,   -69,   -69,   -69,   -69,   -69,   177,   -69,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,     0,
     -76,   -76,   -76,   178,   -76,   -76,   -76,   -76,   179,   180,
     -76,   -76,   -76,   -76,   -76,   177,   -76,   -71,   -71,   -71,
     -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,     0,   -71,   -71,   -71,
     178,   -71,   -71,   -71,   -71,   179,   180,   -71,   -71,   -71,
     -71,   -71,   177,   -71,   -73,   -73,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,     0,   -73,   -73,   -73,   178,   -73,   -73,
     -73,   -73,   179,   180,   -73,   -73,   -73,   -73,   -73,   181,
     -73,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
       0,   -77,   -77,   -77,   -77,   182,   183,   -77,   -77,     0,
       0,   -77,   -77,   -77,   -77,   -77,   184,   -77,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,   -81,   185,   186,   -81,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,   -81,
     -81,   -81,   -81,   181,   -81,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,     0,   -80,   -80,   -80,   -80,   182,
     183,   -80,   -80,     0,     0,   -80,   -80,   -80,   -80,   -80,
     181,   -80,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,     0,   -78,   -78,   -78,   -78,   182,   183,   -78,   -78,
       0,     0,   -78,   -78,   -78,   -78,   -78,   181,   -78,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,     0,   -79,
     -79,   -79,   -79,   182,   183,   -79,   -79,     0,     0,   -79,
     -79,   -79,   -79,   -79,   184,   -79,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,   -86,   185,   186,   -86,   -86,   -86,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,     0,     0,   -86,   -86,   -86,   -86,
     -86,   184,   -86,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   185,   186,   -84,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,     0,     0,   -84,   -84,   -84,   -84,   -84,   184,   -84,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   185,
     186,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
     -85,   -85,   -85,   -85,   -85,   184,   -85,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   185,   186,   -82,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,     0,   -82,   -82,   -82,
     -82,   -82,   184,   -82,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   -83,   -83,   185,   186,   -83,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     0,   -83,   -83,   -83,   -83,   -83,   187,
     -83,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,
       0,     0,   188,   189,   -87,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,
       0,   190,   191,   -87,   -87,   -87,   187,   -87,   -91,   -91,
     -91,   -91,   -91,   -91,     0,   -91,   -91,     0,     0,   188,
     189,   -91,   -91,   -91,   -91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,     0,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,     0,     0,   190,   191,
     -91,   -91,   -91,   187,   -91,   -88,   -88,   -88,   -88,   -88,
     -88,     0,   -88,   -88,     0,     0,   188,   189,   -88,   -88,
     -88,   -88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,     0,   190,   191,   -88,   -88,   -88,
     187,   -88,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -89,     0,     0,   188,   189,   -89,   -89,   -89,   -89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,     0,   190,   191,   -89,   -89,   -89,   192,   -89,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,     0,     0,
       0,     0,   193,   194,   -92,   -92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,     0,     0,
       0,   -92,   -92,   -92,   192,   -92,   -93,   -93,   -93,   -93,
     -93,   -93,     0,   -93,   -93,     0,     0,     0,     0,   193,
     194,   -93,   -93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,     0,     0,     0,     0,   -93,   -93,
     -93,   199,   -93,  -107,  -107,  -107,  -107,  -107,  -107,     0,
    -107,  -107,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,     0,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
       0,  -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,     0,     0,     0,     0,     0,     0,   201,   436,  -107,
    -347,  -347,  -347,  -347,  -347,  -347,     0,  -347,  -347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,     0,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,     0,   290,     0,     0,     0,     0,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,     1,     0,
     343,    79,    80,    81,    82,    83,  -347,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,   344,   345,   346,     0,   347,   348,
     349,   350,   351,   352,   353,   354,    27,    87,    28,    88,
      29,    30,    31,    89,     0,     0,     0,     0,     0,     0,
     222,   355,    90,    91,    92,    93,    94,    95,   477,     0,
     343,    79,    80,    81,    82,    83,   356,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,   344,   345,   346,     0,   347,   348,
     349,   350,   351,   352,   353,   354,    27,    87,    28,    88,
      29,    30,    31,    89,     0,     0,     0,     0,     0,     0,
     222,   478,    90,    91,    92,    93,    94,    95,   554,     0,
      78,    79,    80,    81,    82,    83,   356,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    87,    28,    88,
      29,    30,    31,    89,     0,     0,   124,     0,  -251,     0,
       0,     0,    90,    91,    92,    93,    94,    95,     1,     0,
      78,    79,    80,    81,    82,    83,   356,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,     0,     2,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,   125,     0,     0,     0,
       0,  -251,  -251,  -251,  -251,  -251,    27,    87,    28,    88,
      29,    55,    31,    89,   139,     0,  -180,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,     0,     0,
       0,     0,     0,     0,     0,     0,   356,     0,     0,     0,
       0,     0,     0,     2,     0,  -180,  -180,  -180,  -180,  -180,
    -180,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -180,     0,    28,   139,  -180,  -178,  -180,  -180,
    -180,  -180,  -180,  -180,     0,     0,     0,     0,     0,  -180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -180,     0,     2,     0,  -178,  -178,  -178,  -178,
    -178,  -178,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -178,     0,    28,     1,  -178,  -135,  -178,
    -178,  -178,  -178,  -178,  -178,     0,     0,     0,     0,     0,
    -178,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -178,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     1,    29,  -137,
      31,  -135,  -135,  -135,     0,  -135,     0,     0,     0,     0,
       0,  -135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -135,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     1,    29,
    -139,    31,  -137,  -137,  -137,     0,  -137,     0,     0,     0,
       0,     0,  -137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -137,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     1,
      29,  -141,    31,  -139,  -139,  -139,     0,  -139,     0,     0,
       0,     0,     0,  -139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -139,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       1,    29,  -143,    31,  -141,  -141,  -141,     0,  -141,     0,
       0,     0,     0,     0,  -141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -141,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,   132,    29,     0,    31,  -143,  -143,  -143,     0,  -143,
       0,     0,     0,     0,     0,  -143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -143,     0,
    -390,     0,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,   462,     0,   343,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,  -390,
       0,  -390,     0,  -390,  -390,  -390,     0,     0,  -150,     0,
       0,     0,     0,  -393,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,  -150,
     539,     0,   343,    79,    80,    81,    82,    83,     0,    84,
      85,     0,   344,   345,   346,     0,   347,   348,   349,   350,
     351,   352,   353,   354,     0,    87,     0,    88,     0,     0,
      86,    89,     0,     0,     0,     0,     0,     0,   222,     0,
      90,    91,    92,    93,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,   356,     0,   344,   345,   346,     0,
     347,   348,   349,   350,   351,   352,   353,   354,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,   222,     0,    90,    91,    92,    93,    94,    95,
     626,     0,   343,    79,    80,    81,    82,    83,   356,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   675,     0,   343,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,   344,   345,   346,     0,
     347,   348,   349,   350,   351,   352,   353,   354,     0,    87,
       0,    88,     0,    86,     0,    89,     0,     0,     0,     0,
       0,     0,   222,     0,    90,    91,    92,    93,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,   356,   344,
     345,   346,     0,   347,   348,   349,   350,   351,   352,   353,
     354,     0,    87,     0,    88,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,   222,     0,    90,    91,    92,
      93,    94,    95,   679,     0,   343,    79,    80,    81,    82,
      83,   356,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
     345,   346,     0,   347,   348,   349,   350,   351,   352,   353,
     354,   139,    87,  -190,    88,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,   222,     0,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       2,   356,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,   139,     0,  -192,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,  -190,  -190,     0,  -190,
    -190,     0,     0,     0,     0,     0,  -190,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,  -190,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,   606,
       0,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,    28,     0,     0,     0,     0,  -192,  -192,
       0,  -192,  -192,     0,     0,     0,     0,     0,  -192,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -192,     0,     0,   343,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
      88,     0,    86,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,   356,   344,   345,
     346,     0,   347,   348,   349,   350,   351,   352,   353,   354,
       0,    87,     0,    88,     0,     0,     0,    89,   659,     0,
       0,     0,     0,     0,   222,     0,    90,    91,    92,    93,
      94,    95,     0,     0,   343,    79,    80,    81,    82,    83,
     356,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,     0,   344,   345,
     346,     0,   347,   348,   349,   350,   351,   352,   353,   354,
       0,    87,     0,    88,     0,     0,    86,    89,     0,     0,
       0,     0,     0,     0,   222,     0,    90,    91,    92,    93,
      94,    95,     0,    87,     0,    88,     0,     0,     0,    89,
     356,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    87,     0,    88,     0,     0,
       0,    89,   356,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    77,     0,    78,    79,
      80,    81,    82,    83,   668,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    86,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    28,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,   489,     0,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   443,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     9,    10,    11,     0,     0,     0,     0,
     635,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,   125,    88,     0,     0,
      86,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,   444,     0,   445,
     338,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,   636,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
     640,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     0,     0,    86,    89,   641,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,    87,     0,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,   274,     0,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   300,     0,   -59,   -59,
     -59,   -59,   -59,   -59,    86,   -59,   -59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   302,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -59,   -61,   -61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,    88,     0,     0,   -61,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,   -59,     0,   -59,     0,     0,
       0,   -59,     0,     0,     0,     0,     0,     0,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,     0,   -61,     0,   -61,
       0,     0,     0,   -61,     0,     0,     0,     0,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   304,     0,
     -63,   -63,   -63,   -63,   -63,   -63,     0,   -63,   -63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -63,   -70,
     -70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   309,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -70,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -63,     0,   -63,
       0,     0,   -72,   -63,     0,     0,     0,     0,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -70,
       0,   -70,     0,     0,     0,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   -72,     0,   -72,     0,     0,     0,   -72,     0,     0,
       0,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   321,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   323,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   325,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    88,     0,     0,    86,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,    87,     0,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,   327,     0,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   329,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     332,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
      86,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
     334,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   421,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   453,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     0,     0,    86,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,    87,     0,    88,     0,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,   519,     0,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   529,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   549,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,    88,     0,     0,    86,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,   611,     0,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     630,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,    86,    89,     0,   232,     0,     0,     0,     9,
      10,    11,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,   125,    88,     0,     0,     0,    89,     0,     0,
       0,     0,   233,     0,     0,     0,    90,   234,    92,    93,
      94,    95,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,   261,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,   385,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,    87,
     125,    88,     0,     0,    86,    89,     0,   404,     0,     0,
     262,     9,    10,    11,    90,   263,    92,    93,    94,    95,
       0,    87,   125,    88,     0,     0,     0,    89,     0,     0,
       0,     0,   386,     0,     0,     0,    90,   387,    92,    93,
      94,    95,     0,    87,   125,    88,     0,     0,     0,    89,
       0,     0,     0,     0,   405,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    86,    84,    85,   409,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,   507,     0,     0,
       0,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,    87,   125,    88,     0,     0,    86,    89,     0,     0,
       0,     0,   410,     9,    10,    11,    90,   411,    92,    93,
      94,    95,     0,    87,   125,    88,     0,     0,     0,    89,
       0,     0,     0,     0,   508,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    87,   125,    88,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,    86,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,    88,     0,     0,    86,    89,
       0,     0,     0,   444,     0,   445,   338,   587,    90,    91,
      92,    93,    94,    95,     0,    87,     0,    88,     0,     0,
       0,    89,     0,     0,     0,   444,     0,   445,   338,   616,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,   444,     0,   445,
     338,     0,    90,    91,    92,    93,    94,    95,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    86,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
      86,    89,   294,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
     338,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,   424,     0,    90,    91,    92,    93,    94,    95,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    86,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,    86,    89,     0,     0,     0,     0,   486,     0,
       0,     0,    90,    91,    92,    93,    94,    95,     0,    87,
       0,    88,     0,     0,     0,    89,   638,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       0,    87,     0,    88,     0,     0,     0,   159,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      86,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       1,    87,    53,    88,     0,     0,     0,   270,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,   369,   258,     0,     0,   154,
       0,     0,     0,     0,     2,    55,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     139,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
     153,   258,     0,     0,   154,     0,     0,     0,     0,     2,
      55,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,   153,   -19,   -19,     0,   154,
       0,     0,     0,     0,     2,    55,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     139,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
     153,   576,     0,     0,   154,     0,     0,     0,     0,     2,
      55,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,   153,     0,     0,     0,   154,
       0,     0,     0,     0,     2,    55,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     2,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     2,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   394,     2,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   396,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     224,     0,   225,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,  -391,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,   226,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    70,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      28,     0,    29,     0,    31,     0,   407,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   480,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   482,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,    28,     0,    29,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,   515,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,   511,     0,     0,     0,     0,
       0,     2,     0,     0,     0,     0,   613,     0,    28,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,   511,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
      77,     0,    28,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,   511,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     0,   139,     0,    28,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
      28,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
      55,     0,     1,    61,    33,   156,    52,   134,   117,   102,
     136,   135,     1,     1,    50,    51,   137,     0,     1,     1,
     218,   181,    77,     1,    64,    54,    66,   150,   151,    76,
       0,     1,    50,   154,    52,    34,    35,    77,     1,     3,
     140,    40,    41,    42,   153,    44,   146,     3,     3,    76,
      76,    34,    35,    89,    80,     1,    55,    40,    41,    42,
       1,    44,   117,     1,    34,    35,     1,     1,    76,   124,
      40,    41,    42,   128,    44,     1,   116,     1,   118,     1,
       1,     1,     3,    64,   177,    66,     1,     1,     3,    78,
      78,     1,    83,    81,   221,   222,    78,     3,   153,   139,
     140,   130,   148,   149,   144,   145,   146,     3,     3,    98,
      99,   232,    76,     3,     3,    78,    80,    99,   227,     3,
      76,    99,    86,   159,     1,   248,   249,   163,    83,   128,
     148,   149,     1,    79,     3,   134,    99,   136,   137,     1,
     261,   267,    76,    78,   244,   245,    89,   268,   308,    84,
     310,   134,    78,   136,   153,   154,    78,   465,    99,   140,
      80,    99,    82,   144,   145,   146,   136,    81,    78,    84,
     153,     1,   227,    99,    84,    99,     1,    99,    98,     1,
      76,    76,    76,   153,     1,    80,    76,    76,    98,    79,
      86,   220,    76,   239,     1,    79,    86,    86,   227,   292,
     137,    78,    86,    99,   244,   245,   246,    84,   301,    99,
     303,     1,   305,    66,    76,    84,   159,   154,   342,     1,
     371,   239,   221,   222,     1,   224,     1,   164,     3,     1,
       1,   174,     3,   232,   270,   362,   173,   236,   221,   222,
       1,   224,     1,    76,     1,   553,   554,   555,   556,    79,
     448,    77,    78,    78,   224,    77,   199,     1,   201,    84,
     369,    78,   261,   244,   245,    85,   265,    84,   267,   268,
       1,    78,    79,     1,     1,     3,     4,     5,     6,     7,
       8,   218,    10,    11,   267,    95,    76,    77,   409,    79,
      80,   144,   145,     1,    76,   232,    86,   267,   344,   236,
      77,    76,    96,    31,    79,    18,    78,    79,     1,    78,
      77,    86,    83,   371,   369,    84,    77,    78,    77,    78,
      77,    78,    77,    78,   261,    76,   344,   270,   265,    80,
      77,   268,     1,    77,   532,   533,     1,   464,   465,     1,
     369,     1,    70,    77,    72,    78,    77,   393,    76,    76,
     287,   288,    76,   290,    86,   395,    80,    85,    86,    87,
      88,    89,    90,   362,     1,   184,   185,   186,    78,    77,
     369,    99,    78,     1,    83,   393,   375,   376,     1,   362,
     578,   579,     3,   382,    77,    78,   369,     3,   586,   390,
     391,   589,   375,   376,     1,   375,   376,     1,   444,   369,
       6,   338,   401,     1,     6,   375,   376,     1,    77,    78,
     409,   354,    77,    78,   413,    77,    78,    77,    78,   437,
     438,   439,   440,    81,     1,    81,   444,    79,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    77,    77,
      77,    78,    78,   380,    77,   382,    81,    81,   385,    77,
      78,   532,   533,    78,    77,    78,    83,    79,   349,    77,
     515,     3,    77,     3,   401,   464,   465,   404,    79,    81,
      77,    78,   409,    77,    78,   515,   413,    77,   477,    77,
      78,   464,   465,    77,    78,    81,    81,   424,    81,   426,
      81,   428,   429,    81,   477,    81,    83,   578,   579,   436,
      77,    78,   439,     3,    79,   504,    98,   477,    38,    39,
      40,   448,    76,    62,   457,   458,    99,   460,   461,     9,
      10,    11,     1,    99,     3,     4,     5,     6,     7,     8,
      62,    10,    11,   187,   188,   189,   190,   191,   475,    84,
      81,    71,    81,    81,     1,    81,     3,     4,     5,     6,
       7,     8,    31,    10,    11,   554,    86,    81,   613,    81,
      81,   452,   453,    81,   455,    79,    81,   504,    79,    77,
     507,   554,    76,   613,    31,   192,   193,   194,    81,    81,
      77,    38,    39,    40,   554,    50,    76,    52,    60,    77,
      80,    70,    82,    72,    77,   532,   533,    76,    99,    77,
      99,    99,   418,   574,   547,   195,    85,    86,    87,    88,
      89,    90,   196,    70,    71,    72,   197,   130,    83,    76,
      99,   200,   559,    72,   198,   424,   449,   362,    85,    86,
      87,    88,    89,    90,   571,   572,    44,   102,   575,    -1,
      -1,   578,   579,    -1,    -1,    -1,    -1,    -1,    -1,   586,
      -1,    -1,   589,   544,    -1,   592,   599,   600,   601,   602,
     597,   604,   605,   606,   607,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,   590,
      -1,    -1,   593,    -1,   595,   596,   597,   598,    -1,    -1,
      -1,   648,   177,    -1,    -1,    -1,   181,    -1,   655,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,    -1,   200,    -1,    -1,    -1,    -1,
      -1,    -1,   633,    -1,     1,   636,     3,   638,    -1,   640,
     641,    -1,   643,   644,    -1,    -1,    -1,    -1,    -1,   650,
      -1,   652,   653,    -1,   655,   656,    -1,   658,   659,    -1,
      -1,   662,    -1,    30,   239,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,   292,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,   301,    -1,   303,    -1,
     305,    -1,    99,   308,    -1,   310,    -1,    -1,    -1,    -1,
       0,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,   393,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,   437,   438,    -1,   440,    -1,    -1,    -1,   444,
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
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     1,    99,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     1,    99,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     1,
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
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    93,    94,    95,    96,    97,     1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    93,    94,
      95,    96,    97,     1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    93,    94,    95,    96,    97,
       1,    99,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    93,    94,    95,    96,    97,     1,    99,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    95,    96,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,     1,    -1,     3,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,     1,    -1,
       3,     4,     5,     6,     7,     8,    99,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,    80,    69,    70,    71,    72,
      73,    86,    75,    76,     1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,     1,    73,     3,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
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
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,
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
      71,     1,    73,    -1,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    72,    -1,    31,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,     1,    70,     3,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    99,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,
      80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,
      -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    31,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
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
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    77,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    34,    -1,    -1,    -1,    38,
      39,    40,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
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
      -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    81,    38,    39,    40,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    -1,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       1,    70,     3,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    30,    86,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    30,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    30,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    80,    -1,    -1,    -1,    -1,    30,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    30,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,     1,    -1,    71,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
       1,    -1,    71,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,     1,    -1,    71,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   135,   136,   140,   141,   142,   143,   149,   152,
     153,   154,   155,   172,   186,   187,   188,   136,     3,    83,
      76,    76,    76,     3,    76,    86,    99,   137,   138,   156,
     157,   158,   136,   136,     1,     3,    83,   136,   136,   136,
       0,   187,    83,     3,   103,   150,   151,     1,     3,     4,
       5,     6,     7,     8,    10,    11,    31,    70,    72,    76,
      85,    86,    87,    88,    89,    90,   101,   102,   104,   105,
     108,   110,   113,   114,   115,   119,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   134,   141,   146,   153,   164,
     164,     1,   134,   156,     1,    71,   153,   158,   159,     1,
      78,    99,     1,    98,   189,   191,    76,    80,   157,     1,
     144,   145,   146,   172,     1,    83,   144,   150,     1,    98,
       1,    78,    84,    76,    80,   146,   158,   165,   166,    76,
     110,   111,   112,    76,    76,   110,   130,   131,   133,   164,
       9,    10,    11,    76,    80,    82,   114,     1,    86,    91,
      92,     1,    87,    88,     1,    12,    13,     1,    14,    15,
      93,    94,     1,    16,    17,    85,    95,    96,    18,     1,
      19,    97,    77,   146,     1,   165,   146,    77,    77,    78,
      78,     1,    77,   158,   153,   158,   138,   156,   139,   135,
     136,   192,    83,   177,     1,     3,    77,   136,   160,   161,
     162,   163,    34,    81,    86,   131,   159,    84,   145,    79,
      99,   147,   148,   156,   144,   144,     1,    84,     1,    78,
      84,   134,     1,   134,   151,     1,    84,   151,    77,   160,
     165,    34,    81,    86,   131,   159,   166,    76,    80,   164,
      76,   110,   110,   164,     1,   131,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    98,   132,     1,    77,
      78,     1,    77,     3,    77,   109,   131,   133,     3,   114,
       1,   116,     1,   117,     1,   118,   115,     1,   120,     1,
     121,   119,   119,   119,   122,   122,   122,   122,   122,   123,
     123,     1,   123,     1,   124,     1,   125,     1,   126,     1,
     127,   133,     1,   128,     1,   133,     6,     6,    83,   131,
     167,   135,   190,     3,    57,    58,    59,    61,    62,    63,
      64,    65,    66,    67,    68,    84,    99,   133,   135,   173,
     174,   177,   178,   179,   180,   181,   184,   185,    77,    76,
     156,   158,   165,     1,    77,     1,    78,     1,    77,    78,
       1,   131,   159,    81,    81,    34,    81,    86,   131,   134,
       1,    78,    99,    79,    84,     1,    84,    84,    77,    77,
     131,   159,    81,    81,    34,    81,   131,    77,   160,    34,
      81,    86,   131,   159,    77,   164,    77,    78,    78,   131,
     131,     1,   131,    83,    83,   114,     1,    77,    78,     1,
      81,   114,   114,   114,   115,   115,     1,    79,    79,     1,
      79,    77,    77,     1,    80,    82,   167,   168,   169,   170,
     171,   177,    79,     1,   134,     1,   176,     1,    76,   182,
       1,    76,     1,   173,     1,    76,     1,     3,     1,    99,
       1,    99,     1,    99,   133,     1,    99,     1,    84,   179,
      56,   162,    56,   162,     3,     3,    81,   131,    81,     1,
     131,   131,    81,    81,   148,     1,   148,   134,    81,   131,
     131,    81,    77,   131,   159,    81,    81,    34,    81,   131,
      77,    58,   106,   107,   164,     1,   106,   168,   131,     1,
     131,   130,   130,   130,   130,    99,    99,    78,    84,     1,
     134,     3,     1,    78,    84,   167,     1,    98,   171,     1,
     173,   173,   175,   173,    79,   133,   133,    76,   133,     1,
     133,    62,    62,   135,     1,   135,   180,     1,    99,     1,
      99,    81,    81,    81,    81,    81,    81,    81,   131,   131,
      81,     1,    79,    77,    78,    79,    77,    77,     1,    78,
      84,    84,    81,     1,    81,   167,   169,    84,   167,   169,
      79,   173,     1,    77,   133,    77,    77,     1,    77,    76,
       1,    76,   180,   180,     1,   180,     1,   180,    81,    81,
     131,     1,   131,     1,   107,   131,    84,   167,   167,   173,
     173,    77,   173,   173,   131,   173,     1,   173,   133,   133,
       1,   133,   133,    77,   133,     1,    77,   133,    77,   133,
       1,    77,   133,    60,   183,    77,    77,    77,     1,    77,
      77,   173,    77,    77,   173,     1,    77,   173,    77,    77,
     173,   173,    77,   173,   173,    99,    99,    99,    99,     1,
      99,   173,   173,   173,   173,     1,   173,   173,   173,     1,
     173
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   103,   104,   104,   105,   105,   105,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   109,
     109,   110,   111,   110,   112,   110,   110,   110,   110,   110,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   116,
     115,   117,   115,   118,   115,   115,   115,   115,   115,   119,
     120,   119,   121,   119,   119,   119,   119,   122,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   124,   124,   124,
     124,   124,   125,   125,   125,   126,   126,   126,   127,   127,
     127,   128,   128,   128,   129,   129,   129,   130,   130,   130,
     130,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   133,   133,   133,   133,   134,
     135,   135,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   137,   137,   139,   138,
     138,   138,   140,   140,   140,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   142,   142,   142,   142,   142,   142,
     142,   143,   143,   144,   144,   145,   145,   145,   145,   146,
     146,   146,   146,   146,   147,   147,   147,   147,   148,   148,
     148,   149,   149,   149,   149,   149,   149,   149,   150,   150,
     150,   150,   151,   151,   151,   151,   152,   153,   153,   153,
     153,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   159,   160,   160,   160,   161,
     161,   161,   162,   162,   162,   163,   163,   163,   164,   164,
     164,   164,   165,   165,   165,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   168,   168,   168,   168,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   171,   172,   172,   173,   173,
     173,   173,   173,   173,   174,   175,   174,   176,   174,   174,
     174,   174,   177,   177,   177,   178,   178,   179,   179,   180,
     180,   180,   181,   181,   182,   183,   181,   181,   181,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   186,   186,   187,   187,
     189,   190,   188,   191,   188,   192,   192
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     6,     6,     6,     1,     3,     3,
       3,     3,     3,     3,     1,     4,     3,     4,     3,     3,
       2,     2,     6,     7,     4,     4,     4,     1,     3,     3,
       3,     1,     0,     3,     0,     3,     2,     2,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     0,
       4,     0,     4,     0,     4,     3,     3,     3,     3,     1,
       0,     4,     0,     4,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
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
       7,     6,     7,     6,     7,     5,     5,     5,     5,     7,
       7,     7,     7,     7,     6,     7,     7,     7,     6,     7,
       6,     7,     7,     7,     7,     3,     2,     2,     2,     3,
       2,     3,     2,     2,     3,     2,     1,     2,     1,     1,
       0,     0,     6,     0,     4,     1,     2
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
#line 63 "bison.y" /* yacc.c:1646  */
    { 
						
						if(nextToken == IDENTIFIER)
							process_id(); 
						else if (nextToken == '(')
							process_function(); 
						else if (nextToken == '=' || 275 <= nextToken <= 284)
							verify_id_for_Assign();
					}
#line 3377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 77 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 81 "bison.y" /* yacc.c:1646  */
    { process_literal(I_CONSTANT); }
#line 3389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 97 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 105 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 119 "bison.y" /* yacc.c:1646  */
    { call_functionNoParams(); }
#line 3425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 123 "bison.y" /* yacc.c:1646  */
    { save_assign(); eval_unary(); }
#line 3431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 124 "bison.y" /* yacc.c:1646  */
    { save_assign(); eval_unary(); }
#line 3437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 137 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 150 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 151 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 156 "bison.y" /* yacc.c:1646  */
    { save_assign(); }
#line 3473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 156 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 157 "bison.y" /* yacc.c:1646  */
    { save_assign(); }
#line 3485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 157 "bison.y" /* yacc.c:1646  */
    { eval_unary(); }
#line 3491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 187 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 187 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 188 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 188 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 189 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 190 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 191 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 192 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 193 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 198 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 198 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 199 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 199 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 201 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 202 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 204 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 212 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 232 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 233 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 239 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 245 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 251 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 257 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 263 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 269 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 270 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 271 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 276 "bison.y" /* yacc.c:1646  */
    {process_assign();}
#line 3665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 283 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 284 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 285 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 286 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 287 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 288 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 289 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 290 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 291 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 292 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 293 "bison.y" /* yacc.c:1646  */
    {save_assign();}
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 300 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 301 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 309 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 310 "bison.y" /* yacc.c:1646  */
    { declaration_end(); isDeclaration = FALSE; }
#line 3755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 315 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 322 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 324 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 326 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 328 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 330 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 331 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 337 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 341 "bison.y" /* yacc.c:1646  */
    { save_assign(); }
#line 3809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 341 "bison.y" /* yacc.c:1646  */
    { process_assign(); }
#line 3815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 342 "bison.y" /* yacc.c:1646  */
    { initializeID(); }
#line 3821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 343 "bison.y" /* yacc.c:1646  */
    { 
					if(yychar == IDENTIFIER || yychar == I_CONSTANT || yychar == F_CONSTANT)
						yyerrok; 

					yyclearin;  
					clearSemanticRecords(); }
#line 3832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 383 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 384 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 385 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 386 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 406 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 414 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 420 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 421 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 440 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 441 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 449 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 450 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 457 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 459 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 489 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 3922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 507 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 508 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 509 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 513 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 514 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 515 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 516 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 526 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 527 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 541 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 547 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 561 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 568 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 569 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 609 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 610 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 611 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 619 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 620 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 626 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 637 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 638 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 643 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 657 "bison.y" /* yacc.c:1646  */
    { begin_case(); }
#line 4066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 657 "bison.y" /* yacc.c:1646  */
    { /*end_case();*/}
#line 4072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 658 "bison.y" /* yacc.c:1646  */
    { create_default(); }
#line 4078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 658 "bison.y" /* yacc.c:1646  */
    { append_exit(); }
#line 4084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 660 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 661 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 662 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 670 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 687 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 693 "bison.y" /* yacc.c:1646  */
    { start_switch(); }
#line 4120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 693 "bison.y" /* yacc.c:1646  */
    { save_comparator(); }
#line 4126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 693 "bison.y" /* yacc.c:1646  */
    { end_switch(); }
#line 4132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 696 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 697 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 716 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 717 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 718 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 719 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 721 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 722 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 723 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 724 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 725 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 727 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 729 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 730 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 731 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 733 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 734 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 735 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 736 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 737 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 738 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 739 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 748 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 749 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 750 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 751 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 752 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 753 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 767 "bison.y" /* yacc.c:1646  */
    { start_function(); stackPos -= 4; }
#line 4306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 767 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; pushTable(); }
#line 4312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 767 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; }
#line 4318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 772 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE;  start_function(); stackPos -= 4; pushTable(); }
#line 4324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 776 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE;  popTable(); stackPos -= 4;}
#line 4330 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4334 "y.tab.c" /* yacc.c:1646  */
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
#line 784 "bison.y" /* yacc.c:1906  */


#include "semanticActions.c"



