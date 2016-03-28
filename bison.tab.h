/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "bison.y"
{
	int ival;
	float fval;
	char *sval;
}
/* Line 1529 of yacc.c.  */
#line 199 "bison.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

