%{
	#include <stdio.h>
	#include <stdlib.h>
%}

%option c++
%option outfile="Scanner.cpp"
%option case-insensitive
%option noyywrap

DIGITO [0-9]+
LETRA [a-zA-ZñÑ]
ENTERO {DIGITO}
REAL {DIGITO}"."{DIGITO}
IDENTIFICADOR {LETRA}({LETRA}|{DIGITO}|"_")*
DIAGONAL "/"
COMENTARIO {DIAGONAL}{DIAGONAL}({LETRA}|{DIGITO}|"_"|" ")*
TEXTO "\""({LETRA}|{DIGITO}|"_"|\t|\r|\f|\n|" ")*"\""


DELIMITADOR [\t\r\f\n" "]

%%

{ENTERO}			{printf("Numero entero %s\n",yytext);}
{REAL}				{printf("Numero real   %s\n",yytext);}
"inicio"			{printf("Palabra Reservada %s\n",yytext);}
"entero"			{printf("Palabra Reservada %s\n",yytext);}
"caracter"			{printf("Palabra Reservada %s\n",yytext);}
"decimal"			{printf("Palabra Reservada %s\n",yytext);}
"fecha"				{printf("Palabra Reservada %s\n",yytext);}
"mostrar"			{printf("Palabra Reservada %s\n",yytext);}
"asignar"			{printf("Palabra Reservada %s\n",yytext);}
"si"				{printf("Palabra Reservada %s\n",yytext);}
"sino"				{printf("Palabra Reservada %s\n",yytext);}
"mientras"			{printf("Palabra Reservada %s\n",yytext);}
"hacer_mientras"		{printf("Palabra Reservada %s\n",yytext);}
"para"				{printf("Palabra Reservada %s\n",yytext);}
"funcion"			{printf("Palabra Reservada %s\n",yytext);}
"procedimiento"			{printf("Palabra Reservada %s\n",yytext);}
{IDENTIFICADOR}			{printf("Identificador %s\n",yytext);}
{DIAGONAL}			{printf("Signo Division %s\n",yytext);}
{TEXTO} 			{printf("Texto %s\n",yytext);}
{COMENTARIO}			{printf("Comentario %s\n",yytext);}
"+"				{printf("Signo Suma %s\n",yytext);}
"-"				{printf("Signo Resta %s\n",yytext);}
"*"				{printf("Signo Multiplicacion %s\n",yytext);}
";"				{printf("Punto y coma %s\n",yytext);}
","				{printf("Coma %s\n",yytext);}
"("				{printf("Parentisis Abierto %s\n",yytext);}
")"				{printf("Parentesis Cerrado  %s\n",yytext);}
"{"				{printf("Llave Abierta %s\n",yytext);}
"}"				{printf("Llave Cerrada %s\n",yytext);}
"="				{printf("Signo igualacion %s\n",yytext);}
"<"				{printf("Operador logico %s\n",yytext);}
">"				{printf("Operador logico %s\n",yytext);}
"<="				{printf("Operador logico %s\n",yytext);}
">="				{printf("Operador logico %s\n",yytext);}
"=="				{printf("Operador logico %s\n",yytext);}
"!="				{printf("Operador logico %s\n",yytext);}
			

{DELIMITADOR}	{}
.				{printf("ERROR LEXICO\n");}
				
%%
