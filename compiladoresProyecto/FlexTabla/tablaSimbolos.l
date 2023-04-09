%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <fstream>
	#include <iostream>
	#include <Windows.h>
	#include <string>
	#include <string.h>
 
	using namespace std;
	int nlinea;
	int yyval;
    int yylineno=0;	 
%}
%option c++
%option outfile="TablaSimbolos.cpp"
%option case-insensitive
%option yylineno
%option noyywrap

DIGITO [0-9]+
LETRA [a-zA-ZñÑ]
ENTERO {DIGITO}
REAL {DIGITO}"."{DIGITO}
IDENTIFICADOR {LETRA}({LETRA}|{DIGITO}|"_")*
DIAGONAL "/"
TEXTO "\""({LETRA}|{DIGITO}|"_"|\t|\r|\f|\n|" ")*"\""
SALTO [\n]
SEP [\t]
FECHA "'"{DIGITO}{DIGITO}{DIAGONAL}{DIGITO}{DIGITO}{DIAGONAL}{DIGITO}{DIGITO}{DIGITO}{DIGITO}"'"
CARACTERES "'"{LETRA}"'"
COMENTARIO {DIAGONAL}{DIAGONAL}({LETRA}|{DIGITO}|"_"|" ")*
DELIMITADOR [\t\r\f\n" "]

%{
int z = 1;
string dr = "C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\boody.txt";
%}

%%
{CARACTERES}			{return 34;}
{SALTO}					yylineno;
{ENTERO}				{ return 10;}
{REAL}					{ return 11;}
"inicio"				{ return 12;}
"entero"				{ return 12;}
"caracter"				{ return 12;}
"decimal"				{ return 12;}
"fecha"					{ return 12;}
"mostrar"				{ return 12;}
"asignar"				{ return 12;}
"si"					{ return 12;}
"sino"					{ return 12;}
"mientras"				{ return 12;}
{DIAGONAL}				{ return 14;}
"hacer_mientras"		{ return 12;}
"para"					{ return 12;}
"funcion"				{ return 12;}
"procedimiento"			{ return 12;}
{IDENTIFICADOR}			{ return 13;}
{FECHA}				    { return 33;}
{TEXTO} 				{ return 15;}
{COMENTARIO}			{ return 16;}
"+"						{ return 20;}
"-"						{ return 21;}
"*"						{ return 22;}
";"						{ return 23;}
","						{ return 24;}
"("						{ return 25;}
")"						{ return 26;}
"{"						{ return 27;}
"}"						{ return 28;}
"="						{ return 29;}
"<"						{ return 30;}
">"						{ return 31;}
"<="					{ return 32;}
">="					{ return 32;}
"=="					{ return 32;}
"!="					{ return 32;}
{DELIMITADOR}	{}
.				{return 99;}
%%