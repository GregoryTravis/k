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
     _TOK___u0 = 258,
     _TOK___u1 = 259,
     _TOK___u10 = 260,
     _TOK___u11 = 261,
     _TOK___u12 = 262,
     _TOK___u13 = 263,
     _TOK___u14 = 264,
     _TOK___u15 = 265,
     _TOK___u16 = 266,
     _TOK___u17 = 267,
     _TOK___u18 = 268,
     _TOK___u19 = 269,
     _TOK___u2 = 270,
     _TOK___u20 = 271,
     _TOK___u21 = 272,
     _TOK___u22 = 273,
     _TOK___u23 = 274,
     _TOK___u24 = 275,
     _TOK___u25 = 276,
     _TOK___u26 = 277,
     _TOK___u3 = 278,
     _TOK___u4 = 279,
     _TOK___u5 = 280,
     _TOK___u6 = 281,
     _TOK___u7 = 282,
     _TOK___u8 = 283,
     _TOK___u9 = 284,
     _TOK_boolconst = 285,
     _TOK_equals = 286,
     _TOK_genop = 287,
     _TOK_identifier = 288,
     _TOK_integer = 289,
     _TOK_level02 = 290,
     _TOK_level03 = 291,
     _TOK_level05 = 292,
     _TOK_level06 = 293,
     _TOK_level07 = 294,
     _TOK_level08 = 295,
     _TOK_level09 = 296,
     _TOK_level10 = 297,
     _TOK_level11 = 298,
     _TOK_nil = 299,
     _TOK_quotetick = 300,
     _TOK_string = 301
   };
#endif
/* Tokens.  */
#define _TOK___u0 258
#define _TOK___u1 259
#define _TOK___u10 260
#define _TOK___u11 261
#define _TOK___u12 262
#define _TOK___u13 263
#define _TOK___u14 264
#define _TOK___u15 265
#define _TOK___u16 266
#define _TOK___u17 267
#define _TOK___u18 268
#define _TOK___u19 269
#define _TOK___u2 270
#define _TOK___u20 271
#define _TOK___u21 272
#define _TOK___u22 273
#define _TOK___u23 274
#define _TOK___u24 275
#define _TOK___u25 276
#define _TOK___u26 277
#define _TOK___u3 278
#define _TOK___u4 279
#define _TOK___u5 280
#define _TOK___u6 281
#define _TOK___u7 282
#define _TOK___u8 283
#define _TOK___u9 284
#define _TOK_boolconst 285
#define _TOK_equals 286
#define _TOK_genop 287
#define _TOK_identifier 288
#define _TOK_integer 289
#define _TOK_level02 290
#define _TOK_level03 291
#define _TOK_level05 292
#define _TOK_level06 293
#define _TOK_level07 294
#define _TOK_level08 295
#define _TOK_level09 296
#define _TOK_level10 297
#define _TOK_level11 298
#define _TOK_nil 299
#define _TOK_quotetick 300
#define _TOK_string 301




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "kp.y"
{
  char *c;
  sexp s;
}
/* Line 1529 of yacc.c.  */
#line 146 "kp.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

