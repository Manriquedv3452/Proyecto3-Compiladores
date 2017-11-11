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
#define CWHT  "\x1B[0m"
#define CWHTN  "\x1B[1m"

#include "semanticActions.h"

void yyerror(const char *);
void yynote(char *noteInfo, int line, int column, int writeCode, int cursorPosi);
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
#define YYLAST   8337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  396
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  682

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
       0,    61,    61,    64,    65,    66,    67,    69,    73,    74,
      75,    79,    83,    84,    88,    89,    90,    94,    95,    97,
     101,   102,   104,   105,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   129,   130,   131,   138,   139,   142,
     143,   147,   148,   149,   150,   151,   152,   153,   161,   162,
     163,   164,   165,   166,   170,   171,   178,   179,   179,   180,
     180,   181,   181,   182,   183,   184,   185,   189,   190,   190,
     191,   191,   193,   194,   196,   200,   201,   202,   203,   204,
     208,   209,   210,   211,   212,   214,   216,   221,   222,   223,
     224,   225,   229,   230,   231,   235,   236,   237,   241,   242,
     243,   247,   248,   249,   253,   254,   255,   259,   260,   261,
     262,   263,   267,   268,   268,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   289,   290,   292,   293,
     297,   301,   302,   303,   305,   307,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   327,   328,   329,
     333,   334,   335,   344,   345,   346,   347,   348,   349,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   372,   373,   374,   375,   376,
     377,   378,   382,   383,   387,   388,   392,   393,   394,   398,
     402,   403,   404,   405,   406,   410,   411,   412,   413,   417,
     418,   419,   427,   428,   429,   430,   431,   432,   433,   438,
     439,   441,   442,   446,   447,   449,   451,   455,   459,   460,
     461,   462,   466,   467,   471,   472,   476,   477,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   499,   500,   501,   505,   506,   507,   508,   513,
     514,   515,   516,   518,   519,   524,   525,   530,   531,   533,
     537,   538,   539,   544,   545,   546,   550,   551,   553,   557,
     558,   560,   561,   565,   566,   567,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   597,   598,   599,
     601,   602,   603,   607,   608,   609,   610,   611,   612,   616,
     618,   622,   623,   627,   628,   629,   630,   634,   635,   639,
     640,   641,   642,   643,   644,   648,   649,   650,   652,   653,
     654,   655,   659,   660,   661,   665,   666,   670,   671,   675,
     676,   678,   682,   683,   684,   684,   684,   687,   688,   698,
     699,   700,   701,   702,   703,   707,   708,   709,   710,   712,
     713,   714,   715,   716,   718,   720,   721,   722,   724,   725,
     726,   727,   728,   729,   730,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   748,   749,   753,   754,
     758,   758,   758,   763,   761,   771,   772
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
  "conditional_expression", "assignment_expression", "$@6",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
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
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "$@7", "$@8",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@9", "$@10", "$@11",
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

#define YYPACT_NINF -439

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-439)))

#define YYTABLE_NINF -394

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7853,  8020,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,     9,    45,    47,  -439,
      64,  -439,  -439,    81,  3582,  3653,  -439,    58,  -439,  -439,
    3724,  3795,  3866,  -439,  7798,  -439,  -439,  -439,     5,    35,
    4904,  8232,  5172,    78,  -439,   131,   279,  -439,    25,  -439,
    3937,   -58,   112,  -439,  -439,  8075,  3369,  8075,  -439,  -439,
    -439,  -439,  -439,    35,  -439,    88,   246,  -439,  7302,  -439,
    -439,  -439,  -439,  -439,  6904,  6992,  6992,  -439,    95,   129,
    4904,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,   422,  -439,  7014,  -439,   896,  1284,  1381,  2254,  2642,
     166,   184,   196,   281,  2836,  -439,   245,   494,   144,  4460,
     255,   271,   256,   282,  -439,   213,   313,  -439,  -439,  -439,
     481,   285,   131,  -439,  -439,  6728,  7853,   297,  7632,  6244,
     -58,  8266,  7357,  -439,   178,  -439,  8075,  8075,  7412,   247,
    7014,  5262,    35,    59,  -439,  7137,  6332,  -439,     3,  -439,
      42,  4904,  -439,  4904,  -439,  -439,  8232,  5284,   584,  -439,
    -439,    48,   258,   392,  -439,  -439,  6750,  7014,   400,  -439,
    7014,  5306,  5396,  5418,  7014,  5440,  5530,  7014,  7014,  5552,
    7014,  7014,  7014,  5574,  7014,  7014,  7014,  5664,  5686,  5708,
    5798,  5820,  7014,  5842,  5932,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,   399,   401,  -439,  -439,  -439,  -439,  -439,  -439,
       8,  5038,  -439,  -439,  -439,    81,  7577,  3023,  -439,  7687,
    -439,  -439,   229,   277,   161,  -439,   300,  4994,  -439,   325,
     335,  6354,  -439,  -439,  7014,  -439,    97,  -439,   340,  7467,
    7522,  3440,  -439,    35,   257,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,   343,   344,  6508,  -439,   341,   355,
    6376,    42,  7742,  6464,   319,   332,   368,   369,   370,   671,
    7014,  -439,  5954,   371,  6772,  -439,  -439,   305,  -439,   111,
    -439,  -439,  -439,  7014,  -439,  7014,  -439,  7014,   993,  -439,
    7014,  -439,  7014,  1478,  1575,  -439,  1672,  1769,  1866,  1963,
    -439,  2060,  2157,  2351,  2448,  -439,  2545,  -439,  2739,  -439,
     166,  -439,   184,  -439,   196,   224,  -439,   281,   380,   260,
     374,   383,    -9,  5976,   461,  -439,   262,  6728,   113,  -439,
    -439,   297,   386,  6066,   390,   261,  -439,   273,  3992,   275,
     116,    12,    53,  4516,  -439,  -439,    98,  -439,  -439,  -439,
    -439,  3113,  -439,  -439,  -439,  -439,  -439,  -439,  7082,  -439,
     205,  -439,  -439,  -439,  7908,  7964,   468,  -439,   471,  6860,
     394,  5016,  -439,  -439,  7014,  -439,   398,   408,  -439,   250,
     212,  -439,  7014,  -439,  3511,  -439,  -439,  -439,  -439,   410,
    6508,  -439,  -439,  7014,  -439,   413,  -439,   404,  6508,  -439,
     415,   418,  6486,   420,   420,  -439,  8130,  8164,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  7014,
    -439,  -439,  -439,  -439,  6640,  -439,  7014,  -439,  6088,  7014,
    -439,  -439,  -439,  -439,  1090,  1187,  7014,  7014,  7014,  7014,
    7014,   406,   407,   423,  -439,   427,    73,  -439,  6640,  6596,
    -439,  -439,  -439,  -439,  -439,  -439,  4036,   430,   431,  4126,
    7014,  7014,   440,  7014,  6110,   456,   466,  7853,  3203,  -439,
      54,  -439,  -439,  -439,  -439,  -439,  -439,   104,  7014,  -439,
     789,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
     442,  -439,   448,   449,   450,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,   469,   474,  -439,  -439,   476,  6508,  -439,  -439,
    7014,  -439,   477,   167,   219,  -439,   483,  7247,   315,  -439,
     288,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  6728,  -439,  -439,  6728,  -439,
    -439,  4702,  4169,  -439,  -439,  2933,   309,  7014,   311,   486,
     346,   492,   293,  4792,  3293,  4547,  4569,  -439,  -439,  7014,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,   488,   495,
    -439,  7014,  6200,  -439,  8198,  7014,  -439,  -439,  6640,  6618,
    -439,  -439,  -439,  -439,  -439,  -439,  7014,  4702,   352,  4702,
    4702,  4702,  4259,  7014,  7014,  6222,  7014,   498,  7014,  5128,
    6882,  5150,  -439,  -439,  -439,  -439,  -439,  7192,  -439,  -439,
    -439,   517,  -439,  -439,  -439,   504,  -439,  -439,  -439,   361,
     363,   506,   366,   372,  4702,   375,   507,  4702,   378,  4702,
     384,  4659,  4702,   389,  4702,  4702,   487,   489,   490,  4814,
      71,  4702,  -439,  4702,  4702,  -439,  4702,  4302,  -439,  4702,
    4702,  -439,  -439,  4392,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   174,   153,   154,   155,   157,   158,   222,   218,
     219,   220,   168,   160,   161,   162,   163,   166,   167,   164,
     165,   159,   169,   170,   182,   183,     0,     0,   221,   223,
       0,   156,   389,     0,     0,     0,   172,     0,   173,   171,
       0,     0,     0,   133,     0,   386,   388,   146,   206,     0,
       0,     0,     0,     0,   228,     0,     0,   131,     0,   147,
       0,   227,     0,   136,   138,     0,     0,     0,   140,   142,
     144,     1,   387,     0,    11,     0,     0,   209,     0,     2,
       8,     9,    12,    13,     0,     0,     0,    10,     0,     0,
       0,    48,    49,    50,    51,    52,    53,    24,     3,     4,
       6,    41,    54,     0,    56,     0,     0,     0,     0,     0,
      95,    98,   101,   104,     0,   130,     0,     0,     0,     0,
       0,     0,     0,     0,   134,     0,   254,   221,   255,   251,
     250,   135,     0,   132,   152,     0,     0,     0,     0,     0,
     226,     0,     0,   184,     0,   188,     0,     0,     0,     0,
       0,     0,   208,     0,   202,     0,     0,   194,   274,   271,
     275,     0,    45,     0,    42,    43,     0,     0,    54,   112,
     126,     0,     0,     0,    30,    31,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   190,   272,   269,   192,
     224,   217,     0,     0,   242,   229,   253,   256,   249,   148,
       0,     0,   299,   150,   395,     0,     0,     0,   394,     0,
     266,   240,   265,     0,     0,   260,     0,     0,   230,    49,
       0,     0,   178,   185,     0,   186,     0,   195,   201,     0,
       0,     0,   175,   207,     0,   204,   216,   215,   213,   212,
     211,   203,   210,   293,     0,     0,     0,   277,    49,     0,
       0,   273,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     5,     0,     0,     0,    29,    26,     0,    37,     0,
      28,    66,    63,     0,    64,     0,    65,     0,     0,    72,
       0,    73,     0,     0,     0,    78,     0,     0,     0,     0,
      86,     0,     0,     0,     0,    90,     0,    94,     0,    97,
      96,   100,    99,   103,   102,     0,   106,   105,     0,     0,
       0,     0,     0,     0,     0,   304,     0,     0,     0,   311,
     396,     0,     2,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,     0,   332,   339,     0,   337,   338,   319,
     320,     0,   335,   321,   322,   323,   324,   247,     0,   263,
     274,   264,   246,   239,     0,     0,   248,   241,     0,     0,
       0,     0,   231,   238,     0,   237,    49,     0,   199,   189,
       0,   187,     0,   180,     0,   176,   205,   294,   276,     0,
       0,   278,   284,     0,   283,     0,   295,     0,     0,   285,
      49,     0,     0,    46,     0,    47,     0,     0,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   115,     0,
     129,   128,   127,    36,     0,    55,    34,    27,     0,    35,
      25,    58,    60,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   300,     0,     0,   314,   302,     0,
     297,   303,   310,   309,   312,   392,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   385,
       0,   383,   376,   382,   377,   380,   378,     0,   341,   340,
       0,   333,   336,   259,   262,   257,   261,   268,   267,   245,
       0,   233,     0,     0,     0,   234,   236,   198,   197,   196,
     200,   280,     0,     0,   282,   296,     0,     0,   286,   292,
       0,   291,     0,     0,     0,    17,     0,     0,     0,   114,
       0,    40,    39,    38,   111,   109,   110,   108,   318,   317,
     301,   315,   316,   313,   307,     0,   298,   306,     0,   328,
     325,     0,     0,   331,   327,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   384,   375,   381,
     379,   243,   244,   232,   235,   279,   281,   288,     0,     0,
     289,     0,     0,    15,     0,     0,    16,    14,     0,     0,
      32,   308,   305,   329,   330,   326,   348,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   287,   290,    23,    22,    21,     0,    18,    20,
      33,   343,   345,   358,   355,   126,   357,   356,   349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   364,     0,     0,   353,     0,     0,   368,     0,
       0,   370,   351,     0,   342,   346,   359,   363,   360,   362,
     361,   350,   374,   369,   371,   373,   372,   354,   365,   366,
     367,   352
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -439,  -439,  -439,  -439,  -439,  -439,   168,     6,  -439,  -439,
     475,  -439,   -53,  -165,  -439,  -439,  -439,  -136,  -439,  -439,
     294,    72,   393,   395,   396,   391,   411,  -439,   -22,    34,
    -439,  -439,    41,   -50,  -133,    36,  -439,   463,  -439,    23,
    -439,  -439,   -38,  -117,   -51,  -439,  -225,  -439,   524,  -107,
    -439,     0,  -439,  -439,   -16,   -57,   -45,  -124,  -128,  -439,
      27,  -439,    -3,  -112,  -151,  -131,   165,  -438,  -439,   263,
      37,    87,  -439,  -129,  -439,   241,  -330,  -439,  -439,  -439,
    -439,  -439,  -439,   573,  -439,  -439,  -439,  -439,  -439
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    97,    98,    75,    99,   100,   524,   525,   101,   287,
     168,   103,   104,   105,   293,   295,   297,   106,   300,   302,
     107,   108,   109,   110,   111,   112,   113,   114,   169,   170,
     279,   429,   356,   116,    32,   225,    58,    59,    34,   117,
      36,    37,   142,   143,   118,   246,   247,    38,    76,    77,
      39,   119,    41,    42,   248,    61,    62,   130,   264,   234,
     235,   236,   526,   159,   160,   335,   336,   337,   338,   339,
      43,   358,   359,   360,   361,   362,   363,   364,   472,   645,
     365,   366,    44,    45,    46,   136,   341,   137,   226
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    40,   123,   224,   223,   140,   208,   271,   228,   134,
     233,   129,    48,   481,   144,   241,   144,    60,   138,   298,
     545,   548,   139,    35,    35,   243,   131,   157,   115,   148,
     115,   243,   270,   158,    40,    40,    33,    47,    74,   125,
      40,    40,    40,   265,    40,   259,   262,   120,   121,   280,
     179,   303,   304,   306,   483,   567,   128,    35,    35,    65,
     260,    66,    74,    35,    35,    35,   206,    35,   209,   453,
      63,    64,   670,   158,   542,   454,    68,    69,    70,   155,
      33,   216,    53,   156,    54,   218,  -151,   172,    73,   150,
     157,   144,    49,   340,   357,   144,   144,   144,   389,   488,
     256,   258,   145,   132,   145,   569,   135,  -151,   249,   250,
     158,   482,   439,   381,   462,    54,   220,   479,   272,   480,
     371,    50,   273,    51,   133,   281,   282,   291,   115,   115,
     217,   171,   243,   243,    54,   444,    40,   445,    40,   128,
      52,    67,   400,   261,   407,   207,   259,   262,   566,   412,
     545,   548,   484,   568,   543,    40,   128,    55,   274,    35,
     275,    35,   374,   276,   507,   509,  -214,    56,   581,   222,
     671,   166,  -214,   240,   232,   390,   282,   124,    35,   145,
      57,    54,   282,   145,   145,   145,   151,   370,    55,   282,
     269,   232,   440,   333,   388,   334,   391,   489,   144,   144,
     157,   278,   171,   570,   171,   167,   461,    55,    54,   220,
     288,   463,   465,   508,   214,    54,   369,    56,   289,   271,
     155,  -270,   115,  -270,   156,   446,    40,    40,   357,    40,
      56,   435,    54,   606,   607,   609,   611,   128,  -258,   375,
     441,   217,   442,   325,   443,   329,   582,   152,   253,    35,
      35,   198,    35,    54,    55,   222,   265,   244,   260,   283,
      74,   449,   470,   458,    56,    47,   128,   313,   314,   316,
     217,   380,    40,   128,   473,   387,   477,   245,   372,   199,
     126,   368,  -252,   456,   517,   156,   145,   145,    55,   588,
     215,   244,   200,   468,   604,    35,   583,   584,    56,   201,
     399,   376,   282,   447,   405,   368,   436,   411,   232,   156,
     596,   115,   446,   140,   430,    56,   432,     9,    10,    11,
     283,   115,   205,   370,   153,   254,    55,   544,   547,   244,
     154,   255,   210,   283,   212,   284,    56,   471,   282,   450,
     459,   396,   510,   157,   563,   565,   460,   601,   211,   474,
     127,   478,   125,   446,   373,  -252,  -252,  -252,  -252,  -252,
     213,    40,   446,  -149,   446,    56,   589,   649,    40,   605,
     115,   222,   590,   446,    40,    40,   446,   377,   378,   656,
     227,   217,   437,   438,    35,   446,   597,   282,   599,   282,
     446,    35,   587,   584,   487,   285,   413,    35,    35,    56,
     217,   494,   496,   290,   232,   330,   382,   331,   128,   414,
     232,   232,   217,   500,   591,   503,   383,   592,   504,   392,
     397,   398,   401,   602,   282,   534,   535,   536,   537,   622,
     282,   173,   174,   175,   512,   476,   402,   513,   646,   282,
     647,   282,   516,   650,   282,   415,   522,   416,   417,   651,
     282,   451,   653,   282,   433,   657,   282,   544,   547,   448,
     452,   659,   282,   529,   457,   466,   663,   282,   222,   469,
     531,   497,   533,   430,   498,   501,   157,    40,    40,   505,
     430,   515,   158,   430,   307,   308,   309,   311,   312,   506,
      40,   511,   222,   222,   514,   141,   518,  -191,   176,   519,
      35,    35,   177,   434,   178,   538,   539,   540,   541,   551,
     552,   555,   556,    35,   558,   560,   557,   217,   561,     9,
      10,    11,   430,   571,     2,   102,    47,   102,   562,   572,
     573,   574,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     575,   578,   127,   550,   579,   576,   554,   577,   580,   162,
     164,   165,   585,   600,    40,    28,   157,    56,   603,   612,
    -191,  -191,   158,  -191,  -191,   634,   613,   644,   102,   222,
    -191,  -129,   222,   648,   654,   528,   666,    35,   667,   668,
     618,   318,   324,  -191,   320,   219,   322,   149,   598,   530,
      47,   464,   492,   430,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,   327,   614,   616,    72,     0,   619,
       0,     0,   222,   222,     0,   102,   102,     0,     0,     0,
     430,     0,     0,     0,     0,   625,     0,     0,   593,   595,
       0,     0,     0,     0,   629,   630,   632,   633,     0,   635,
     638,   640,   643,     0,     0,   102,     0,     0,     0,   102,
       0,     0,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,     0,   102,     0,
       0,     0,  -113,   430,   621,     0,   623,   624,   626,   628,
     625,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,   652,     0,     0,   655,     0,   658,     0,   661,   662,
       0,   664,   665,     0,     0,     0,     0,     0,   672,     0,
     673,   674,     0,   675,   677,     0,   678,   679,     0,     0,
     681,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,     0,     0,     0,     0,     0,     0,   102,   428,
     102,     0,   102,     0,     0,   102,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -334,
       1,     0,  -334,  -334,  -334,  -334,  -334,  -334,     0,  -334,
    -334,     0,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,     2,
    -334,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,    27,  -334,
      28,  -334,    29,  -334,    31,  -334,     0,   102,     0,     0,
       0,     0,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
       0,     0,     0,     0,     0,     0,     0,     0,  -334,     0,
       0,     0,     0,     0,     0,     0,     0,   180,     0,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,   102,   102,     0,   102,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,     0,   -67,
     -67,   -67,   181,   -67,   -67,   -67,   -67,   182,   183,   -67,
     -67,   -67,   -67,   -67,   180,   -67,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,     0,   -74,   -74,   -74,   181,
     -74,   -74,   -74,   -74,   182,   183,   -74,   -74,   -74,   -74,
     -74,   180,   -74,   -69,   -69,   -69,   -69,   -69,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -69,     0,   -69,   -69,   -69,   181,   -69,   -69,   -69,
     -69,   182,   183,   -69,   -69,   -69,   -69,   -69,   180,   -69,
     -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,     0,
     -71,   -71,   -71,   181,   -71,   -71,   -71,   -71,   182,   183,
     -71,   -71,   -71,   -71,   -71,   184,   -71,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,     0,   -75,   -75,   -75,
     -75,   185,   186,   -75,   -75,     0,     0,   -75,   -75,   -75,
     -75,   -75,   187,   -75,   -80,   -80,   -80,   -80,   -80,   -80,
       0,   -80,   -80,   188,   189,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,   -80,   -80,   -80,   -80,   -80,   184,
     -80,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,
       0,   -79,   -79,   -79,   -79,   185,   186,   -79,   -79,     0,
       0,   -79,   -79,   -79,   -79,   -79,   184,   -79,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,   -76,     0,   -76,   -76,
     -76,   -76,   185,   186,   -76,   -76,     0,     0,   -76,   -76,
     -76,   -76,   -76,   184,   -76,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,     0,   -77,   -77,   -77,   -77,   185,
     186,   -77,   -77,     0,     0,   -77,   -77,   -77,   -77,   -77,
     187,   -77,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   188,   189,   -85,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,     0,   -85,   -85,   -85,   -85,   -85,   187,   -85,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   188,   189,
     -83,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,     0,   -83,
     -83,   -83,   -83,   -83,   187,   -83,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   188,   189,   -84,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,     0,   -84,   -84,   -84,   -84,
     -84,   187,   -84,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   188,   189,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,   -81,   -81,   -81,   -81,   -81,   187,   -81,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,   188,
     189,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,     0,
     -82,   -82,   -82,   -82,   -82,   190,   -82,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -87,   -87,     0,     0,   191,   192,
     -87,   -87,   -87,   -87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,     0,   193,   194,   -87,
     -87,   -87,   190,   -87,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,     0,     0,   191,   192,   -91,   -91,   -91,
     -91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,     0,     0,   193,   194,   -91,   -91,   -91,   190,
     -91,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   -88,
       0,     0,   191,   192,   -88,   -88,   -88,   -88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,   193,   194,   -88,   -88,   -88,   190,   -88,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -89,   -89,     0,     0,   191,
     192,   -89,   -89,   -89,   -89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,     0,   193,   194,
     -89,   -89,   -89,   195,   -89,   -92,   -92,   -92,   -92,   -92,
     -92,     0,   -92,   -92,     0,     0,     0,     0,   196,   197,
     -92,   -92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,     0,   -92,     0,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,     0,     0,     0,     0,   -92,   -92,   -92,
     195,   -92,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,
     -93,     0,     0,     0,     0,   196,   197,   -93,   -93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,     0,
     -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
       0,     0,     0,     0,   -93,   -93,   -93,   202,   -93,  -107,
    -107,  -107,  -107,  -107,  -107,     0,  -107,  -107,     0,     0,
       0,     0,     0,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,     0,  -107,     0,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,     0,     0,     0,
       0,     0,     0,   204,   446,  -107,  -347,  -347,  -347,  -347,
    -347,  -347,     0,  -347,  -347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,     0,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
       0,   282,     0,     0,     0,     0,  -347,  -347,  -347,  -347,
    -347,  -347,  -347,  -347,     1,     0,   342,    80,    81,    82,
      83,    84,  -347,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    87,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     343,   344,   345,     0,   346,   347,   348,   349,   350,   351,
     352,   353,    27,    88,    28,    89,    29,    30,    31,    90,
       0,     0,     0,     0,     0,     0,   227,   354,    91,    92,
      93,    94,    95,    96,   490,     0,   342,    80,    81,    82,
      83,    84,   355,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    87,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     343,   344,   345,     0,   346,   347,   348,   349,   350,   351,
     352,   353,    27,    88,    28,    89,    29,    30,    31,    90,
       0,     0,     0,     0,     0,     0,   227,   491,    91,    92,
      93,    94,    95,    96,   564,     0,    79,    80,    81,    82,
      83,    84,   355,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    87,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    88,    28,    89,    29,    30,    31,    90,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     1,     0,    79,    80,    81,    82,
      83,    84,   355,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    87,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    88,    28,    89,    29,     0,    31,    90,
     146,     0,  -177,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   355,     0,     0,     0,     0,     0,     0,  -177,
       0,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -177,     0,
    -177,   141,  -177,  -181,  -177,  -177,  -177,  -177,  -177,  -177,
       0,     0,   147,     0,     0,  -177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -177,     0,
       2,     0,  -181,  -181,  -181,  -181,  -181,  -181,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -181,
       0,    28,   141,  -181,  -179,  -181,  -181,  -181,  -181,  -181,
    -181,     0,     0,     0,     0,     0,  -181,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -181,
       0,     2,     0,  -179,  -179,  -179,  -179,  -179,  -179,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -179,     0,    28,     1,  -179,  -137,  -179,  -179,  -179,  -179,
    -179,  -179,     0,     0,     0,     0,     0,  -179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -179,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     1,    29,  -139,    31,  -137,  -137,
    -137,     0,  -137,     0,     0,     0,     0,     0,  -137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -137,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     1,    29,  -141,    31,  -139,
    -139,  -139,     0,  -139,     0,     0,     0,     0,     0,  -139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -139,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     1,    29,  -143,    31,
    -141,  -141,  -141,     0,  -141,     0,     0,     0,     0,     0,
    -141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -141,     0,     2,     0,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     1,    29,  -145,
      31,  -143,  -143,  -143,     0,  -143,     0,     0,     0,     0,
       0,  -143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -143,     0,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,   134,    29,
       0,    31,  -145,  -145,  -145,     0,  -145,     0,     0,     0,
       0,     0,  -145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -145,     0,  -390,     0,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,   475,     0,   342,    80,    81,    82,    83,
      84,     0,    85,    86,     0,     0,  -390,     0,  -390,     0,
    -390,  -390,  -390,     0,     0,  -151,     0,     0,     0,     0,
    -393,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,  -151,   549,     0,   342,
      80,    81,    82,    83,    84,     0,    85,    86,     0,   343,
     344,   345,     0,   346,   347,   348,   349,   350,   351,   352,
     353,     0,    88,     0,    89,     0,     0,    87,    90,     0,
       0,     0,     0,     0,     0,   227,     0,    91,    92,    93,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,   355,     0,   343,   344,   345,     0,   346,   347,   348,
     349,   350,   351,   352,   353,     0,    88,     0,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,   227,
       0,    91,    92,    93,    94,    95,    96,   553,     0,   342,
      80,    81,    82,    83,    84,   355,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     594,     0,   342,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,   343,   344,   345,     0,   346,   347,   348,
     349,   350,   351,   352,   353,     0,    88,     0,    89,     0,
      87,     0,    90,     0,     0,     0,     0,     0,     0,   227,
       0,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,   355,   343,   344,   345,     0,
     346,   347,   348,   349,   350,   351,   352,   353,     0,    88,
       0,    89,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,   227,     0,    91,    92,    93,    94,    95,    96,
     627,     0,   342,    80,    81,    82,    83,    84,   355,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   676,     0,   342,    80,    81,    82,    83,
      84,     0,    85,    86,     0,     0,   343,   344,   345,     0,
     346,   347,   348,   349,   350,   351,   352,   353,     0,    88,
       0,    89,     0,    87,     0,    90,     0,     0,     0,     0,
       0,     0,   227,     0,    91,    92,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,   355,   343,
     344,   345,     0,   346,   347,   348,   349,   350,   351,   352,
     353,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,   227,     0,    91,    92,    93,
      94,    95,    96,   680,     0,   342,    80,    81,    82,    83,
      84,   355,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
     344,   345,     0,   346,   347,   348,   349,   350,   351,   352,
     353,   141,    88,  -193,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,   227,     0,    91,    92,    93,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       2,   355,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,   485,     0,    79,
      80,    81,    82,    83,    84,     0,    85,    86,     0,     0,
       0,    28,     0,     0,     0,     0,  -193,  -193,     0,  -193,
    -193,     0,     0,     0,     0,     0,  -193,    87,   608,     0,
      79,    80,    81,    82,    83,    84,     0,    85,    86,  -193,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     610,     0,    79,    80,    81,    82,    83,    84,    87,    85,
      86,     0,     0,     0,     0,     0,    88,     0,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
      87,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,   486,     0,    88,     0,    89,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,    88,
       0,    89,     0,     0,     0,    90,   355,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,     0,   342,    80,    81,    82,    83,    84,   355,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   342,    80,    81,    82,    83,
      84,     0,    85,    86,     0,     0,   343,   344,   345,     0,
     346,   347,   348,   349,   350,   351,   352,   353,     0,    88,
       0,    89,     0,    87,     0,    90,   660,     0,     0,     0,
       0,     0,   227,     0,    91,    92,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,   355,   343,
     344,   345,     0,   346,   347,   348,   349,   350,   351,   352,
     353,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,   227,     0,    91,    92,    93,
      94,    95,    96,     0,     0,    79,    80,    81,    82,    83,
      84,   355,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,    88,     0,    89,     0,     0,     0,
      90,   355,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,    78,     0,    79,    80,    81,
      82,    83,    84,   669,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    87,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    28,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,   379,     0,    79,    80,    81,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   502,     0,    79,
      80,    81,    82,    83,    84,    87,    85,    86,     0,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,   332,
       0,    79,    80,    81,    82,    83,    84,    87,    85,    86,
       0,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,    88,   127,    89,     0,     0,    87,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,     0,    88,   127,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     0,    88,     0,
      89,     0,     0,     0,    90,     0,     0,     0,   333,     0,
     334,   221,     0,    91,    92,    93,    94,    95,    96,   636,
       0,    79,    80,    81,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   641,     0,    79,    80,    81,    82,    83,    84,    87,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,    79,    80,    81,    82,    83,
      84,    87,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
      89,     0,     0,    87,    90,   637,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,    96,     0,
      88,     0,    89,     0,     0,     0,    90,   642,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
      96,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,   257,     0,    79,    80,    81,    82,    83,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   277,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   292,     0,   -57,
     -57,   -57,   -57,   -57,   -57,    87,   -57,   -57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,    89,     0,     0,   -57,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,    88,     0,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,     0,   -57,     0,   -57,     0,
       0,     0,   -57,     0,     0,     0,     0,     0,     0,     0,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   294,     0,   -59,
     -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   296,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -59,   -61,   -61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   299,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -61,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -59,     0,   -59,     0,
       0,   -68,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -61,     0,
     -61,     0,     0,     0,   -61,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     -68,     0,   -68,     0,     0,     0,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   301,     0,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   305,     0,    79,    80,    81,    82,    83,
      84,   -70,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   310,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,   -70,     0,     0,    87,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,    88,     0,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,   315,     0,    79,    80,    81,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   317,     0,    79,
      80,    81,    82,    83,    84,    87,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   319,
       0,    79,    80,    81,    82,    83,    84,    87,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,    89,     0,     0,    87,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,     0,    88,     0,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     0,    88,     0,
      89,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,    96,   321,
       0,    79,    80,    81,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   323,     0,    79,    80,    81,    82,    83,    84,    87,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   326,     0,    79,    80,    81,    82,    83,
      84,    87,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
      89,     0,     0,    87,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,    96,     0,
      88,     0,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
      96,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,   328,     0,    79,    80,    81,    82,    83,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   431,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   455,     0,    79,
      80,    81,    82,    83,    84,    87,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,    89,     0,     0,    87,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,    88,     0,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,     0,    88,     0,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,   467,     0,    79,
      80,    81,    82,    83,    84,     0,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   532,
       0,    79,    80,    81,    82,    83,    84,    87,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   559,     0,    79,    80,    81,    82,    83,    84,    87,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,    89,     0,
       0,    87,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     0,    88,     0,
      89,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,    96,     0,
      88,     0,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
      96,   615,     0,    79,    80,    81,    82,    83,    84,     0,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   631,     0,    79,    80,    81,    82,    83,
      84,    87,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,    89,     0,     0,    87,    90,     0,   237,     0,
       0,     0,     9,    10,    11,    91,    92,    93,    94,    95,
      96,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,    88,   127,    89,     0,     0,     0,
      90,     0,     0,     0,     0,   238,     0,     0,     0,    91,
     239,    93,    94,    95,    96,    79,    80,    81,    82,    83,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,   266,     0,     0,     0,
       9,    10,    11,     0,     0,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    87,    85,    86,   384,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,    88,   127,    89,     0,     0,    87,    90,     0,
     403,     0,     0,   267,     9,    10,    11,    91,   268,    93,
      94,    95,    96,     0,    88,   127,    89,     0,     0,     0,
      90,     0,     0,     0,     0,   385,     0,     0,     0,    91,
     386,    93,    94,    95,    96,     0,    88,   127,    89,     0,
       0,     0,    90,     0,     0,     0,     0,   404,     0,     0,
       0,    91,    92,    93,    94,    95,    96,    79,    80,    81,
      82,    83,    84,     0,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    87,    85,    86,   408,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    87,    85,    86,
     520,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,    88,   127,    89,     0,     0,    87,
      90,     0,     0,     0,     0,   409,     9,    10,    11,    91,
     410,    93,    94,    95,    96,     0,    88,   127,    89,     0,
       0,     0,    90,     0,     0,     0,     0,   521,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     0,    88,   127,
      89,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,    96,    79,
      80,    81,    82,    83,    84,     0,    85,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    87,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    87,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,    89,     0,
       0,    87,    90,     0,     0,     0,   333,     0,   334,   221,
     546,    91,    92,    93,    94,    95,    96,     0,    88,     0,
      89,     0,     0,     0,    90,     0,     0,     0,   333,     0,
     334,   221,   620,    91,    92,    93,    94,    95,    96,     0,
      88,     0,    89,     0,     0,     0,    90,     0,     0,     0,
     333,     0,   334,   221,     0,    91,    92,    93,    94,    95,
      96,    79,    80,    81,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    87,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      84,    87,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
      89,     0,     0,    87,    90,     0,     0,     0,     0,     0,
       0,   221,     0,    91,    92,    93,    94,    95,    96,     0,
      88,     0,    89,     0,     0,     0,    90,   286,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
      96,     0,    88,     0,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,   434,     0,    91,    92,    93,
      94,    95,    96,    79,    80,    81,    82,    83,    84,     0,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      84,    87,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,    89,     0,     0,    87,    90,     0,     0,     0,
       0,   499,     0,     0,     0,    91,    92,    93,    94,    95,
      96,     0,    88,     0,    89,     0,     0,     0,    90,   639,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,    88,     0,    89,     0,     0,     0,
     161,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,    79,    80,    81,    82,    83,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,    87,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,    89,     0,     0,     0,   163,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     1,    88,    54,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,   368,   263,
       0,     0,   156,     0,     0,     0,     0,     2,    56,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,   155,   263,     0,     0,   156,     0,     0,
       0,     0,     2,    56,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,   155,   -19,
     -19,     0,   156,     0,     0,     0,     0,     2,    56,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,   155,   586,     0,     0,   156,     0,     0,
       0,     0,     2,    56,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,   155,     0,
       0,     0,   156,     0,     0,     0,     0,     2,    56,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     2,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   252,     2,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   394,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   393,     2,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   229,     0,   230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
    -391,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,     0,   231,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,     0,    31,     0,   367,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    71,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,     0,    31,     0,   406,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,    29,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   493,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     495,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,   527,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,   523,     0,
       0,     0,     0,     0,     2,     0,     0,     0,     0,   617,
       0,    28,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,   523,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,    78,     0,    28,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,   523,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   141,     0,    28,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     0,    28,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28
};

static const yytype_int16 yycheck[] =
{
       0,     1,    52,   136,   135,    62,   118,   158,   137,     1,
     138,    56,     3,     1,    65,   139,    67,    33,    76,   184,
     458,   459,    80,     0,     1,   142,     1,    78,    50,    67,
      52,   148,   156,    78,    34,    35,     0,     1,     3,    55,
      40,    41,    42,   155,    44,   152,   153,    50,    51,     1,
     103,   187,   188,   189,     1,     1,    56,    34,    35,     1,
       1,     3,     3,    40,    41,    42,   117,    44,   119,    78,
      34,    35,     1,   118,     1,    84,    40,    41,    42,    76,
      44,   126,     1,    80,     3,   130,    78,    90,    83,     1,
     141,   142,    83,   226,   227,   146,   147,   148,     1,     1,
     150,   151,    65,    78,    67,     1,    98,    99,   146,   147,
     155,    99,     1,   237,     1,     3,   132,     1,    76,     3,
     232,    76,    80,    76,    99,    77,    78,   180,   150,   151,
     130,    90,   249,   250,     3,   300,   136,   302,   138,   139,
      76,    83,   266,    84,   272,     1,   253,   254,   478,   273,
     588,   589,    99,    99,    81,   155,   156,    76,   161,   136,
     163,   138,     1,   166,   389,   390,    78,    86,     1,   135,
      99,    76,    84,   139,   138,    78,    78,    99,   155,   142,
      99,     3,    78,   146,   147,   148,    98,   232,    76,    78,
     156,   155,    81,    80,   244,    82,    99,    99,   249,   250,
     251,   167,   161,    99,   163,    76,   337,    76,     3,   225,
     176,    98,   341,     1,     1,     3,   232,    86,   177,   370,
      76,    77,   244,    79,    80,     1,   226,   227,   361,   229,
      86,   284,     3,   563,   564,   565,   566,   237,    77,    78,
     293,   241,   295,   202,   297,   204,    79,     1,     1,   226,
     227,    85,   229,     3,    76,   221,   368,    79,     1,     1,
       3,     1,     1,     1,    86,   229,   266,   195,   196,   197,
     270,   237,   272,   273,     1,   241,     1,    99,     1,    95,
       1,    76,     3,   333,   408,    80,   249,   250,    76,     1,
      77,    79,    96,   343,     1,   272,    77,    78,    86,    18,
     266,     1,    78,    79,   270,    76,     1,   273,   272,    80,
       1,   333,     1,   370,   280,    86,   282,    38,    39,    40,
       1,   343,    77,   368,    78,    78,    76,   458,   459,    79,
      84,    84,    77,     1,    78,    77,    86,    76,    78,    79,
      78,    84,   392,   394,   477,   478,    84,     1,    77,    76,
      71,    76,   368,     1,    77,    76,    77,    78,    79,    80,
      78,   361,     1,    78,     1,    86,    78,     1,   368,    76,
     392,   337,    84,     1,   374,   375,     1,    77,    78,     1,
      83,   381,    77,    78,   361,     1,    77,    78,    77,    78,
       1,   368,    77,    78,   353,     3,    77,   374,   375,    86,
     400,   374,   375,     3,   368,     6,    81,     6,   408,    77,
     374,   375,   412,   379,   545,   381,    81,   548,   384,    79,
      77,    77,    81,    77,    78,   447,   448,   449,   450,    77,
      78,     9,    10,    11,   400,   348,    81,   403,    77,    78,
      77,    78,   408,    77,    78,    77,   412,    78,    78,    77,
      78,    77,    77,    78,    83,    77,    78,   588,   589,    79,
      77,    77,    78,   429,     3,    79,    77,    78,   434,    79,
     436,     3,   438,   439,     3,    81,   527,   477,   478,    81,
     446,    77,   527,   449,   190,   191,   192,   193,   194,    81,
     490,    81,   458,   459,    81,     1,    81,     3,    76,    81,
     477,   478,    80,    83,    82,    99,    99,    84,    81,    79,
      79,   470,   471,   490,   473,   474,    76,   517,    62,    38,
      39,    40,   488,    81,    30,    50,   490,    52,    62,    81,
      81,    81,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      81,   517,    71,   466,   520,    81,   469,    81,    81,    84,
      85,    86,    79,    77,   564,    71,   617,    86,    76,    81,
      76,    77,   617,    79,    80,    77,    81,    60,   103,   545,
      86,    77,   548,    77,    77,   417,    99,   564,    99,    99,
     584,   198,   201,    99,   199,   132,   200,    73,   557,   434,
     564,   338,   361,   569,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   203,   581,   582,    44,    -1,   585,
      -1,    -1,   588,   589,    -1,   150,   151,    -1,    -1,    -1,
     596,    -1,    -1,    -1,    -1,   601,    -1,    -1,   551,   552,
      -1,    -1,    -1,    -1,   603,   604,   605,   606,    -1,   608,
     609,   610,   611,    -1,    -1,   180,    -1,    -1,    -1,   184,
      -1,    -1,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,    -1,   203,    -1,
      -1,    -1,    98,   649,   597,    -1,   599,   600,   601,   602,
     656,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,
      -1,   634,    -1,    -1,   637,    -1,   639,    -1,   641,   642,
      -1,   644,   645,    -1,    -1,    -1,    -1,    -1,   651,    -1,
     653,   654,    -1,   656,   657,    -1,   659,   660,    -1,    -1,
     663,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    98,
     295,    -1,   297,    -1,    -1,   300,    -1,   302,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,   392,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,   447,   448,    -1,   450,    30,    31,    32,    33,
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
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    97,     1,    99,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    78,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     1,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    76,
       1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,     1,    73,     3,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,     1,    73,     3,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,     1,    73,     3,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,     1,    73,     3,    75,    76,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,     1,    73,     3,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,     1,    73,     3,    75,
      76,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
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
      -1,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      31,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    57,    58,    59,    -1,
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
      50,    51,    52,    53,    54,    55,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,
      80,    -1,    -1,    -1,    -1,    -1,    86,    31,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,     3,     4,     5,     6,     7,     8,    99,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    72,    -1,    31,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,     3,     4,     5,     6,     7,
       8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     1,    -1,     3,     4,     5,
       6,     7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    -1,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    76,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,
      34,    -1,    -1,    81,    38,    39,    40,    85,    86,    87,
      88,    89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,
      76,    -1,    -1,    -1,    -1,    81,    38,    39,    40,    85,
      86,    87,    88,    89,    90,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      80,    -1,    82,    83,    -1,    85,    86,    87,    88,    89,
      90,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,
      88,    89,    90,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     1,    70,     3,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
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
      -1,    -1,    -1,    76,    77,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    30,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    30,    86,    -1,
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
      -1,    84,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,     1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,     1,
      -1,    71,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,     1,    -1,    71,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,     1,    -1,    71,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   134,   135,   138,   139,   140,   141,   147,   150,
     151,   152,   153,   170,   182,   183,   184,   135,     3,    83,
      76,    76,    76,     1,     3,    76,    86,    99,   136,   137,
     154,   155,   156,   135,   135,     1,     3,    83,   135,   135,
     135,     0,   183,    83,     3,   103,   148,   149,     1,     3,
       4,     5,     6,     7,     8,    10,    11,    31,    70,    72,
      76,    85,    86,    87,    88,    89,    90,   101,   102,   104,
     105,   108,   110,   111,   112,   113,   117,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   133,   139,   144,   151,
     162,   162,     1,   133,    99,   154,     1,    71,   151,   156,
     157,     1,    78,    99,     1,    98,   185,   187,    76,    80,
     155,     1,   142,   143,   144,   170,     1,    83,   142,   148,
       1,    98,     1,    78,    84,    76,    80,   144,   156,   163,
     164,    76,   110,    76,   110,   110,    76,    76,   110,   128,
     129,   132,   162,     9,    10,    11,    76,    80,    82,   112,
       1,    86,    91,    92,     1,    87,    88,     1,    12,    13,
       1,    14,    15,    93,    94,     1,    16,    17,    85,    95,
      96,    18,     1,    19,    97,    77,   144,     1,   163,   144,
      77,    77,    78,    78,     1,    77,   156,   151,   156,   137,
     154,    83,   129,   165,   134,   135,   188,    83,   173,     1,
       3,    77,   135,   158,   159,   160,   161,    34,    81,    86,
     129,   157,    84,   143,    79,    99,   145,   146,   154,   142,
     142,     1,    84,     1,    78,    84,   133,     1,   133,   149,
       1,    84,   149,    77,   158,   163,    34,    81,    86,   129,
     157,   164,    76,    80,   162,   162,   162,     1,   129,   130,
       1,    77,    78,     1,    77,     3,    77,   109,   129,   132,
       3,   112,     1,   114,     1,   115,     1,   116,   113,     1,
     118,     1,   119,   117,   117,     1,   117,   120,   120,   120,
       1,   120,   120,   121,   121,     1,   121,     1,   122,     1,
     123,     1,   124,     1,   125,   132,     1,   126,     1,   132,
       6,     6,     1,    80,    82,   165,   166,   167,   168,   169,
     134,   186,     3,    57,    58,    59,    61,    62,    63,    64,
      65,    66,    67,    68,    84,    99,   132,   134,   171,   172,
     173,   174,   175,   176,   177,   180,   181,    77,    76,   154,
     156,   163,     1,    77,     1,    78,     1,    77,    78,     1,
     129,   157,    81,    81,    34,    81,    86,   129,   133,     1,
      78,    99,    79,    84,     1,    84,    84,    77,    77,   129,
     157,    81,    81,    34,    81,   129,    77,   158,    34,    81,
      86,   129,   157,    77,    77,    77,    78,    78,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    98,   131,
     129,     1,   129,    83,    83,   112,     1,    77,    78,     1,
      81,   112,   112,   112,   113,   113,     1,    79,    79,     1,
      79,    77,    77,    78,    84,     1,   133,     3,     1,    78,
      84,   165,     1,    98,   169,   173,    79,     1,   133,    79,
       1,    76,   178,     1,    76,     1,   171,     1,    76,     1,
       3,     1,    99,     1,    99,     1,    99,   132,     1,    99,
       1,    84,   175,    56,   160,    56,   160,     3,     3,    81,
     129,    81,     1,   129,   129,    81,    81,   146,     1,   146,
     133,    81,   129,   129,    81,    77,   129,   157,    81,    81,
      34,    81,   129,    58,   106,   107,   162,     1,   106,   129,
     166,   129,     1,   129,   128,   128,   128,   128,    99,    99,
      84,    81,     1,    81,   165,   167,    84,   165,   167,     1,
     171,    79,    79,     1,   171,   132,   132,    76,   132,     1,
     132,    62,    62,   134,     1,   134,   176,     1,    99,     1,
      99,    81,    81,    81,    81,    81,    81,    81,   129,   129,
      81,     1,    79,    77,    78,    79,    77,    77,     1,    78,
      84,   165,   165,   171,     1,   171,     1,    77,   132,    77,
      77,     1,    77,    76,     1,    76,   176,   176,     1,   176,
       1,   176,    81,    81,   129,     1,   129,     1,   107,   129,
      84,   171,    77,   171,   171,   129,   171,     1,   171,   132,
     132,     1,   132,   132,    77,   132,     1,    77,   132,    77,
     132,     1,    77,   132,    60,   179,    77,    77,    77,     1,
      77,    77,   171,    77,    77,   171,     1,    77,   171,    77,
      77,   171,   171,    77,   171,   171,    99,    99,    99,    99,
       1,    99,   171,   171,   171,   171,     1,   171,   171,   171,
       1,   171
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
     128,   128,   129,   130,   129,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   132,   132,   132,   132,
     133,   134,   134,   134,   134,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   136,
     137,   137,   137,   138,   138,   138,   138,   138,   138,   139,
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
     171,   171,   171,   171,   171,   172,   172,   172,   172,   172,
     172,   172,   173,   173,   173,   174,   174,   175,   175,   176,
     176,   176,   177,   177,   178,   179,   177,   177,   177,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   182,   182,   183,   183,
     185,   186,   184,   187,   184,   188,   188
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
       5,     5,     1,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     2,     3,     1,     3,     3,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     3,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     3,     4,     3,     3,     4,
       4,     3,     2,     3,     3,     1,     2,     1,     1,     1,
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
#line 61 "bison.y" /* yacc.c:1646  */
    { 
						if(nextToken == IDENTIFIER)process_id(); 
					}
#line 3435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "bison.y" /* yacc.c:1646  */
    { process_literal(I_CONSTANT); }
#line 3447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 90 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 104 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 129 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 130 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 131 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 142 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 143 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 179 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 179 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 180 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 180 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 181 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 181 "bison.y" /* yacc.c:1646  */
    {  eval_binary(); }
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 182 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 183 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 184 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 185 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 190 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 190 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 191 "bison.y" /* yacc.c:1646  */
    { process_op(); }
#line 3585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 191 "bison.y" /* yacc.c:1646  */
    { eval_binary(); }
#line 3591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 193 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 194 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 196 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 203 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 204 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 216 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 224 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 225 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 231 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 237 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 243 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 249 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 255 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 261 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 262 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 263 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 268 "bison.y" /* yacc.c:1646  */
    {printf("%s\n", strdup(yytext));}
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 292 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 293 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 301 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 302 "bison.y" /* yacc.c:1646  */
    { declaration_end(); }
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 305 "bison.y" /* yacc.c:1646  */
    { yyerrok;  }
#line 3723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 307 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 314 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 316 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 318 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 320 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 322 "bison.y" /* yacc.c:1646  */
    { save_type(); }
#line 3759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 323 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 329 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 333 "bison.y" /* yacc.c:1646  */
    { process_assign(); }
#line 3777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 335 "bison.y" /* yacc.c:1646  */
    { 
					if(yychar == IDENTIFIER || yychar == I_CONSTANT || yychar == F_CONSTANT)
						yyerrok; 

					yyclearin;  
					clearSemanticRecords(); }
#line 3788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 375 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 376 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 377 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 378 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 398 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 406 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 412 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 413 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 432 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 433 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 441 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 442 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 449 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 451 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 481 "bison.y" /* yacc.c:1646  */
    { save_id(); }
#line 3878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 499 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 500 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 501 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 505 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 506 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 507 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 508 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 518 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 519 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 533 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 539 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 553 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 560 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 561 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 601 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 602 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 603 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 611 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 612 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 618 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 3998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 629 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 630 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 635 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 652 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 653 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 654 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 655 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 661 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 678 "bison.y" /* yacc.c:1646  */
    {  yyerrok; }
#line 4052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 684 "bison.y" /* yacc.c:1646  */
    { /*start_switch()*/ }
#line 4058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 684 "bison.y" /* yacc.c:1646  */
    {/*Selector*/}
#line 4064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 684 "bison.y" /* yacc.c:1646  */
    { /*end_switch*/ }
#line 4070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 687 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 688 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 707 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 708 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 709 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 710 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 712 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 713 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 714 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 715 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 716 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 718 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 720 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 721 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 722 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 724 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 725 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 726 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 727 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 728 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 729 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 730 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 739 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 740 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 741 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 742 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 743 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 744 "bison.y" /* yacc.c:1646  */
    { yyerrok; }
#line 4238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 758 "bison.y" /* yacc.c:1646  */
    { start_function(); stackPos -= 4; }
#line 4244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 758 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE; pushTable(); }
#line 4250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 758 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; /*temp*/ }
#line 4256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 763 "bison.y" /* yacc.c:1646  */
    { inContext = TRUE;  start_function(); stackPos -= 4; pushTable(); }
#line 4262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 767 "bison.y" /* yacc.c:1646  */
    { end_function(); unDecleared = FALSE; inContext = FALSE; popTable(); stackPos -= 4; /*temp*/}
#line 4268 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4272 "y.tab.c" /* yacc.c:1646  */
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
#line 775 "bison.y" /* yacc.c:1906  */


#include "semanticActions.c"



