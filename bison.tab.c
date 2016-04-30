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
     TYPEVOID = 321,
     TYPEFLOAT = 322,
     TYPESTRING = 323,
     LLAMA = 324,
     INT = 325,
     FLOAT = 326,
     ID = 327,
     STRING = 328
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
#define TYPEVOID 321
#define TYPEFLOAT 322
#define TYPESTRING 323
#define LLAMA 324
#define INT 325
#define FLOAT 326
#define ID 327
#define STRING 328




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

	inline void finishWhile() {
		quadGenerator.finishWhile();
	}

	void functionReturn(QuadrupleGenerator& quadGenerator, char* expression) {
		string expre(expression);
		quadGenerator.functionReturn(expre);
	}

	void setReturnValue(QuadrupleGenerator& quadGenerator, char* retVal) {
		string returnVal(retVal);
		int returnValue = QuadrupleGenerator::fVOID;
		if (returnVal == "INT")
		{
			returnValue = QuadrupleGenerator::fINT;
		} else if(returnVal == "FLOAT") {
			returnValue = QuadrupleGenerator::fFLOAT;
		} else if(returnVal == "STRING") {
			returnValue = QuadrupleGenerator::fSTRING;
		} 
		procDir.setReturnTypeFlag(returnValue);
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
#line 152 "bison.y"
{
	int ival;
	float fval;
	char *sval;
}
/* Line 193 of yacc.c.  */
#line 399 "bison.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 412 "bison.tab.c"

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
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNRULES -- Number of states.  */
#define YYNSTATES  253

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

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
      65,    66,    67,    68,    69,    70,    71,    72,    73
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
     228,   229,   230,   238,   241,   242,   244,   245,   246,   247,
     248,   262,   266,   267,   273,   274,   278,   282,   285,   288,
     289,   291,   293,   295,   297,   299,   301,   306,   310,   313,
     317,   320,   321,   323,   325,   327,   329,   331,   333,   336,
     338,   340,   343,   346,   349,   351,   353,   355,   357,   359,
     361,   363,   365,   366,   373,   375,   378,   380,   385,   390,
     393,   398,   401,   406
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      75,     0,    -1,     3,    72,    76,    77,    -1,     4,    -1,
       6,    -1,    85,    78,    79,    -1,   129,    80,    -1,   123,
      81,    -1,    78,    -1,    -1,    79,    -1,    -1,    85,    83,
      -1,   123,    84,    -1,    83,    -1,    -1,    90,     4,    86,
       7,    -1,    -1,    -1,    -1,    29,    24,    72,    25,    26,
     139,    87,   122,    88,    89,    -1,     6,    86,    -1,    -1,
      27,    28,    -1,    72,    25,    55,    20,   122,    -1,    -1,
      -1,    93,    94,    -1,    -1,    -1,    29,    97,    95,    30,
     107,    96,    98,   107,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    22,    -1,    23,
      -1,   100,    -1,   120,    -1,    -1,   106,   101,   102,    -1,
      -1,    -1,   107,   103,    20,   107,   104,   105,    -1,     6,
     102,    -1,    23,   102,    -1,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,   122,    -1,    -1,   109,
     110,    -1,   115,    -1,    -1,   113,   116,   111,     5,    82,
       7,   112,    -1,   114,    82,     7,    -1,    -1,    46,    -1,
      44,    45,    -1,    30,    42,    43,    -1,   122,   113,   116,
       7,    -1,   152,    -1,   117,    -1,    -1,   153,   118,   119,
     153,    -1,   146,    -1,   145,    -1,    72,   121,    10,    72,
      -1,    14,    -1,    16,    -1,    15,    -1,    17,    -1,    92,
      -1,   140,    -1,    72,    -1,    70,    -1,    71,    -1,    73,
      -1,   122,     7,    -1,   108,    -1,    91,     7,    -1,   129,
      -1,    99,     7,    -1,   154,    -1,   158,    -1,    -1,    -1,
      85,   125,   127,    47,   128,   126,     7,    -1,   123,   127,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    29,    48,
      72,   130,    47,    49,   139,   131,   133,     7,   134,   132,
     124,    -1,    23,    50,   135,    -1,    -1,    51,    30,    29,
      48,     6,    -1,    -1,    29,    24,   136,    -1,   139,    72,
     137,    -1,     6,   138,    -1,    23,   135,    -1,    -1,   137,
      -1,   136,    -1,    65,    -1,    67,    -1,    68,    -1,    66,
      -1,    69,    72,    22,   141,    -1,    29,    24,   142,    -1,
      26,   142,    -1,   139,    72,   143,    -1,   144,   141,    -1,
      -1,     6,    -1,    23,    -1,    12,    -1,    11,    -1,    13,
      -1,    10,    -1,   147,   148,    -1,    64,    -1,    25,    -1,
     149,   151,    -1,   150,   151,    -1,   150,    20,    -1,    52,
      -1,    53,    -1,    54,    -1,    55,    -1,    45,    -1,    56,
      -1,    57,    -1,   122,    -1,    -1,   156,   116,   155,     4,
      82,   157,    -1,    58,    -1,    59,    45,    -1,     7,    -1,
     159,     4,    82,   162,    -1,   160,     4,    82,   162,    -1,
      70,    60,    -1,    61,    62,    72,   161,    -1,    30,   153,
      -1,    63,    70,    21,    70,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   252,   252,   255,   256,   260,   263,   266,   269,   270,
     273,   274,   278,   281,   284,   285,   289,   290,   294,   294,
     294,   297,   298,   301,   304,   305,   310,   310,   333,   333,
     333,   337,   338,   339,   340,   341,   342,   345,   346,   350,
     351,   354,   354,   357,   357,   357,   360,   361,   362,   366,
     367,   368,   369,   370,   373,   377,   377,   378,   382,   382,
     385,   386,   388,   389,   392,   395,   399,   400,   402,   402,
     404,   405,   408,   411,   412,   413,   414,   417,   418,   419,
     420,   421,   422,   425,   426,   427,   428,   429,   430,   431,
     434,   434,   434,   437,   438,   441,   442,   445,   445,   445,
     445,   451,   452,   455,   456,   459,   462,   465,   466,   467,
     470,   471,   477,   478,   479,   480,   501,   504,   505,   508,
     511,   512,   515,   516,   519,   520,   521,   522,   525,   528,
     529,   532,   533,   534,   537,   538,   539,   542,   545,   548,
     549,   552,   555,   555,   558,   559,   562,   566,   567,   570,
     572,   574,   575,   578
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
  "TYPEVOID", "TYPEFLOAT", "TYPESTRING", "LLAMA", "INT", "FLOAT", "ID",
  "STRING", "$accept", "programa", "programa_a", "context_block",
  "context_block_a", "context_block_b", "context_block_c",
  "context_block_d", "low_block", "low_block_a", "low_block_b", "vars",
  "var_assignment", "@1", "@2", "var_assignment_a", "var_dec_pre",
  "var_assignation", "operation", "@3", "operation_spa", "@4", "@5",
  "operator_spa", "concatenation_op", "mutation", "mutation_spa", "@6",
  "mutation_spa_a", "@7", "@8", "mutation_spa_b", "operator_spa_mod",
  "operand", "condition", "@9", "block_condition", "@10",
  "block_condition_a", "block_condition_pre", "block_condition_else",
  "condition_suffix", "declaration", "dec", "@11", "dec_a",
  "mutation_norm", "mut_norm_op", "expression", "statute", "func_block",
  "@12", "@13", "func_block_a", "func_block_b", "function_declaration",
  "@14", "@15", "@16", "function_declaration_a", "function_declaration_b",
  "func_param_dec", "func_param_dec_a", "func_param_dec_b",
  "func_param_dec_c", "type", "function_call", "function_call_a",
  "function_call_b", "function_call_c", "function_call_d", "dec_op",
  "dec_op_spa", "dec_op_spa_a", "dec_op_spa_b", "dec_op_spa_c",
  "dec_op_spa_d", "dec_op_spa_e", "bool", "dec_operand", "while", "@17",
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
     325,   326,   327,   328
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    78,    79,    80,    80,
      81,    81,    82,    83,    84,    84,    85,    85,    87,    88,
      86,    89,    89,    90,    91,    91,    93,    92,    95,    96,
      94,    97,    97,    97,    97,    97,    97,    98,    98,    99,
      99,   101,   100,   103,   104,   102,   105,   105,   105,   106,
     106,   106,   106,   106,   107,   109,   108,   108,   111,   110,
     112,   112,   113,   113,   114,   115,   116,   116,   118,   117,
     119,   119,   120,   121,   121,   121,   121,   122,   122,   122,
     122,   122,   122,   123,   123,   123,   123,   123,   123,   123,
     125,   126,   124,   127,   127,   128,   128,   130,   131,   132,
     129,   133,   133,   134,   134,   135,   136,   137,   137,   137,
     138,   138,   139,   139,   139,   139,   140,   141,   141,   142,
     143,   143,   144,   144,   145,   145,   145,   145,   146,   147,
     147,   148,   148,   148,   149,   149,   149,   150,   151,   152,
     152,   153,   155,   154,   156,   156,   157,   158,   158,   159,
     160,   161,   161,   162
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
       0,     0,     7,     2,     0,     1,     0,     0,     0,     0,
      13,     3,     0,     5,     0,     3,     3,     2,     2,     0,
       1,     1,     1,     1,     1,     1,     4,     3,     2,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     1,     2,     1,     4,     4,     2,
       4,     2,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     4,    17,     0,     2,
       0,     0,    23,     0,    55,     9,     0,     0,    49,    50,
      51,    52,    53,   144,     0,     0,     0,    80,    81,    79,
      82,     5,     0,    77,     0,     0,    39,    41,    84,     0,
      57,    40,     0,    55,    86,    78,    88,    26,    89,     0,
       0,     8,     6,     0,     0,    97,   145,     0,     0,   149,
      73,    75,    74,    76,     0,     0,    85,     0,    27,    87,
      26,     0,    62,    56,    26,    83,    26,    10,     7,   139,
     140,    80,    79,   142,    67,   141,    66,    68,    17,    17,
       0,    16,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    28,    42,    43,    54,    63,    58,     0,
       0,     0,     0,    55,     0,     0,     0,    26,     0,   150,
       0,     0,   116,    26,    72,     0,     0,     0,    65,    17,
     127,   125,   124,   126,   130,   129,    26,    71,    70,     0,
     153,   147,    12,    55,   148,     0,     0,   151,     0,   112,
     115,   113,   114,     0,   118,     0,    24,    26,    26,    17,
       0,    69,   134,   135,   136,   137,   128,     0,     0,    14,
      13,     0,    98,     0,   121,   117,    29,    44,     0,   146,
     143,   138,   131,   133,   132,    18,   102,   152,   122,   123,
     119,     0,     0,    48,    61,    26,     0,     0,   120,    37,
      38,    26,    26,    26,    45,     0,    59,    17,    19,     0,
     104,    30,    46,    47,     0,     0,    22,     0,   101,     0,
      99,    64,    60,     0,    20,     0,     0,    17,    21,   105,
       0,     0,    90,   100,   109,     0,    55,   109,     0,   106,
     103,    55,     0,   111,   110,   107,   108,    93,    26,    95,
      91,     0,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     9,    14,    31,    52,    78,   112,   142,
     170,   113,    54,   195,   216,   224,    11,    32,    33,    34,
      68,   125,   192,   103,   201,    35,    36,    70,   104,   126,
     193,   204,    37,   105,    38,    39,    73,   127,   206,    74,
     207,    40,    83,    84,   111,   136,    41,    65,    42,    43,
     233,   236,   251,   242,   250,    44,    92,   186,   227,   197,
     220,   218,   229,   239,   245,   153,    45,   122,   154,   190,
     191,   137,   138,   139,   166,   167,   168,   182,    86,    87,
      46,   110,    47,   180,    48,    49,    50,   119,   141
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -151
static const yytype_int16 yypact[] =
{
      24,   -55,    35,    17,  -151,  -151,  -151,    18,    41,  -151,
      46,    85,  -151,    43,   100,    46,    63,    21,  -151,  -151,
    -151,  -151,  -151,  -151,    64,    48,    42,    55,  -151,   117,
    -151,  -151,   115,  -151,    94,   119,  -151,  -151,  -151,    12,
    -151,  -151,    11,     9,  -151,  -151,  -151,   124,  -151,   120,
     132,  -151,  -151,   103,   121,  -151,  -151,    76,   138,  -151,
    -151,  -151,  -151,  -151,   107,   153,  -151,   151,  -151,  -151,
      81,   129,  -151,  -151,   124,  -151,   124,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,    18,    18,
      96,  -151,   145,   -24,    15,   146,   126,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   192,
     196,     0,   194,   100,   194,   178,   155,    81,   135,  -151,
     123,   182,  -151,    81,  -151,   177,   188,   204,  -151,    18,
    -151,  -151,  -151,  -151,  -151,  -151,    81,  -151,  -151,     8,
    -151,  -151,  -151,   106,  -151,   184,   123,  -151,   190,  -151,
    -151,  -151,  -151,   140,  -151,   123,  -151,    81,    81,    18,
     206,  -151,  -151,  -151,  -151,  -151,  -151,   169,    -5,  -151,
    -151,   123,  -151,   147,    -1,  -151,  -151,  -151,   208,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,   193,  -151,  -151,  -151,
    -151,    15,    30,    13,   189,    81,   168,   214,  -151,  -151,
    -151,    81,    81,    81,  -151,   180,  -151,    18,  -151,   195,
     172,  -151,  -151,  -151,   183,   218,   221,   205,  -151,   198,
    -151,  -151,  -151,    63,  -151,   123,   201,    18,  -151,  -151,
     159,   185,  -151,  -151,    14,   226,    47,    36,   195,  -151,
    -151,    47,   187,  -151,  -151,  -151,  -151,  -151,    27,  -151,
    -151,   228,  -151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -151,  -151,   222,   197,  -151,  -151,   -86,    93,
    -151,    -7,    19,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -137,  -151,
    -151,  -151,  -151,  -150,  -151,  -151,  -151,  -151,  -151,   199,
    -151,  -151,    -2,  -151,  -151,  -151,  -151,  -151,   -46,  -111,
    -151,  -151,  -151,    -3,  -151,    16,  -151,  -151,  -151,  -151,
    -151,     1,     6,     7,  -151,  -142,  -151,    54,    91,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,    79,  -151,  -103,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   134
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -97
static const yytype_int16 yytable[] =
{
      10,    85,   143,   114,   172,   188,   117,   176,   177,   -11,
     130,   131,   132,   133,   147,   183,   -25,     3,    75,   202,
     237,     5,   189,     6,   106,   134,    15,     1,    85,   185,
      85,    15,   143,   161,   -96,     4,   203,   238,    13,   118,
     181,   120,   237,   160,   121,     8,    18,    19,    20,    21,
      22,   211,   199,   200,   -25,    71,    71,    72,    72,   238,
     162,   163,   164,   165,   135,   212,   213,    23,    24,    12,
      25,    85,   108,   178,   109,    13,    13,   156,    26,    27,
      28,    29,    30,   230,    18,    19,    20,    21,    22,    16,
      85,    17,    53,    55,   -94,   230,    26,    81,    28,    82,
      30,   149,   150,   151,   152,    23,    24,   -25,    25,    56,
      57,   106,   106,   -15,    58,    59,    26,    27,    28,    29,
      30,   215,    66,    67,    88,   241,    69,    90,    91,    13,
     241,    60,    61,    62,    63,    13,    89,    18,    19,    20,
      21,    22,    64,    18,    19,    20,    21,    22,    93,   208,
      26,    81,    28,    82,    30,   106,   106,   106,    23,    24,
      94,    25,    95,    96,    23,    24,   123,    25,   115,    26,
      27,    28,    29,    30,   107,    26,    27,    28,    29,    30,
      79,    80,    97,    98,    99,   100,   101,   102,   149,   150,
     151,   152,   116,    26,    81,    28,    82,    30,   124,   128,
     129,   140,   249,   145,   146,   148,   155,   157,   158,   159,
     171,   173,   174,   179,   181,   194,   196,   187,   209,   205,
     232,   210,   214,   219,   217,   222,   221,   223,   226,   225,
     231,   234,   240,   235,   248,   252,   169,    51,   247,   246,
      77,    76,   228,   243,   244,   198,   175,   184,   144
};

static const yytype_uint8 yycheck[] =
{
       7,    47,   113,    89,   146,     6,    30,   157,   158,     0,
      10,    11,    12,    13,   117,    20,     7,    72,     7,     6,
       6,     4,    23,     6,    70,    25,    10,     3,    74,   171,
      76,    15,   143,   136,     7,     0,    23,    23,    29,    63,
      45,    26,     6,   129,    29,    27,    37,    38,    39,    40,
      41,   201,    22,    23,     7,    44,    44,    46,    46,    23,
      52,    53,    54,    55,    64,   202,   203,    58,    59,    28,
      61,   117,    74,   159,    76,    29,    29,   123,    69,    70,
      71,    72,    73,   225,    37,    38,    39,    40,    41,     4,
     136,    48,    29,    72,    47,   237,    69,    70,    71,    72,
      73,    65,    66,    67,    68,    58,    59,     7,    61,    45,
      62,   157,   158,     7,    72,    60,    69,    70,    71,    72,
      73,   207,     7,    29,     4,   236,     7,    24,     7,    29,
     241,    14,    15,    16,    17,    29,     4,    37,    38,    39,
      40,    41,    25,    37,    38,    39,    40,    41,    72,   195,
      69,    70,    71,    72,    73,   201,   202,   203,    58,    59,
      22,    61,    55,    10,    58,    59,    20,    61,    72,    69,
      70,    71,    72,    73,    45,    69,    70,    71,    72,    73,
      56,    57,    31,    32,    33,    34,    35,    36,    65,    66,
      67,    68,    47,    69,    70,    71,    72,    73,    72,     7,
       4,     7,   248,    25,    49,    70,    24,    30,    20,     5,
      26,    21,    72,     7,    45,     7,    23,    70,    50,    30,
     227,     7,    42,    51,    29,     7,    43,     6,    30,    24,
      29,    72,     6,    48,    47,     7,   143,    15,   241,   238,
      43,    42,   223,   237,   237,   191,   155,   168,   114
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    75,    72,     0,     4,     6,    76,    27,    77,
      85,    90,    28,    29,    78,   129,     4,    48,    37,    38,
      39,    40,    41,    58,    59,    61,    69,    70,    71,    72,
      73,    79,    91,    92,    93,    99,   100,   106,   108,   109,
     115,   120,   122,   123,   129,   140,   154,   156,   158,   159,
     160,    78,    80,    29,    86,    72,    45,    62,    72,    60,
      14,    15,    16,    17,    25,   121,     7,    29,    94,     7,
     101,    44,    46,   110,   113,     7,   113,    79,    81,    56,
      57,    70,    72,   116,   117,   122,   152,   153,     4,     4,
      24,     7,   130,    72,    22,    55,    10,    31,    32,    33,
      34,    35,    36,    97,   102,   107,   122,    45,   116,   116,
     155,   118,    82,    85,    82,    72,    47,    30,    63,   161,
      26,    29,   141,    20,    72,    95,   103,   111,     7,     4,
      10,    11,    12,    13,    25,    64,   119,   145,   146,   147,
       7,   162,    83,   123,   162,    25,    49,   153,    70,    65,
      66,    67,    68,   139,   142,    24,   122,    30,    20,     5,
      82,   153,    52,    53,    54,    55,   148,   149,   150,    83,
      84,    26,   139,    21,    72,   142,   107,   107,    82,     7,
     157,    45,   151,    20,   151,   139,   131,    70,     6,    23,
     143,   144,    96,   104,     7,    87,    23,   133,   141,    22,
      23,    98,     6,    23,   105,    30,   112,   114,   122,    50,
       7,   107,   102,   102,    42,    82,    88,    29,   135,    51,
     134,    43,     7,     6,    89,    24,    30,   132,    86,   136,
     139,    29,    85,   124,    72,    48,   125,     6,    23,   137,
       6,   123,   127,   136,   137,   138,   135,   127,    47,   122,
     128,   126,     7
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
#line 252 "bison.y"
    { printf("Accepted Syntax!\n"); listDirectory(true); ;}
    break;

  case 18:
#line 294 "bison.y"
    { printf("Registering variable %s\n", (yyvsp[(3) - (6)].sval)); addVariable((yyvsp[(6) - (6)].sval), (yyvsp[(3) - (6)].sval)); ;}
    break;

  case 19:
#line 294 "bison.y"
    { variableAssignment((yyvsp[(3) - (8)].sval), (yyvsp[(8) - (8)].sval));}
    break;

  case 24:
#line 304 "bison.y"
    { variableAssignment((yyvsp[(1) - (5)].sval), (yyvsp[(5) - (5)].sval));;}
    break;

  case 26:
#line 310 "bison.y"
    { printf("starting operation\n");;}
    break;

  case 28:
#line 333 "bison.y"
    { pushOperation(quadGenerator, (yyvsp[(2) - (2)].sval)); ;}
    break;

  case 29:
#line 333 "bison.y"
    { printf("\tpushing LeftOp: %s\n", (yyvsp[(5) - (5)].sval)); pushLeftOperand(quadGenerator, (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 30:
#line 333 "bison.y"
    { printf("\tright operand added on line: %d\n", line_num); pushRightOperand(quadGenerator, (yyvsp[(8) - (8)].sval)); executeOperation();;}
    break;

  case 31:
#line 337 "bison.y"
    { (yyval.sval) = "+";  ;}
    break;

  case 32:
#line 338 "bison.y"
    { (yyval.sval) = "+";  ;}
    break;

  case 33:
#line 339 "bison.y"
    { (yyval.sval) = "-";  ;}
    break;

  case 34:
#line 340 "bison.y"
    { (yyval.sval) = "-";  ;}
    break;

  case 35:
#line 341 "bison.y"
    { (yyval.sval) = "*";  ;}
    break;

  case 36:
#line 342 "bison.y"
    { (yyval.sval) = "/";  ;}
    break;

  case 41:
#line 354 "bison.y"
    { pushOperation(quadGenerator, (yyvsp[(1) - (1)].sval));  ;}
    break;

  case 42:
#line 354 "bison.y"
    { finishMutationChain(); ;}
    break;

  case 43:
#line 357 "bison.y"
    { pushLeftOperand(quadGenerator, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 44:
#line 357 "bison.y"
    { pushRightOperand(quadGenerator, (yyvsp[(4) - (4)].sval));;}
    break;

  case 45:
#line 357 "bison.y"
    {executeMutation(); ;}
    break;

  case 49:
#line 366 "bison.y"
    { (yyval.sval) = "+="; ;}
    break;

  case 50:
#line 367 "bison.y"
    { (yyval.sval) = "-="; ;}
    break;

  case 51:
#line 368 "bison.y"
    { (yyval.sval) = "-="; ;}
    break;

  case 52:
#line 369 "bison.y"
    { (yyval.sval) = "+="; ;}
    break;

  case 53:
#line 370 "bison.y"
    { (yyval.sval) = "+="; ;}
    break;

  case 54:
#line 373 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 55:
#line 377 "bison.y"
    {printf("condition start on line %d\n", line_num);;}
    break;

  case 56:
#line 377 "bison.y"
    { finishConditional(); printf("condition finished, %d\n", line_num);}
    break;

  case 58:
#line 382 "bison.y"
    { finishConditionalChain(); startConditional(); ;}
    break;

  case 64:
#line 392 "bison.y"
    { startConditionElse(); ;}
    break;

  case 68:
#line 402 "bison.y"
    { pushLeftOperand(quadGenerator, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 69:
#line 402 "bison.y"
    { pushRightOperand(quadGenerator, (yyvsp[(4) - (4)].sval)); ;}
    break;

  case 77:
#line 417 "bison.y"
    { (yyval.sval) = "operation"; setVarFlag(QuadrupleGenerator::fOP);   	   printf("received operation on line: %d\n", line_num); ;}
    break;

  case 78:
#line 418 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fFUNC); 	   printf("received function_call %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 79:
#line 419 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fID);   	   printf("received ID %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 80:
#line 420 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fINT);  	   printf("received INT %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 81:
#line 421 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fFLOAT);	   printf("received FLOAT %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 82:
#line 422 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); 			setVarFlag(QuadrupleGenerator::fSTRING);   printf("received STRING %s on line: %d\n", (yyvsp[(1) - (1)].sval), line_num); ;}
    break;

  case 83:
#line 425 "bison.y"
    { printf("Statute exp finished: %d, '%s'\n", line_num, (yyvsp[(1) - (2)].sval)); ;}
    break;

  case 84:
#line 426 "bison.y"
    { ;}
    break;

  case 85:
#line 427 "bison.y"
    { ;}
    break;

  case 86:
#line 428 "bison.y"
    { ;}
    break;

  case 87:
#line 429 "bison.y"
    { ;}
    break;

  case 88:
#line 430 "bison.y"
    { ;}
    break;

  case 89:
#line 431 "bison.y"
    { ;}
    break;

  case 90:
#line 434 "bison.y"
    {printf("function variables finished\n");;}
    break;

  case 91:
#line 434 "bison.y"
    { functionReturn(quadGenerator, (yyvsp[(5) - (5)].sval)); ;}
    break;

  case 95:
#line 441 "bison.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 96:
#line 442 "bison.y"
    { (yyval.sval) = ""; ;}
    break;

  case 97:
#line 445 "bison.y"
    { enterLocalScope((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 98:
#line 445 "bison.y"
    {  setReturnValue(quadGenerator, (yyvsp[(7) - (7)].sval)); ;}
    break;

  case 99:
#line 445 "bison.y"
    { printf("function header finished\n");;}
    break;

  case 100:
#line 445 "bison.y"
    { 	printf("Function declaration: %d\n", line_num); 
																																		addFunction((yyvsp[(7) - (13)].sval), (yyvsp[(3) - (13)].sval)); 
																																		exitLocalScope();
																																	;}
    break;

  case 106:
#line 462 "bison.y"
    { addParameter((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval)); ;}
    break;

  case 112:
#line 477 "bison.y"
    { (yyval.sval) = "INT";    ;}
    break;

  case 113:
#line 478 "bison.y"
    { (yyval.sval) = "FLOAT";  ;}
    break;

  case 114:
#line 479 "bison.y"
    { (yyval.sval) = "STRING"; ;}
    break;

  case 115:
#line 480 "bison.y"
    { (yyval.sval) = "VOID";   ;}
    break;

  case 116:
#line 501 "bison.y"
    { (yyval.sval) = "function"; ;}
    break;

  case 124:
#line 519 "bison.y"
    { pushOperation(quadGenerator, "<");  ;}
    break;

  case 125:
#line 520 "bison.y"
    { pushOperation(quadGenerator, ">");  ;}
    break;

  case 126:
#line 521 "bison.y"
    { pushOperation(quadGenerator, "!="); ;}
    break;

  case 127:
#line 522 "bison.y"
    { pushOperation(quadGenerator, "=="); ;}
    break;

  case 134:
#line 537 "bison.y"
    { pushOperation(quadGenerator, "<");  ;}
    break;

  case 135:
#line 538 "bison.y"
    { pushOperation(quadGenerator, ">");  ;}
    break;

  case 136:
#line 539 "bison.y"
    { pushOperation(quadGenerator, "!="); ;}
    break;

  case 137:
#line 542 "bison.y"
    { pushOperation(quadGenerator, "=="); ;}
    break;

  case 142:
#line 555 "bison.y"
    { finishConditionalChain(); startConditional(); ;}
    break;

  case 143:
#line 555 "bison.y"
    { finishWhile(); ;}
    break;

  case 144:
#line 558 "bison.y"
    { ;}
    break;

  case 145:
#line 559 "bison.y"
    {;}
    break;

  case 146:
#line 562 "bison.y"
    {printf("while end: %d\n", line_num);}
    break;

  case 153:
#line 578 "bison.y"
    {printf("For end: %d\n", line_num);}
    break;


/* Line 1267 of yacc.c.  */
#line 2235 "bison.tab.c"
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


#line 581 "bison.y"


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
