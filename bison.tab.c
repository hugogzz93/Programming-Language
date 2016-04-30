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
	#include <stack>
	#include "ProcedureRecord.h"
	#include "ProcedureDirectory.h"
	#include "SemanticCube.h"
	#include "QuadrupleGenerator.h"
	using namespace std;

	// stuff from flex that bison needs to know about:
	extern "C" int yylex();
	extern "C" int yyparse();
	extern "C" char *yytext;
	extern "C" FILE *yyin;
	extern "C" int line_num;
	 
	void yyerror(const char *s);

	ProcedureDirectory procDir;
	SemanticCube cube;
	QuadrupleGenerator quadGenerator(&procDir, cube);


	void pushOperation(QuadrupleGenerator& quadGenerator, char* op) {
		string sOp(op);
		quadGenerator.pushOperation(sOp);
	}

	void pushLeftOperand(QuadrupleGenerator& quadGenerator, char* lOp) {
		string lOperand(lOp);
		quadGenerator.pushLeftOperand(lOperand);
	}

	void pushRightOperand(QuadrupleGenerator& quadGenerator, char* rOp) {
		string rOperand(rOp);
		quadGenerator.pushRightOperand(rOperand);
	}

	inline void executeMutation() {
		quadGenerator.executeMutation();
	}

	inline void finishMutationChain() {
		quadGenerator.finishMutationChain();
	}

	inline void executeOperation() {
		quadGenerator.executeOperation();
	}

	inline void setVarFlag(int flag) {
		quadGenerator.setVarFlag(flag);
	}

	inline void enterLocalScope(char * cName) {
		
		{   
			string scope(cName);
			procDir.enterLocalScope();
			quadGenerator.setCurrentScope(scope);
			printf("Entering Scope of: %s\n", quadGenerator.getCurrentScope().c_str());
		}
	}

	inline void exitLocalScope() {
		procDir.enterGlobalScope();
		quadGenerator.setCurrentScope("main");
	}

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

	inline void listDirectory(bool verbose = false) {
		procDir.listDirectory(verbose);
	}

	char * intToChar(const int number) {

		std::string s = std::to_string(number);
		const char *pchar = s.c_str();  //use char const* as target type

		char temp[51];
	    strncpy(temp,pchar,51);

		return temp;
	}

	inline void variableAssignment(string id, string operand) {
		quadGenerator.variableAssignment(id, operand);
	}

	inline void startConditional() {
		quadGenerator.startConditional();
	}

	inline void finishConditionalChain() {
		quadGenerator.finishConditionalChain();
	}

	inline void finishConditional() {
		quadGenerator.finishConditional();
	}

	inline void startConditionElse() {
		quadGenerator.startConditionElse();
	}


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
#line 128 "bison.y"
{
	int ival;
	float fval;
	char *sval;
}
/* Line 193 of yacc.c.  */
#line 373 "bison.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 386 "bison.tab.c"

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
#define YYLAST   240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNRULES -- Number of states.  */
#define YYNSTATES  248

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
      25,    27,    28,    31,    34,    36,    37,    42,    43,    44,
      45,    56,    59,    60,    63,    69,    70,    71,    74,    75,
      76,    85,    87,    89,    91,    93,    95,    97,    99,   101,
     103,   105,   106,   110,   111,   112,   119,   122,   125,   126,
     128,   130,   132,   134,   136,   138,   139,   142,   144,   145,
     153,   157,   158,   160,   163,   167,   172,   174,   176,   177,
     182,   184,   186,   191,   193,   195,   197,   199,   201,   203,
     205,   207,   209,   211,   214,   216,   219,   221,   224,   226,
     228,   229,   236,   239,   240,   241,   242,   255,   259,   260,
     266,   267,   271,   275,   278,   281,   282,   284,   286,   288,
     290,   292,   297,   301,   304,   308,   311,   312,   314,   316,
     318,   320,   322,   324,   327,   329,   331,   334,   337,   340,
     342,   344,   346,   348,   350,   352,   354,   356,   362,   364,
     367,   369,   374,   379,   382,   387,   390,   395
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      74,     0,    -1,     3,    71,    75,    76,    -1,     4,    -1,
       6,    -1,    84,    77,    78,    -1,   126,    79,    -1,   122,
      80,    -1,    77,    -1,    -1,    78,    -1,    -1,    84,    82,
      -1,   122,    83,    -1,    82,    -1,    -1,    89,     4,    85,
       7,    -1,    -1,    -1,    -1,    29,    24,    71,    25,    26,
     135,    86,   121,    87,    88,    -1,     6,    85,    -1,    -1,
      27,    28,    -1,    71,    25,    55,    20,   121,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    29,    96,    94,    30,
     106,    95,    97,   106,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    22,    -1,    23,
      -1,    99,    -1,   119,    -1,    -1,   105,   100,   101,    -1,
      -1,    -1,   106,   102,    20,   106,   103,   104,    -1,     6,
     101,    -1,    23,   101,    -1,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,   121,    -1,    -1,   108,
     109,    -1,   114,    -1,    -1,   112,   115,   110,     5,    81,
       7,   111,    -1,   113,    81,     7,    -1,    -1,    46,    -1,
      44,    45,    -1,    30,    42,    43,    -1,   121,   112,   115,
       7,    -1,   148,    -1,   116,    -1,    -1,   149,   117,   118,
     149,    -1,   142,    -1,   141,    -1,    71,   120,    10,    71,
      -1,    14,    -1,    16,    -1,    15,    -1,    17,    -1,    91,
      -1,   136,    -1,    71,    -1,    69,    -1,    70,    -1,    72,
      -1,   121,     7,    -1,   107,    -1,    90,     7,    -1,   126,
      -1,    98,     7,    -1,   150,    -1,   153,    -1,    -1,    84,
     124,   125,    47,   121,     7,    -1,   122,   125,    -1,    -1,
      -1,    -1,    29,    48,    71,   127,    47,    49,   135,   129,
       7,   130,   128,   123,    -1,    23,    50,   131,    -1,    -1,
      51,    30,    29,    48,     6,    -1,    -1,    29,    24,   132,
      -1,   135,    71,   133,    -1,     6,   134,    -1,    23,   131,
      -1,    -1,   133,    -1,   132,    -1,    65,    -1,    66,    -1,
      67,    -1,    68,    71,    22,   137,    -1,    29,    24,   138,
      -1,    26,   138,    -1,   135,    71,   139,    -1,   140,   137,
      -1,    -1,     6,    -1,    23,    -1,    12,    -1,    11,    -1,
      13,    -1,    10,    -1,   143,   144,    -1,    64,    -1,    25,
      -1,   145,   147,    -1,   146,   147,    -1,   146,    20,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    45,    -1,
      56,    -1,    57,    -1,   121,    -1,   151,   115,     4,    81,
     152,    -1,    58,    -1,    59,    45,    -1,     7,    -1,   154,
       4,    81,   157,    -1,   155,     4,    81,   157,    -1,    69,
      60,    -1,    61,    62,    71,   156,    -1,    30,   149,    -1,
      63,    69,    21,    69,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   227,   227,   230,   231,   235,   238,   241,   244,   245,
     248,   249,   253,   256,   259,   260,   264,   265,   269,   269,
     269,   272,   273,   276,   279,   280,   285,   285,   308,   308,
     308,   312,   313,   314,   315,   316,   317,   320,   321,   325,
     326,   329,   329,   332,   332,   332,   335,   336,   337,   341,
     342,   343,   344,   345,   348,   352,   352,   353,   357,   357,
     360,   361,   363,   364,   367,   370,   374,   375,   377,   377,
     379,   380,   383,   386,   387,   388,   389,   392,   393,   394,
     395,   396,   397,   400,   401,   402,   403,   404,   405,   406,
     409,   409,   412,   413,   416,   416,   416,   422,   423,   426,
     427,   430,   433,   436,   437,   438,   441,   442,   448,   449,
     450,   471,   474,   475,   478,   481,   482,   485,   486,   489,
     490,   491,   492,   495,   498,   499,   502,   503,   504,   507,
     508,   509,   512,   515,   518,   519,   522,   525,   528,   529,
     532,   536,   537,   540,   542,   544,   545,   548
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
  "low_block_a", "low_block_b", "vars", "var_assignment", "@1", "@2",
  "var_assignment_a", "var_dec_pre", "var_assignation", "operation", "@3",
  "operation_spa", "@4", "@5", "operator_spa", "concatenation_op",
  "mutation", "mutation_spa", "@6", "mutation_spa_a", "@7", "@8",
  "mutation_spa_b", "operator_spa_mod", "operand", "condition", "@9",
  "block_condition", "@10", "block_condition_a", "block_condition_pre",
  "block_condition_else", "condition_suffix", "declaration", "dec", "@11",
  "dec_a", "mutation_norm", "mut_norm_op", "expression", "statute",
  "func_block", "@12", "func_block_a", "function_declaration", "@13",
  "@14", "function_declaration_a", "function_declaration_b",
  "func_param_dec", "func_param_dec_a", "func_param_dec_b",
  "func_param_dec_c", "type", "function_call", "function_call_a",
  "function_call_b", "function_call_c", "function_call_d", "dec_op",
  "dec_op_spa", "dec_op_spa_a", "dec_op_spa_b", "dec_op_spa_c",
  "dec_op_spa_d", "dec_op_spa_e", "bool", "dec_operand", "while",
  "while_a", "while_end", "for", "for_a", "for_b", "for_c", "for_end", 0
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
      80,    80,    81,    82,    83,    83,    84,    84,    86,    87,
      85,    88,    88,    89,    90,    90,    92,    91,    94,    95,
      93,    96,    96,    96,    96,    96,    96,    97,    97,    98,
      98,   100,    99,   102,   103,   101,   104,   104,   104,   105,
     105,   105,   105,   105,   106,   108,   107,   107,   110,   109,
     111,   111,   112,   112,   113,   114,   115,   115,   117,   116,
     118,   118,   119,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   122,   122,   122,
     124,   123,   125,   125,   127,   128,   126,   129,   129,   130,
     130,   131,   132,   133,   133,   133,   134,   134,   135,   135,
     135,   136,   137,   137,   138,   139,   139,   140,   140,   141,
     141,   141,   141,   142,   143,   143,   144,   144,   144,   145,
     145,   145,   146,   147,   148,   148,   149,   150,   151,   151,
     152,   153,   153,   154,   155,   156,   156,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     1,     3,     2,     2,     1,     0,
       1,     0,     2,     2,     1,     0,     4,     0,     0,     0,
      10,     2,     0,     2,     5,     0,     0,     2,     0,     0,
       8,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     0,     6,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     0,     7,
       3,     0,     1,     2,     3,     4,     1,     1,     0,     4,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     1,
       0,     6,     2,     0,     0,     0,    12,     3,     0,     5,
       0,     3,     3,     2,     2,     0,     1,     1,     1,     1,
       1,     4,     3,     2,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     2,
       1,     4,     4,     2,     4,     2,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,    17,     0,     2,
       0,     0,    23,     0,    55,     9,     0,     0,    49,    50,
      51,    52,    53,   138,     0,     0,     0,    80,    81,    79,
      82,     5,     0,    77,     0,     0,    39,    41,    84,     0,
      57,    40,     0,    55,    86,    78,    88,    26,    89,     0,
       0,     8,     6,     0,     0,    94,   139,     0,     0,   143,
      73,    75,    74,    76,     0,     0,    85,     0,    27,    87,
      26,     0,    62,    56,    26,    83,    26,    10,     7,   134,
     135,    80,    79,     0,    67,   136,    66,    68,    17,    17,
       0,    16,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    28,    42,    43,    54,    63,    58,     0,
      17,     0,     0,    55,     0,     0,     0,    26,     0,   144,
       0,     0,   111,    26,    72,     0,     0,     0,    65,     0,
     122,   120,   119,   121,   125,   124,    26,    71,    70,     0,
     147,   141,    12,    55,   142,     0,     0,   145,     0,   108,
     109,   110,     0,   113,     0,    24,    26,    26,    17,   140,
     137,    69,   129,   130,   131,   132,   123,     0,     0,    14,
      13,     0,    98,     0,   116,   112,    29,    44,     0,   133,
     126,   128,   127,    18,     0,     0,   146,   117,   118,   114,
       0,     0,    48,    61,    26,     0,   100,   115,    37,    38,
      26,    26,    26,    45,     0,    59,    17,    19,     0,    97,
       0,    95,    30,    46,    47,     0,     0,    22,     0,     0,
      17,    64,    60,     0,    20,   101,     0,     0,    90,    96,
      21,   105,     0,    55,   105,     0,   102,    99,    55,     0,
     107,   106,   103,   104,    92,    26,     0,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    14,    31,    52,    78,   112,   142,
     170,   113,    54,   194,   217,   224,    11,    32,    33,    34,
      68,   125,   191,   103,   200,    35,    36,    70,   104,   126,
     192,   203,    37,   105,    38,    39,    73,   127,   205,    74,
     206,    40,    83,    84,   111,   136,    41,    65,    42,    43,
     229,   233,   239,    44,    92,   220,   185,   211,   209,   225,
     236,   242,   152,    45,   122,   153,   189,   190,   137,   138,
     139,   166,   167,   168,   180,    86,    87,    46,    47,   160,
      48,    49,    50,   119,   141
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -144
static const yytype_int16 yypact[] =
{
      24,   -48,    39,    13,  -144,  -144,  -144,     6,    32,  -144,
      34,    80,  -144,    41,    99,    34,    58,    21,  -144,  -144,
    -144,  -144,  -144,  -144,    60,    51,    38,    54,  -144,   116,
    -144,  -144,   113,  -144,   100,   128,  -144,  -144,  -144,     1,
    -144,  -144,    -2,    11,  -144,  -144,  -144,    47,  -144,   143,
     155,  -144,  -144,   137,   158,  -144,  -144,    91,   150,  -144,
    -144,  -144,  -144,  -144,   129,   175,  -144,   147,  -144,  -144,
      81,   141,  -144,  -144,    47,  -144,    47,  -144,  -144,  -144,
    -144,  -144,  -144,   183,  -144,  -144,  -144,  -144,     6,     6,
     117,  -144,   142,   -27,    33,   170,   120,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   185,
       6,    -3,   186,    99,   186,   169,   146,    81,   127,  -144,
     -12,   173,  -144,    81,  -144,   168,   180,   196,  -144,   195,
    -144,  -144,  -144,  -144,  -144,  -144,    81,  -144,  -144,    71,
    -144,  -144,  -144,   105,  -144,   177,   -12,  -144,   184,  -144,
    -144,  -144,   133,  -144,   -12,  -144,    81,    81,     6,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,   161,    -8,  -144,
    -144,   -12,   187,   138,    15,  -144,  -144,  -144,   201,  -144,
    -144,  -144,  -144,  -144,   159,   204,  -144,  -144,  -144,  -144,
      33,    53,    20,   182,    81,   188,   163,  -144,  -144,  -144,
      81,    81,    81,  -144,   174,  -144,     6,  -144,   191,  -144,
     189,  -144,  -144,  -144,  -144,   178,   211,   214,   -12,   193,
       6,  -144,  -144,    58,  -144,  -144,   152,   176,  -144,  -144,
    -144,    23,   219,    27,    35,   188,  -144,  -144,    27,   179,
    -144,  -144,  -144,  -144,  -144,    81,   220,  -144
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,   213,   190,  -144,  -144,   -85,    86,
    -144,    -7,     7,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   -94,  -144,
    -144,  -144,  -144,  -143,  -144,  -144,  -144,  -144,  -144,   192,
    -144,  -144,    17,  -144,  -144,  -144,  -144,  -144,   -46,  -111,
    -144,  -144,    -6,     5,  -144,  -144,  -144,  -144,    -4,     2,
       3,  -144,  -140,  -144,    45,    84,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,    72,  -144,  -101,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,   125
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -94
static const yytype_int16 yytable[] =
{
      10,    85,   143,   117,   114,    75,   172,   130,   131,   132,
     133,   -11,   181,   176,   177,    15,   147,     5,   -25,     6,
      15,   187,   134,     3,   106,   129,   201,     1,    85,   234,
      85,   183,   143,     8,   -25,   161,   118,   179,   188,     4,
      13,   234,    71,   202,    72,    71,   235,    72,    18,    19,
      20,    21,    22,   149,   150,   151,    13,   212,   235,   120,
      12,   135,   121,    13,    18,    19,    20,    21,    22,    23,
      24,    85,    25,   178,   -93,   198,   199,   155,   226,    26,
      27,    28,    29,    30,    16,    23,    24,    53,    25,    17,
      85,   108,    55,   109,   226,    26,    27,    28,    29,    30,
     149,   150,   151,    79,    80,    56,   -25,   213,   214,    58,
     106,   106,   -15,    57,    59,    26,    81,    28,    82,    30,
      66,   216,   238,   162,   163,   164,   165,   238,    13,    67,
      60,    61,    62,    63,    13,    69,    18,    19,    20,    21,
      22,    64,    18,    19,    20,    21,    22,    88,   207,    26,
      81,    28,    82,    30,   106,   106,   106,    23,    24,    89,
      25,    90,    93,    23,    24,    91,    25,    26,    27,    28,
      29,    30,    94,    26,    27,    28,    29,    30,    97,    98,
      99,   100,   101,   102,    95,    96,   107,   110,   115,   116,
     123,   124,   128,   140,   145,   146,   148,   154,   156,   246,
     157,   158,   159,   171,   174,   173,   179,   186,   193,   195,
     184,   196,   204,   228,   210,   218,   215,   208,   222,   219,
     223,   221,   227,   231,   232,   237,   245,   247,    51,   169,
     230,   243,   244,    77,    76,   197,   240,   241,   175,   144,
     182
};

static const yytype_uint8 yycheck[] =
{
       7,    47,   113,    30,    89,     7,   146,    10,    11,    12,
      13,     0,    20,   156,   157,    10,   117,     4,     7,     6,
      15,     6,    25,    71,    70,   110,     6,     3,    74,     6,
      76,   171,   143,    27,     7,   136,    63,    45,    23,     0,
      29,     6,    44,    23,    46,    44,    23,    46,    37,    38,
      39,    40,    41,    65,    66,    67,    29,   200,    23,    26,
      28,    64,    29,    29,    37,    38,    39,    40,    41,    58,
      59,   117,    61,   158,    47,    22,    23,   123,   218,    68,
      69,    70,    71,    72,     4,    58,    59,    29,    61,    48,
     136,    74,    71,    76,   234,    68,    69,    70,    71,    72,
      65,    66,    67,    56,    57,    45,     7,   201,   202,    71,
     156,   157,     7,    62,    60,    68,    69,    70,    71,    72,
       7,   206,   233,    52,    53,    54,    55,   238,    29,    29,
      14,    15,    16,    17,    29,     7,    37,    38,    39,    40,
      41,    25,    37,    38,    39,    40,    41,     4,   194,    68,
      69,    70,    71,    72,   200,   201,   202,    58,    59,     4,
      61,    24,    71,    58,    59,     7,    61,    68,    69,    70,
      71,    72,    22,    68,    69,    70,    71,    72,    31,    32,
      33,    34,    35,    36,    55,    10,    45,     4,    71,    47,
      20,    71,     7,     7,    25,    49,    69,    24,    30,   245,
      20,     5,     7,    26,    71,    21,    45,    69,     7,    50,
      23,     7,    30,   220,    51,    24,    42,    29,     7,    30,
       6,    43,    29,    71,    48,     6,    47,     7,    15,   143,
     223,   235,   238,    43,    42,   190,   234,   234,   154,   114,
     168
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    74,    71,     0,     4,     6,    75,    27,    76,
      84,    89,    28,    29,    77,   126,     4,    48,    37,    38,
      39,    40,    41,    58,    59,    61,    68,    69,    70,    71,
      72,    78,    90,    91,    92,    98,    99,   105,   107,   108,
     114,   119,   121,   122,   126,   136,   150,   151,   153,   154,
     155,    77,    79,    29,    85,    71,    45,    62,    71,    60,
      14,    15,    16,    17,    25,   120,     7,    29,    93,     7,
     100,    44,    46,   109,   112,     7,   112,    78,    80,    56,
      57,    69,    71,   115,   116,   121,   148,   149,     4,     4,
      24,     7,   127,    71,    22,    55,    10,    31,    32,    33,
      34,    35,    36,    96,   101,   106,   121,    45,   115,   115,
       4,   117,    81,    84,    81,    71,    47,    30,    63,   156,
      26,    29,   137,    20,    71,    94,   102,   110,     7,    81,
      10,    11,    12,    13,    25,    64,   118,   141,   142,   143,
       7,   157,    82,   122,   157,    25,    49,   149,    69,    65,
      66,    67,   135,   138,    24,   121,    30,    20,     5,     7,
     152,   149,    52,    53,    54,    55,   144,   145,   146,    82,
      83,    26,   135,    21,    71,   138,   106,   106,    81,    45,
     147,    20,   147,   135,    23,   129,    69,     6,    23,   139,
     140,    95,   103,     7,    86,    50,     7,   137,    22,    23,
      97,     6,    23,   104,    30,   111,   113,   121,    29,   131,
      51,   130,   106,   101,   101,    42,    81,    87,    24,    30,
     128,    43,     7,     6,    88,   132,   135,    29,    84,   123,
      85,    71,    48,   124,     6,    23,   133,     6,   122,   125,
     132,   133,   134,   131,   125,    47,   121,     7
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
#line 227 "bison.y"
    { printf("Accepted Syntax!\n"); listDirectory(true); ;}
    break;

  case 18:
#line 269 "bison.y"
    { printf("Registering variable %s\n", (yyvsp[(3) - (6)].sval)); addVariable((yyvsp[(6) - (6)].sval), (yyvsp[(3) - (6)].sval)); ;}
    break;

  case 19:
#line 269 "bison.y"
    { variableAssignment((yyvsp[(3) - (8)].sval), (yyvsp[(8) - (8)].sval));}
    break;

  case 24:
#line 279 "bison.y"
    { variableAssignment((yyvsp[(1) - (5)].sval), (yyvsp[(5) - (5)].sval));;}
    break;

  case 26:
#line 285 "bison.y"
    { printf("starting operation\n");;}
    break;

  case 28:
#line 308 "bison.y"
    { pushOperation(quadGenerator, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 29:
#line 308 "bison.y"
    { printf("\tpushing LeftOp: %s\n", (yyvsp[(5) - (5)].sval)); pushLeftOperand(quadGenerator, (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 30:
#line 308 "bison.y"
    { printf("\tright operand added on line: %d\n", line_num); pushRightOperand(quadGenerator, (yyvsp[(8) - (8)].sval)); executeOperation();;}
    break;

  case 31:
#line 312 "bison.y"
    { (yyval.sval) = "+";  ;}
    break;

  case 32:
#line 313 "bison.y"
    { (yyval.sval) = "+";  ;}
    break;

  case 33:
#line 314 "bison.y"
    { (yyval.sval) = "-";  ;}
    break;

  case 34:
#line 315 "bison.y"
    { (yyval.sval) = "-";  ;}
    break;

  case 35:
#line 316 "bison.y"
    { (yyval.sval) = "*";  ;}
    break;

  case 36:
#line 317 "bison.y"
    { (yyval.sval) = "/";  ;}
    break;

  case 41:
#line 329 "bison.y"
    { pushOperation(quadGenerator, (yyvsp[(1) - (1)].sval));  ;}
    break;

  case 42:
#line 329 "bison.y"
    { finishMutationChain(); ;}
    break;

  case 43:
#line 332 "bison.y"
    { pushLeftOperand(quadGenerator, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 44:
#line 332 "bison.y"
    { pushRightOperand(quadGenerator, (yyvsp[(4) - (4)].sval));;}
    break;

  case 45:
#line 332 "bison.y"
    {executeMutation(); ;}
    break;

  case 49:
#line 341 "bison.y"
    { (yyval.sval) = "+="; ;}
    break;

  case 50:
#line 342 "bison.y"
    { (yyval.sval) = "-="; ;}
    break;

  case 51:
#line 343 "bison.y"
    { (yyval.sval) = "-="; ;}
    break;

  case 52:
#line 344 "bison.y"
    { (yyval.sval) = "+="; ;}
    break;

  case 53:
#line 345 "bison.y"
    { (yyval.sval) = "+="; ;}
    break;

  case 54:
#line 348 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 55:
#line 352 "bison.y"
    {printf("condition start on line %d\n", line_num);;}
    break;

  case 56:
#line 352 "bison.y"
    { finishConditional(); printf("condition finished, %d\n", line_num);}
    break;

  case 58:
#line 357 "bison.y"
    { finishConditionalChain(); startConditional(); ;}
    break;

  case 64:
#line 367 "bison.y"
    { startConditionElse(); ;}
    break;

  case 68:
#line 377 "bison.y"
    { pushLeftOperand(quadGenerator, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 69:
#line 377 "bison.y"
    { pushRightOperand(quadGenerator, (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 77:
#line 392 "bison.y"
    { (yyval.sval) = "operation"; setVarFlag(QuadrupleGenerator::fOP);   	   printf("received operation on line: %d\n", line_num); ;}
    break;

  case 78:
#line 393 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fFUNC); 	   printf("received function_call %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 79:
#line 394 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fID);   	   printf("received ID %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 80:
#line 395 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fINT);  	   printf("received INT %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 81:
#line 396 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fFLOAT);	   printf("received FLOAT %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 82:
#line 397 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fSTRING);   printf("received STRING %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 83:
#line 400 "bison.y"
    { printf("Statute exp finished: %d, '%s'\n", line_num, (yyvsp[(1) - (2)].sval)); ;}
    break;

  case 84:
#line 401 "bison.y"
    { ;}
    break;

  case 85:
#line 402 "bison.y"
    { ;}
    break;

  case 86:
#line 403 "bison.y"
    { ;}
    break;

  case 87:
#line 404 "bison.y"
    { ;}
    break;

  case 88:
#line 405 "bison.y"
    { ;}
    break;

  case 89:
#line 406 "bison.y"
    { ;}
    break;

  case 90:
#line 409 "bison.y"
    {printf("function variables finished\n");;}
    break;

  case 94:
#line 416 "bison.y"
    { enterLocalScope((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 95:
#line 416 "bison.y"
    { printf("function header finished\n");;}
    break;

  case 96:
#line 416 "bison.y"
    { 	printf("Function declaration: %d\n", line_num); 
																																		addFunction((yyvsp[(7) - (12)].sval), (yyvsp[(3) - (12)].sval)); 
																																		exitLocalScope();
																																	;}
    break;

  case 102:
#line 433 "bison.y"
    { addParameter((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval)); ;}
    break;

  case 108:
#line 448 "bison.y"
    { (yyval.sval) = "INT"; ;}
    break;

  case 109:
#line 449 "bison.y"
    { (yyval.sval) = "FLOAT"; ;}
    break;

  case 110:
#line 450 "bison.y"
    { (yyval.sval) = "STRING"; ;}
    break;

  case 111:
#line 471 "bison.y"
    { (yyval.sval) = "function"; ;}
    break;

  case 119:
#line 489 "bison.y"
    { pushOperation(quadGenerator, "<");  ;}
    break;

  case 120:
#line 490 "bison.y"
    { pushOperation(quadGenerator, ">");  ;}
    break;

  case 121:
#line 491 "bison.y"
    { pushOperation(quadGenerator, "!="); ;}
    break;

  case 122:
#line 492 "bison.y"
    { pushOperation(quadGenerator, "=="); ;}
    break;

  case 129:
#line 507 "bison.y"
    { pushOperation(quadGenerator, "<");  ;}
    break;

  case 130:
#line 508 "bison.y"
    { pushOperation(quadGenerator, ">");  ;}
    break;

  case 131:
#line 509 "bison.y"
    { pushOperation(quadGenerator, "!="); ;}
    break;

  case 132:
#line 512 "bison.y"
    { pushOperation(quadGenerator, "=="); ;}
    break;

  case 140:
#line 532 "bison.y"
    {printf("while end: %d\n", line_num);}
    break;

  case 147:
#line 548 "bison.y"
    {printf("For end: %d\n", line_num);}
    break;


/* Line 1267 of yacc.c.  */
#line 2155 "bison.tab.c"
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


#line 551 "bison.y"


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
