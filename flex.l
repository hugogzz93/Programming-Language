%{
	#include <iostream>
	#include <stdio.h>
	using namespace std;
	#define YY_DECL extern "C" int yylex()

	#include "bison.tab.h"
	int line_num = 1;
%}
%%

"programa"					{ return PROGRAMA; }
 ":" 					{ return COLON; }
 ";" 					{ return SEMICOLON; }
 "," 					{ return COMA; }
 "." 					{ return DOT; }
 "(" 					{ return OPENBRACKET; }
 ")" 					{ return CLOSEBRACKET; }
 "=" 					{ return EQUALS; }
 ">" 					{ return GREATERTHAN; }
 "<" 					{ return LESSTHAN; }
 "!=" 					{ return NOTEQUAL; }
 "+" 					{ return PLUS; }
 "*" 					{ return TIMES; }
 "-" 					{ return MINUS; }
 "/" 					{ return DIVIDEDBY; }
 "{" 					{ return OPENPARENTH; }
 "}" 					{ return CLOSEPARENTH; }

 "variable"					{ return VARIABLE; }
 "recuerda"					{ return RECUERDA; }
 "esto"						{ return ESTO; }
 "suma"						{ return SUMA; }
 "adicion"					{ return ADICION; }
 "resta"					{ return RESTA; }
 "substracction"			{ return SUBSTRACCION; }
 "multiplicacion"			{ return MULTIPLICACION; }
 "division"					{ return DIVISION; }
 "sumale"					{ return SUMALE; }
 "Sumale"					{ return SUMALE; }
 "quitale"					{ return QUITALE; }
 "restale"					{ return RESTALE; }
 "agregale"					{ return AGREGALE; }
 "incrementale"				{ return INCREMENTALE; }
 "contrario"				{ return CONTRARIO; }
 "almenos"					{ return ALMENOS; }
 "regresa"					{ return REGRESA; }
 "Regresa"					{ return REGRESA; }
 "funcion"					{ return FUNCION; }
 "toma"						{ return TOMA; }
 "adentro"					{ return ADENTRO; }
 "Adentro"					{ return ADENTRO; }
 "menor"					{ return MENOR_SPA; }
 "mayor"					{ return MAYOR_SPA; }
 "diferente"				{ return DIFERENTE_SPA; }
 "igual"					{ return IGUAL_SPA; }
 "verdadero"				{ return VERDADERO; }
 "falso"				    { return FALSO; }
 "mientras"					{ return MIENTRAS; }
 "Mientras"					{ return MIENTRAS; }
 "entero"					{ return TYPEINT;}
 "entera"					{ return TYPEINT;}
 "fraccion"					{ return TYPEFLOAT; }
 "flotante"					{ return TYPEFLOAT; }
 "cadena"					{ return TYPESTRING; }
 "llama"					{ return LLAMA; }
 "Llama"					{ return LLAMA; }
 "palabra"					{ return TYPESTRING; }
 "string"					{ return TYPESTRING; }
 "hasta"					{ return HASTA; }
 "veces"					{ return VECES; }
 "para"						{ return PARA; }
 "Para"						{ return PARA; }
 "cada"						{ return CADA; }
 "del"						{ return DEL; }
 "con"						{ return CON; }
 "sea"						{ return SEA; }
 "que"						{ return QUE; }
 "si"						{ return SI; }
 "Si"						{ return SI; }
 "un"						{ return UN; }
 "es"						{ return ES; }
 "lo"						{ return LO; }
 "el"						{ return EL; }
 "al"						{ return AL; }
 "de"						{ return DE; }
 "De"						{ return DE; }
 "la"						{ return LA; }
 "La"						{ return LA; }
 "a"						{ return A; }
 "y"						{ return Y; }


[\n]                        { line_num++; }
[ \t\n]						{ ; }
[0-9]+\.[0-9]+				{ yylval.fval = atof(yytext); return FLOAT; }
[0-9]+						{ yylval.ival = atoi(yytext); return INT; }
[a-zA-Z](_?([a-zA-Z]|[0-9]))*   { yylval.sval = strdup(yytext); return ID; }
\"(\\.|[^\\"])*\"               { yylval.sval = strdup(yytext); return STRING; }
.							{ ; }
%%

int yywrap() { return 1; }
