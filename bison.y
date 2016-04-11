%{
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
	QuadrupleGenerator quadGenerator(&procDir);


	inline void enterLocalScope(char * cName) {
		procDir.enterLocalScope();
		printf("Entering Scope of: %s\n", cName);
	}

	inline void exitLocalScope() {
		procDir.enterGlobalScope();

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
%}

%union {
	int ival;
	float fval;
	char *sval;
}


// constants
%token PROGRAMA
%token COLON
%token SEMICOLON
%token COMA
%token DOT
%token OPENBRACKET
%token CLOSEBRACKET
%token EQUALS
%token GREATERTHAN
%token LESSTHAN
%token NOTEQUAL
%token PLUS
%token TIMES
%token MINUS
%token DIVIDEDBY
%token OPENPARENTH
%token CLOSEPARENTH

// spanish
%token A
%token AL
%token CON
%token Y
%token VARIABLE
%token ES
%token EL
%token RECUERDA
%token ESTO
%token LA
%token DE
%token SUMA
%token ADICION
%token RESTA
%token SUBSTRACCION
%token MULTIPLICACION
%token DIVISION
%token SUMALE
%token QUITALE
%token RESTALE
%token AGREGALE
%token INCREMENTALE
%token LO
%token CONTRARIO
%token ALMENOS
%token QUE
%token SI
%token REGRESA
%token FUNCION
%token UN
%token TOMA
%token ADENTRO
%token MENOR_SPA
%token MAYOR_SPA
%token DIFERENTE_SPA
%token IGUAL_SPA
%token VERDADERO
%token FALSO
%token MIENTRAS
%token HASTA
%token VECES
%token PARA
%token CADA
%token DEL
%token SEA
%token TYPEINT
%token TYPEFLOAT
%token TYPESTRING
%token LLAMA 





// terminal
%token <sval> INT
%token <sval> FLOAT
%token <sval> ID
%token <sval> STRING

%type<sval> expression
%type<sval> operation
%type<sval> operator_spa
%type<sval> function_call function_call_a
%type<sval> type

%%

	programa:
				PROGRAMA ID programa_a context_block { printf("Accepted Syntax!\n"); listDirectory(true); } ;

	programa_a:
				COLON
				| COMA;


	context_block:
				vars context_block_a context_block_b;

	context_block_a:
				function_declaration context_block_c;

	context_block_b:
				statute context_block_d;

	context_block_c:
				context_block_a
				| ;

	context_block_d:
				context_block_b
				| ;

	
	low_block:
				vars low_block_a ;

	low_block_a:
				statute low_block_b ;

	low_block_b:
				low_block_a
				| ;


	vars:
				var_dec_pre COLON var_assignment DOT
				| ;


	var_assignment:
				LA VARIABLE ID ES EL type expression var_assignment_a { addVariable($6, $3); } ; 

	var_assignment_a:
				COMA var_assignment ;
				| ;

	var_dec_pre:
				RECUERDA ESTO ;


	operation:
				operation_spa {$$ = "operation";}
				| operation_norm {$$ = "operation";} ;

	operation_norm:
				t operation_norm_a;

	operation_norm_a:
				PLUS operation_norm
				| MINUS operation_norm;

	t:
				f t_a;

	t_a:
				TIMES t
				| DIVIDEDBY t;

	f:
				ID
				| OPENPARENTH operation_norm CLOSEPARENTH;


	operation_spa:
				LA operator_spa DE operand concatenation_op operand ;


	operator_spa:
				SUMA { $$ = "SUMA"; }
				| ADICION { $$ = "ADICION"; }
				| RESTA { $$ = "RESTA"; }
				| SUBSTRACCION { $$ = "SUBSTRACCION"; }
				| MULTIPLICACION { $$ = "MULTIPLICACION"; }
				| DIVISION { $$ = "DIVISION"; } ; 

	concatenation_op:
				CON
				| Y ;


	mutation:
				mutation_spa
				| mutation_norm;

	mutation_spa:
				operator_spa_mod mutation_spa_a;

	mutation_spa_a:
				operand A operand mutation_spa_b;

	mutation_spa_b:
				COMA mutation_spa_a
				| Y mutation_spa_a
				| ;


	operator_spa_mod:
				SUMALE
				| QUITALE 
				| RESTALE
				| AGREGALE
				| INCREMENTALE ;

	operand:
				expression;


	condition:
				{printf("condition start on line %d\n", line_num)} block_condition { printf("condition finished, %d\n", line_num)}
				| condition_suffix ;


	block_condition:
				block_condition_pre declaration SEMICOLON low_block DOT block_condition_a

	block_condition_a:
				block_condition_else low_block DOT
				| ;
	block_condition_pre:
				SI 
				| ALMENOS QUE ;

	block_condition_else:
				DE LO CONTRARIO ;

	condition_suffix:
				expression block_condition_pre declaration DOT ;


	declaration:
				bool
				| dec ;
	dec:
				dec_operand dec_a dec_operand ;
	dec_a:
				dec_op_spa
				| dec_op ;

	mutation_norm:
				ID mut_norm_op EQUALS ID ;

	mut_norm_op:
				PLUS
				| MINUS
				| TIMES
				| DIVIDEDBY ;

	expression:
				operation  { $$ = $1; }
				| function_call  { $$ = $1; }
				| INT  { $$ = $1; }
				| FLOAT  { $$ = $1; }
				| STRING  { $$ = $1; }
				| ID { $$ = $1; } ;

	statute:
				expression DOT { printf("Statute exp finished: %d, '%s'\n", line_num, $1); }
				| condition { printf("Statute finished: %d\n", line_num)}  
				| var_assignment DOT { printf("Statute finished: %d\n", line_num)} 
				| function_declaration { printf("Statute finished: %d\n", line_num)}  
				| mutation DOT { printf("Statute finished: %d\n", line_num)}  
				| while { printf("Statute finished: %d\n", line_num)}  
				| for { printf("Statute finished: %d\n", line_num)} ;

	func_block:
				vars func_block_a REGRESA expression DOT ;

	func_block_a:
				statute func_block_a
				| ;

	function_declaration:
				LA FUNCION ID { enterLocalScope($3); } REGRESA UN type function_declaration_a DOT function_declaration_b func_block { 	printf("Function declaration: %d\n", line_num); 
																																		addFunction($7, $3); 
																																		exitLocalScope();
																																	} ;

	function_declaration_a: 
				Y TOMA func_param_dec
				| ;

	function_declaration_b:
				ADENTRO DE LA FUNCION COMA
				| ;

	func_param_dec:
				LA VARIABLE func_param_dec_a ;

	func_param_dec_a:
				type ID func_param_dec_b { addParameter($1, $2); };

	func_param_dec_b:
				COMA func_param_dec_c
				| Y func_param_dec
				| ;

	func_param_dec_c:
				func_param_dec_b
				| func_param_dec_a ;

	


	type:
				TYPEINT { $$ = "INT"; }
				| TYPEFLOAT { $$ = "FLOAT"; }
				| TYPESTRING { $$ = "STRING"; } ;  

	flotante: 
				TYPEFLOAT;
	fraccion:
				TYPEFLOAT;

	cadena:
				TYPESTRING;
	palabra:
				TYPESTRING;

	string:
				TYPESTRING;
	entera:
				TYPEINT ;
	entero:
				TYPEINT ;


	function_call:
				LLAMA ID CON function_call_a { $$ = "function"; };

	function_call_a:
				LA VARIABLE function_call_b 
				| EL function_call_b ;

	function_call_b:
				type ID function_call_c ;

	function_call_c:
				function_call_d function_call_a
				| ;

	function_call_d:
				COMA
				| Y ;

	dec_op:
				LESSTHAN
				| GREATERTHAN
				| NOTEQUAL
				| EQUALS ;

	dec_op_spa:
				dec_op_spa_a dec_op_spa_b ;

	dec_op_spa_a:
				SEA
				| ES ;

	dec_op_spa_b:
				dec_op_spa_c dec_op_spa_e
				| dec_op_spa_d dec_op_spa_e
				| dec_op_spa_d A ;

	dec_op_spa_c:
				MENOR_SPA
				| MAYOR_SPA
				| DIFERENTE_SPA ;

	dec_op_spa_d:
				 IGUAL_SPA ;

	dec_op_spa_e:
				QUE ;

	bool:
				VERDADERO
				| FALSO ;

	dec_operand:
				expression ;

	while:
				while_a declaration COLON low_block while_end ;

	while_a:
				MIENTRAS
				| HASTA QUE ;

	while_end:
				DOT {printf("while end: %d\n", line_num)} ;


	for:
				for_a COLON low_block for_end 
				| for_b COLON low_block for_end ;

	for_a:
				INT VECES ;
	for_b:
				PARA CADA ID for_c ;
	for_c:
				DE dec_operand
				| DEL INT AL INT ;

	for_end:
				DOT {printf("For end: %d\n", line_num)} ;


%%

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