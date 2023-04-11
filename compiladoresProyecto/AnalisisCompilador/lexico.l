%{
#include <cerrno>
#include <stdio.h>
#include <string>
#include "driver.h"
#include "parser.tab.hh"
#undef yywrap
#define yywrap() 1
static yy::location loc;
#pragma warning(disable:4996)
%}
%option noyywrap nounput batch debug noinput
%option outfile="scanner.cpp"
DIGITO [0-9]+
LETRA [a-zA-ZñÑ]
ENTERO {DIGITO}
REAL {DIGITO}"."{DIGITO}
IDENTIFICADOR {LETRA}({LETRA}|{DIGITO}|"_")*
DIAGONAL "/"
COMENTARIO {DIAGONAL}{DIAGONAL}({LETRA}|{DIGITO}|"_"|" ")*
TEXTO "\""({LETRA}|{DIGITO}|"_"|\t|\r|\f|\n|" ")*"\""
FECHA "'"{DIGITO}{DIGITO}{DIAGONAL}{DIGITO}{DIGITO}{DIAGONAL}{DIGITO}{DIGITO}{DIGITO}{DIGITO}"'"
CARACTERES "'"{LETRA}"'"

DELIMITADOR [\t\r\f\n" "]

%%

"inicio"			{return yy::compilador_parser::make_INICIO(yytext,loc);}
"entero"			{return yy::compilador_parser::make_ENTERO(yytext,loc);}
"caracter"			{return yy::compilador_parser::make_CARACTER(yytext,loc);}
"decimal"			{return yy::compilador_parser::make_DECIMAL(yytext,loc);}
"fecha"				{return yy::compilador_parser::make_FECHA(yytext,loc);}
"procedimiento"			{return yy::compilador_parser::make_PROCEDIMIENTO(yytext,loc);}
"mostrar"			{return yy::compilador_parser::make_MOSTRAR(yytext,loc);}
"asignar"			{return yy::compilador_parser::make_ASIGNAR(yytext,loc);}
"si"				{return yy::compilador_parser::make_SI(yytext,loc);}
"sino"				{return yy::compilador_parser::make_SINO(yytext,loc);}
"mientras"			{return yy::compilador_parser::make_MIENTRAS(yytext,loc);}
"hacer"				{return yy::compilador_parser::make_HACER(yytext,loc);}
"para"				{return yy::compilador_parser::make_PARA(yytext,loc);}
"retornar"			{return yy::compilador_parser::make_RETORNAR(yytext,loc);}
"("				{return yy::compilador_parser::make_PARENTESISABIERTO(loc);}
")"				{return yy::compilador_parser::make_PARENTESISCERRADO(loc);}
"{"				{return yy::compilador_parser::make_LLAVEABIERTA(loc);}
"}"				{return yy::compilador_parser::make_LLAVECERRADA(loc);}
";"				{return yy::compilador_parser::make_PUNTOCOMA(loc);}
","				{return yy::compilador_parser::make_COMA(loc);}
"="				{return yy::compilador_parser::make_IGUAL(loc);}
"+"				{return yy::compilador_parser::make_SUMA(loc);}
"-"				{return yy::compilador_parser::make_RESTA(loc);}
"*"				{return yy::compilador_parser::make_MULTIPLICA(loc);}
"!"				{return yy::compilador_parser::make_DIFERENCIA(loc);}
"<"				{return yy::compilador_parser::make_MENOR(loc);}
">"				{return yy::compilador_parser::make_MAYOR(loc);}
{DIAGONAL}			{return yy::compilador_parser::make_DIVISION(loc);}
{IDENTIFICADOR}			{return yy::compilador_parser::make_IDENTIFICADOR(yytext,loc);}
{ENTERO}			{return yy::compilador_parser::make_NUMERO(strtol (yytext, NULL, 10),loc);}
{REAL}				{return yy::compilador_parser::make_REAL(strtod (yytext, NULL),loc);}
{FECHA}				{return yy::compilador_parser::make_DFECHA(yytext,loc);}
{CARACTERES}			{return yy::compilador_parser::make_DCARACTER(yytext,loc);}
{TEXTO}				{return yy::compilador_parser::make_TEXTO(yytext,loc);}
{COMENTARIO}			{return yy::compilador_parser::make_COMENTARIO(yytext,loc);}

{DELIMITADOR}   {}
.               {printf("ERROR LEXICO %s\n",yytext);}
<<EOF>>		{return yy::compilador_parser::make_FIN(loc);}
%%
void compilador_driver::iniciarScanner()
{
  yy_flex_debug = false;
  if(file.empty() || file == "-"){
    printf("No se encuentra el archivo de entrada");
    exit(1);
  }else{
    yyin = fopen (file.c_str (), "r");
  }
}
void compilador_driver::terminarScanner()
{
  fclose(yyin);
}
