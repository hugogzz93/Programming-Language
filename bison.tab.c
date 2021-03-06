/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAMA = 258,
     COLON = 259,
     SEMICOLON = 260,
     COMA = 261,
     DOT = 262,
     OPENBRACKET = 263,
     CLOSEBRACKET = 264,
     EQUALS = 265,
     GREATERTHAN = 266,
     LESSTHAN = 267,
     NOTEQUAL = 268,
     PLUS = 269,
     TIMES = 270,
     MINUS = 271,
     DIVIDEDBY = 272,
     OPENPARENTH = 273,
     CLOSEPARENTH = 274,
     A = 275,
     AL = 276,
     CON = 277,
     Y = 278,
     VARIABLE = 279,
     ES = 280,
     EL = 281,
     RECUERDA = 282,
     ESTO = 283,
     LA = 284,
     DE = 285,
     SUMA = 286,
     ADICION = 287,
     RESTA = 288,
     SUBSTRACCION = 289,
     MULTIPLICACION = 290,
     DIVISION = 291,
     SUMALE = 292,
     QUITALE = 293,
     RESTALE = 294,
     AGREGALE = 295,
     INCREMENTALE = 296,
     LO = 297,
     CONTRARIO = 298,
     ALMENOS = 299,
     QUE = 300,
     SI = 301,
     REGRESA = 302,
     FUNCION = 303,
     UN = 304,
     TOMA = 305,
     ADENTRO = 306,
     MENOR_SPA = 307,
     MAYOR_SPA = 308,
     DIFERENTE_SPA = 309,
     IGUAL_SPA = 310,
     VERDADERO = 311,
     FALSO = 312,
     MIENTRAS = 313,
     HASTA = 314,
     VECES = 315,
     PARA = 316,
     CADA = 317,
     DEL = 318,
     SEA = 319,
     TYPEINT = 320,
     TYPEFLOAT = 321,
     TYPESTRING = 322,
     LLAMA = 323,
     INT = 324,
     FLOAT = 325,
     ID = 326,
     STRING = 327
   };
#endif
/* Tokens.  */
#define PROGRAMA 258
#define COLON 259
#define SEMICOLON 260
#define COMA 261
#define DOT 262
#define OPENBRACKET 263
#define CLOSEBRACKET 264
#define EQUALS 265
#define GREATERTHAN 266
#define LESSTHAN 267
#define NOTEQUAL 268
#define PLUS 269
#define TIMES 270
#define MINUS 271
#define DIVIDEDBY 272
#define OPENPARENTH 273
#define CLOSEPARENTH 274
#define A 275
#define AL 276
#define CON 277
#define Y 278
#define VARIABLE 279
#define ES 280
#define EL 281
#define RECUERDA 282
#define ESTO 283
#define LA 284
#define DE 285
#define SUMA 286
#define ADICION 287
#define RESTA 288
#define SUBSTRACCION 289
#define MULTIPLICACION 290
#define DIVISION 291
#define SUMALE 292
#define QUITALE 293
#define RESTALE 294
#define AGREGALE 295
#define INCREMENTALE 296
#define LO 297
#define CONTRARIO 298
#define ALMENOS 299
#define QUE 300
#define SI 301
#define REGRESA 302
#define FUNCION 303
#define UN 304
#define TOMA 305
#define ADENTRO 306
#define MENOR_SPA 307
#define MAYOR_SPA 308
#define DIFERENTE_SPA 309
#define IGUAL_SPA 310
#define VERDADERO 311
#define FALSO 312
#define MIENTRAS 313
#define HASTA 314
#define VECES 315
#define PARA 316
#define CADA 317
#define DEL 318
#define SEA 319
#define TYPEINT 320
#define TYPEFLOAT 321
#define TYPESTRING 322
#define LLAMA 323
#define INT 324
#define FLOAT 325
#define ID 326
#define STRING 327




/* Copy the first part of user declarations.  */
#line 1 "bison.y"

	#include <cstdio>
	#include <iostream>
	#include <vector>
	#include <string>
	#include <stdlib.h>
	#include <cstring>
	#include "ProcedureRecord.h"
	#include "ProcedureDirectory.h"
	#include "SemanticCube.h"
	using namespace std;

	// stuff from flex that bison needs to know about:
	extern "C" int yylex();
	extern "C" int yyparse();
	extern "C" char *yytext;
	extern "C" FILE *yyin;
	extern "C" int line_num;
	 
	void yyerror(const char *s);

	// procedure directory
	ProcedureDirectory procDir;
	// semantic cube
	SemanticCube cube;

	inline void addParameter(char* type, char* name) {
		string sName(name), sType(type);
		procDir.addParameter(sType, sName);
	}

	inline void addVariable(char* type, char* name) {
		string sName(name), sType(type);
		procDir.addVariable(sType, sName);
	}

	inline void addFunction(char* type, char* name) {
		printf("adding Function\n");
		string sName(name), sType(type);
		procDir.addFunction(sType, sName);
	}

	inline void listDirectory() {
		procDir.listDirectory();
	}

	char * intToChar(const int number) {

		std::string s = std::to_string(number);
		const char *pchar = s.c_str();  //use char const* as target type

		char temp[51];
	    strncpy(temp,pchar,51);

		return temp;
	}

	// inline void test() {
	// 	procDir.assignVariable("int", "x", "123");
	// 	procDir.assignVariable("string", "name", "dag");

	// 	procDir.listDirectory();

	// }
	



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 69 "bison.y"
{
	int ival;
	float fval;
	char *sval;
}
/* Line 193 of yacc.c.  */
#line 314 "bison.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 327 "bison.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   243

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNRULES -- Number of states.  */
#define YYNSTATES  232

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    10,    12,    16,    19,    22,    24,
      25,    27,    28,    31,    34,    36,    37,    42,    43,    52,
      55,    56,    59,    61,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    91,    96,    99,   102,   103,
     105,   107,   109,   111,   113,   115,   116,   119,   121,   128,
     132,   133,   135,   138,   142,   147,   149,   151,   155,   157,
     159,   164,   166,   168,   170,   172,   174,   176,   178,   180,
     182,   184,   187,   189,   192,   194,   197,   199,   201,   207,
     210,   211,   222,   226,   227,   233,   234,   238,   242,   245,
     248,   249,   251,   253,   255,   257,   259,   264,   268,   271,
     275,   278,   279,   281,   283,   285,   287,   289,   291,   294,
     296,   298,   301,   304,   307,   309,   311,   313,   315,   317,
     319,   321,   323,   329,   331,   334,   336,   341,   346,   349,
     354,   357,   362
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      74,     0,    -1,     3,    71,    75,    76,    -1,     4,    -1,
       6,    -1,    84,    77,    78,    -1,   114,    79,    -1,   111,
      80,    -1,    77,    -1,    -1,    78,    -1,    -1,    84,    82,
      -1,   111,    83,    -1,    82,    -1,    -1,    87,     4,    85,
       7,    -1,    -1,    29,    24,    71,    25,    26,   121,   110,
      86,    -1,     6,    85,    -1,    -1,    27,    28,    -1,    89,
      -1,    29,    90,    30,    97,    91,    97,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
      22,    -1,    23,    -1,    93,    -1,   108,    -1,    96,    94,
      -1,    97,    20,    97,    95,    -1,     6,    94,    -1,    23,
      94,    -1,    -1,    37,    -1,    38,    -1,    39,    -1,    40,
      -1,    41,    -1,   110,    -1,    -1,    99,   100,    -1,   104,
      -1,   102,   105,     5,    81,     7,   101,    -1,   103,    81,
       7,    -1,    -1,    46,    -1,    44,    45,    -1,    30,    42,
      43,    -1,   110,   102,   105,     7,    -1,   134,    -1,   106,
      -1,   135,   107,   135,    -1,   128,    -1,   127,    -1,    71,
     109,    10,    71,    -1,    14,    -1,    16,    -1,    15,    -1,
      17,    -1,    88,    -1,   122,    -1,    69,    -1,    70,    -1,
      72,    -1,    71,    -1,   110,     7,    -1,    98,    -1,    85,
       7,    -1,   114,    -1,    92,     7,    -1,   136,    -1,   139,
      -1,    84,   113,    47,   110,     7,    -1,   111,   113,    -1,
      -1,    29,    48,    71,    47,    49,   121,   115,     7,   116,
     112,    -1,    23,    50,   117,    -1,    -1,    51,    30,    29,
      48,     6,    -1,    -1,    29,    24,   118,    -1,   121,    71,
     119,    -1,     6,   120,    -1,    23,   117,    -1,    -1,   119,
      -1,   118,    -1,    65,    -1,    66,    -1,    67,    -1,    68,
      71,    22,   123,    -1,    29,    24,   124,    -1,    26,   124,
      -1,   121,    71,   125,    -1,   126,   123,    -1,    -1,     6,
      -1,    23,    -1,    12,    -1,    11,    -1,    13,    -1,    10,
      -1,   129,   130,    -1,    64,    -1,    25,    -1,   131,   133,
      -1,   132,   133,    -1,   132,    20,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    45,    -1,    56,    -1,    57,
      -1,   110,    -1,   137,   105,     4,    81,   138,    -1,    58,
      -1,    59,    45,    -1,     7,    -1,   140,     4,    81,   143,
      -1,   141,     4,    81,   143,    -1,    69,    60,    -1,    61,
      62,    71,   142,    -1,    30,   135,    -1,    63,    69,    21,
      69,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   165,   165,   168,   169,   173,   176,   179,   182,   183,
     186,   187,   191,   194,   197,   198,   202,   203,   207,   210,
     211,   214,   218,   241,   245,   246,   247,   248,   249,   250,
     253,   254,   258,   259,   262,   265,   268,   269,   270,   274,
     275,   276,   277,   278,   281,   285,   285,   286,   290,   293,
     294,   296,   297,   300,   303,   307,   308,   310,   312,   313,
     316,   319,   320,   321,   322,   325,   326,   327,   328,   329,
     330,   333,   334,   335,   336,   337,   338,   339,   342,   345,
     346,   349,   352,   353,   356,   357,   360,   363,   366,   367,
     368,   371,   372,   378,   379,   380,   401,   404,   405,   408,
     411,   412,   415,   416,   419,   420,   421,   422,   425,   428,
     429,   432,   433,   434,   437,   438,   439,   442,   445,   448,
     449,   452,   455,   458,   459,   462,   466,   467,   470,   472,
     474,   475,   478
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAMA", "COLON", "SEMICOLON", "COMA",
  "DOT", "OPENBRACKET", "CLOSEBRACKET", "EQUALS", "GREATERTHAN",
  "LESSTHAN", "NOTEQUAL", "PLUS", "TIMES", "MINUS", "DIVIDEDBY",
  "OPENPARENTH", "CLOSEPARENTH", "A", "AL", "CON", "Y", "VARIABLE", "ES",
  "EL", "RECUERDA", "ESTO", "LA", "DE", "SUMA", "ADICION", "RESTA",
  "SUBSTRACCION", "MULTIPLICACION", "DIVISION", "SUMALE", "QUITALE",
  "RESTALE", "AGREGALE", "INCREMENTALE", "LO", "CONTRARIO", "ALMENOS",
  "QUE", "SI", "REGRESA", "FUNCION", "UN", "TOMA", "ADENTRO", "MENOR_SPA",
  "MAYOR_SPA", "DIFERENTE_SPA", "IGUAL_SPA", "VERDADERO", "FALSO",
  "MIENTRAS", "HASTA", "VECES", "PARA", "CADA", "DEL", "SEA", "TYPEINT",
  "TYPEFLOAT", "TYPESTRING", "LLAMA", "INT", "FLOAT", "ID", "STRING",
  "$accept", "programa", "programa_a", "context_block", "context_block_a",
  "context_block_b", "context_block_c", "context_block_d", "low_block",
  "low_block_a", "low_block_b", "vars", "var_assignment",
  "var_assignment_a", "var_dec_pre", "operation", "operation_spa",
  "operator_spa", "concatenation_op", "mutation", "mutation_spa",
  "mutation_spa_a", "mutation_spa_b", "operator_spa_mod", "operand",
  "condition", "@1", "block_condition", "block_condition_a",
  "block_condition_pre", "block_condition_else", "condition_suffix",
  "declaration", "dec", "dec_a", "mutation_norm", "mut_norm_op",
  "expression", "statute", "func_block", "func_block_a",
  "function_declaration", "function_declaration_a",
  "function_declaration_b", "func_param_dec", "func_param_dec_a",
  "func_param_dec_b", "func_param_dec_c", "type", "function_call",
  "function_call_a", "function_call_b", "function_call_c",
  "function_call_d", "dec_op", "dec_op_spa", "dec_op_spa_a",
  "dec_op_spa_b", "dec_op_spa_c", "dec_op_spa_d", "dec_op_spa_e", "bool",
  "dec_operand", "while", "while_a", "while_end", "for", "for_a", "for_b",
  "for_c", "for_end", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    75,    76,    77,    78,    79,    79,
      80,    80,    81,    82,    83,    83,    84,    84,    85,    86,
      86,    87,    88,    89,    90,    90,    90,    90,    90,    90,
      91,    91,    92,    92,    93,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    97,    99,    98,    98,   100,   101,
     101,   102,   102,   103,   104,   105,   105,   106,   107,   107,
     108,   109,   109,   109,   109,   110,   110,   110,   110,   110,
     110,   111,   111,   111,   111,   111,   111,   111,   112,   113,
     113,   114,   115,   115,   116,   116,   117,   118,   119,   119,
     119,   120,   120,   121,   121,   121,   122,   123,   123,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   128,   129,
     129,   130,   130,   130,   131,   131,   131,   132,   133,   134,
     134,   135,   136,   137,   137,   138,   139,   139,   140,   141,
     142,   142,   143
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     1,     3,     2,     2,     1,     0,
       1,     0,     2,     2,     1,     0,     4,     0,     8,     2,
       0,     2,     1,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     6,     3,
       0,     1,     2,     3,     4,     1,     1,     3,     1,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     1,     1,     5,     2,
       0,    10,     3,     0,     5,     0,     3,     3,     2,     2,
       0,     1,     1,     1,     1,     1,     4,     3,     2,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     1,     2,     1,     4,     4,     2,     4,
       2,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,    17,     0,     2,
       0,     0,    21,     0,    45,     9,     0,     0,     0,    39,
      40,    41,    42,    43,   123,     0,     0,     0,    67,    68,
      70,    69,     5,     0,    65,    22,     0,    32,     0,    72,
       0,    47,    33,     0,    45,    74,    66,    76,     0,    77,
       0,     0,     8,     6,     0,     0,     0,     0,    24,    25,
      26,    27,    28,    29,     0,   124,     0,     0,   128,    61,
      63,    62,    64,     0,    73,    75,     0,    67,    70,    34,
       0,    44,     0,    51,    46,     0,    71,     0,    10,     7,
     119,   120,     0,    56,   121,    55,     0,    17,    17,    16,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
      17,   107,   105,   104,   106,   110,   109,     0,    59,    58,
       0,     0,    45,     0,     0,     0,     0,     0,     0,   129,
       0,     0,    96,    60,    38,    17,    54,     0,    57,   114,
     115,   116,   117,   108,     0,     0,   132,   126,    12,    45,
     127,    93,    94,    95,    83,     0,    30,    31,     0,   130,
       0,     0,    98,     0,     0,     0,    35,     0,   125,   122,
     118,   111,   113,   112,    14,    13,     0,     0,     0,    23,
       0,   101,    97,    36,    37,    50,     0,    85,    20,   131,
     102,   103,    99,     0,     0,    48,    17,     0,    82,     0,
      17,     0,    18,   100,     0,     0,     0,     0,    45,    81,
      19,    53,    49,    86,     0,     0,    45,     0,    90,     0,
      79,     0,    90,     0,    87,    84,     0,    92,    91,    88,
      89,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    14,    32,    53,    89,   121,   148,
     175,   122,    33,   202,    11,    34,    35,    64,   158,    36,
      37,    79,   166,    38,    80,    39,    40,    84,   195,    85,
     196,    41,    92,    93,   117,    42,    73,    43,    44,   209,
     217,    45,   177,   200,   198,   213,   224,   229,   161,    46,
     132,   162,   192,   193,   118,   119,   120,   143,   144,   145,
     171,    95,    96,    47,    48,   169,    49,    50,    51,   129,
     147
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -136
static const yytype_int16 yypact[] =
{
      31,   -61,    41,    48,  -136,  -136,  -136,    20,    14,  -136,
      24,    85,  -136,    45,   130,    24,    43,    25,   148,  -136,
    -136,  -136,  -136,  -136,  -136,    53,    37,    32,    54,  -136,
      68,  -136,  -136,   109,  -136,  -136,   123,  -136,   105,  -136,
      18,  -136,  -136,     4,    36,  -136,  -136,  -136,   -13,  -136,
     127,   128,  -136,  -136,   111,   133,    89,    66,  -136,  -136,
    -136,  -136,  -136,  -136,   113,  -136,    75,   131,  -136,  -136,
    -136,  -136,  -136,   156,  -136,  -136,   129,  -136,  -136,  -136,
     158,  -136,   142,  -136,  -136,   -13,  -136,   -13,  -136,  -136,
    -136,  -136,   186,  -136,  -136,  -136,     7,    20,    20,  -136,
     143,   169,   105,   -17,    34,   124,   105,  -136,   192,   196,
      20,  -136,  -136,  -136,  -136,  -136,  -136,   105,  -136,  -136,
      58,   197,   130,   197,    13,   179,     0,   105,   137,  -136,
      13,   183,  -136,  -136,     1,    20,  -136,   201,  -136,  -136,
    -136,  -136,  -136,  -136,   164,    -6,  -136,  -136,  -136,    80,
    -136,  -136,  -136,  -136,   187,    13,  -136,  -136,   105,  -136,
     190,   141,  -136,    13,   105,   105,  -136,   206,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,   165,   207,   105,  -136,
     147,    15,  -136,  -136,  -136,   188,   191,   166,   213,  -136,
    -136,  -136,  -136,    34,   180,  -136,    20,   199,  -136,   194,
      20,    43,  -136,  -136,   178,   218,    13,   198,    86,  -136,
    -136,  -136,  -136,  -136,   155,   181,    86,   184,    22,   222,
    -136,   105,     2,   191,  -136,  -136,   223,  -136,  -136,  -136,
    -136,  -136
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,  -136,  -136,   217,   189,  -136,  -136,   -95,    87,
    -136,    -7,   -15,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -135,  -136,  -136,   -97,  -136,  -136,  -136,  -136,   195,
    -136,  -136,     3,  -136,  -136,  -136,  -136,   -36,  -116,  -136,
      19,    16,  -136,  -136,    11,    17,    21,  -136,  -120,  -136,
      44,    77,  -136,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
      96,  -136,   -90,  -136,  -136,  -136,  -136,  -136,  -136,  -136,
     119
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -81
static const yytype_int16 yytable[] =
{
      10,    55,    81,   123,   154,   126,   149,   164,   222,   134,
       3,    86,    94,   127,   172,   137,    76,   111,   112,   113,
     114,   190,   156,   157,   165,   223,    15,   138,   222,   183,
     184,    15,   115,   149,     1,   178,   -11,   159,   191,   170,
     167,     4,    12,    90,    91,   223,   128,     8,    82,    94,
      83,    94,     5,    13,     6,    27,    77,    29,    78,    31,
     130,   179,    82,   131,    83,    18,    81,   151,   152,   153,
      81,   116,    54,    19,    20,    21,    22,    23,   151,   152,
     153,    94,    69,    70,    71,    72,   214,   -15,   108,    16,
     109,    94,   216,    17,    24,    25,    56,    26,    65,    66,
     216,   205,   214,    67,    27,    28,    29,    30,    31,    18,
     139,   140,   141,   142,    68,    18,    74,    19,    20,    21,
      22,    23,    81,    19,    20,    21,    22,    23,    81,    81,
      75,    97,    98,   -80,    76,    57,   100,   101,    24,    25,
      99,    26,   188,   102,    24,    25,   103,    26,    27,    28,
      29,    30,    31,   104,    27,    28,    29,    30,    31,    18,
      58,    59,    60,    61,    62,    63,   105,    19,    20,    21,
      22,    23,    57,    27,    77,    29,    78,    31,   106,    58,
      59,    60,    61,    62,    63,   226,   210,   107,    24,    25,
     110,    26,   124,   208,   125,   133,    17,   135,    27,    28,
      29,    30,    31,   136,   146,   155,   160,   163,   168,   170,
     176,   180,   181,   185,   187,   186,   189,   199,   194,   201,
     197,   211,   204,   206,   207,   212,   218,   215,   225,   219,
     231,   221,    52,    88,   230,   220,   174,   203,    87,   227,
     182,   173,   150,   228
};

static const yytype_uint8 yycheck[] =
{
       7,    16,    38,    98,   124,   102,   122,     6,     6,   106,
      71,     7,    48,    30,    20,   110,    29,    10,    11,    12,
      13,     6,    22,    23,    23,    23,    10,   117,     6,   164,
     165,    15,    25,   149,     3,   155,     0,   127,    23,    45,
     135,     0,    28,    56,    57,    23,    63,    27,    44,    85,
      46,    87,     4,    29,     6,    68,    69,    70,    71,    72,
      26,   158,    44,    29,    46,    29,   102,    65,    66,    67,
     106,    64,    29,    37,    38,    39,    40,    41,    65,    66,
      67,   117,    14,    15,    16,    17,   206,     7,    85,     4,
      87,   127,   208,    48,    58,    59,    71,    61,    45,    62,
     216,   196,   222,    71,    68,    69,    70,    71,    72,    29,
      52,    53,    54,    55,    60,    29,     7,    37,    38,    39,
      40,    41,   158,    37,    38,    39,    40,    41,   164,   165,
       7,     4,     4,    47,    29,    24,    47,    71,    58,    59,
       7,    61,   178,    30,    58,    59,    71,    61,    68,    69,
      70,    71,    72,    22,    68,    69,    70,    71,    72,    29,
      31,    32,    33,    34,    35,    36,    10,    37,    38,    39,
      40,    41,    24,    68,    69,    70,    71,    72,    20,    31,
      32,    33,    34,    35,    36,   221,   201,    45,    58,    59,
       4,    61,    49,   200,    25,    71,    48,     5,    68,    69,
      70,    71,    72,     7,     7,    26,    69,    24,     7,    45,
      23,    21,    71,     7,     7,    50,    69,    51,    30,     6,
      29,    43,    42,    24,    30,     7,    71,    29,     6,    48,
       7,    47,    15,    44,   223,   216,   149,   193,    43,   222,
     163,   145,   123,   222
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    74,    71,     0,     4,     6,    75,    27,    76,
      84,    87,    28,    29,    77,   114,     4,    48,    29,    37,
      38,    39,    40,    41,    58,    59,    61,    68,    69,    70,
      71,    72,    78,    85,    88,    89,    92,    93,    96,    98,
      99,   104,   108,   110,   111,   114,   122,   136,   137,   139,
     140,   141,    77,    79,    29,    85,    71,    24,    31,    32,
      33,    34,    35,    36,    90,    45,    62,    71,    60,    14,
      15,    16,    17,   109,     7,     7,    29,    69,    71,    94,
      97,   110,    44,    46,   100,   102,     7,   102,    78,    80,
      56,    57,   105,   106,   110,   134,   135,     4,     4,     7,
      47,    71,    30,    71,    22,    10,    20,    45,   105,   105,
       4,    10,    11,    12,    13,    25,    64,   107,   127,   128,
     129,    81,    84,    81,    49,    25,    97,    30,    63,   142,
      26,    29,   123,    71,    97,     5,     7,    81,   135,    52,
      53,    54,    55,   130,   131,   132,     7,   143,    82,   111,
     143,    65,    66,    67,   121,    26,    22,    23,    91,   135,
      69,   121,   124,    24,     6,    23,    95,    81,     7,   138,
      45,   133,    20,   133,    82,    83,    23,   115,   121,    97,
      21,    71,   124,    94,    94,     7,    50,     7,   110,    69,
       6,    23,   125,   126,    30,   101,   103,    29,   117,    51,
     116,     6,    86,   123,    42,    81,    24,    30,    84,   112,
      85,    43,     7,   118,   121,    29,   111,   113,    71,    48,
     113,    47,     6,    23,   119,     6,   110,   118,   119,   120,
     117,     7
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 165 "bison.y"
    { printf("Accepted Syntax!\n"); listDirectory(); ;}
    break;

  case 18:
#line 207 "bison.y"
    { addVariable((yyvsp[(6) - (8)].sval), (yyvsp[(3) - (8)].sval)); ;}
    break;

  case 22:
#line 218 "bison.y"
    {  (yyval.sval) = "operation";;}
    break;

  case 24:
#line 245 "bison.y"
    { (yyval.sval) = "SUMA"; ;}
    break;

  case 25:
#line 246 "bison.y"
    { (yyval.sval) = "ADICION"; ;}
    break;

  case 26:
#line 247 "bison.y"
    { (yyval.sval) = "RESTA"; ;}
    break;

  case 27:
#line 248 "bison.y"
    { (yyval.sval) = "SUBSTRACCION"; ;}
    break;

  case 28:
#line 249 "bison.y"
    { (yyval.sval) = "MULTIPLICACION"; ;}
    break;

  case 29:
#line 250 "bison.y"
    { (yyval.sval) = "DIVISION"; ;}
    break;

  case 45:
#line 285 "bison.y"
    {printf("condition start on line %d\n", line_num);}
    break;

  case 46:
#line 285 "bison.y"
    { printf("condition finished, %d\n", line_num);}
    break;

  case 65:
#line 325 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 66:
#line 326 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 67:
#line 327 "bison.y"
    {  (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 68:
#line 328 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 69:
#line 329 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 70:
#line 330 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 71:
#line 333 "bison.y"
    { printf("Statute exp finished: %d, '%s'\n", line_num, (yyvsp[(1) - (2)].sval)); ;}
    break;

  case 72:
#line 334 "bison.y"
    { printf("Statute finished: %d\n", line_num);}
    break;

  case 73:
#line 335 "bison.y"
    { printf("Statute finished: %d\n", line_num);}
    break;

  case 74:
#line 336 "bison.y"
    { printf("Statute finished: %d\n", line_num);}
    break;

  case 75:
#line 337 "bison.y"
    { printf("Statute finished: %d\n", line_num);}
    break;

  case 76:
#line 338 "bison.y"
    { printf("Statute finished: %d\n", line_num);}
    break;

  case 77:
#line 339 "bison.y"
    { printf("Statute finished: %d\n", line_num);}
    break;

  case 81:
#line 349 "bison.y"
    { printf("Function declaration: %d\n", line_num); addFunction((yyvsp[(6) - (10)].sval), (yyvsp[(3) - (10)].sval));  ;}
    break;

  case 87:
#line 363 "bison.y"
    { addParameter((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval)); ;}
    break;

  case 93:
#line 378 "bison.y"
    { (yyval.sval) = "INT"; ;}
    break;

  case 94:
#line 379 "bison.y"
    { (yyval.sval) = "FLOAT"; ;}
    break;

  case 95:
#line 380 "bison.y"
    { (yyval.sval) = "STRING"; ;}
    break;

  case 96:
#line 401 "bison.y"
    { (yyval.sval) = "function"; ;}
    break;

  case 125:
#line 462 "bison.y"
    {printf("while end: %d\n", line_num);}
    break;

  case 132:
#line 478 "bison.y"
    {printf("For end: %d\n", line_num);}
    break;


/* Line 1267 of yacc.c.  */
#line 1926 "bison.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 481 "bison.y"


int main(int, char**) {
	// open a file handle to a particular file:
	FILE *myfile = fopen("file", "r");
	// make sure it is valid:
	if (!myfile) {
		cout << "I can't open file.txt!" << endl;
		return -1;
	}
	// set flex to read from it instead of defaulting to STDIN:
	yyin = myfile;
		
	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	return 0;
	
}

void yyerror(const char *s) {
	printf("Syntax error (line %d): unexpected token '%s'\n", line_num, yytext);
	exit(-1);
}
