%skeleton "lalr1.cc" /* -*- C++ -*- */
%require "3.8.2"
%defines
%define api.parser.class {compilador_parser}
%define api.token.constructor
%define api.namespace {yy}
%define api.value.type variant
%define parse.assert
%code requires
{
#include <string>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <stdio.h> 
#include <string.h>
using namespace std;
class compilador_driver;
}
%param { compilador_driver& driver }
%locations
%define parse.trace
%define parse.error verbose
%code
{
#include "driver.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>
}

%define api.token.prefix {TOK_}

//Listadode Terminales
%token <std::string>INICIO "inicio"
%token <std::string>ENTERO "entero"
%token <std::string>CARACTER "caracter"
%token <std::string>DECIMAL "decimal"
%token <std::string>FECHA "fecha"
%token <std::string>PROCEDIMIENTO "procedimiento"
%token <std::string>MOSTRAR "mostrar"
%token <std::string>ASIGNAR "asignar"
%token <std::string>SI "si"
%token <std::string>SINO "sino"
%token <std::string>HACER "hacer"
%token <std::string>MIENTRAS "mientras"
%token <std::string>PARA "para"
%token <std::string>RETORNAR "retornar"

%token PARENTESISABIERTO "("
%token PARENTESISCERRADO ")"
%token LLAVEABIERTA "{"
%token LLAVECERRADA "}"
%token PUNTOCOMA ";"
%token COMA ","
%token IGUAL "="
%token SUMA "+"
%token RESTA "-"
%token MULTIPLICA "*"
%token DIFERENCIA "!"
%token MENOR "<"
%token MAYOR ">"

%token DIVISION "/" 
%token <std::string>IDENTIFICADOR "id"
%token <int>NUMERO "num"
%token <float>REAL "dec"
%token <std::string>DFECHA "fec"
%token <std::string>DCARACTER "car"
%token <std::string>TEXTO "texto"
%token <std::string>COMENTARIO "comentario"
%token FIN 0 "eof"

//Listado de No Terminales
 
%type B
%type C
%type I
%type F
%type D
%type E
%type F
%type G
%type R
%type K
%type H
%type Q
%type J
%type L
%type M
%type N
%type O

 
%printer { yyo << $$; } <*>;

%%
 
 

I: "inicio" "(" ")" "{" M "}"	 
   | B "inicio" "(" ")" "{" M "}"
   | "inicio" "(" ")" "{" M "}" B
   | B "inicio" "(" ")" "{" M "}" B;

B: "procedimiento" "id" "(" D ")" "{" M "}"
   | "procedimiento" "id" "(" D ")" "{" M "}" B
   | F;

F: C "id" "(" D ")" "{" M "}" B
   | C "id" "(" D ")" "{" M "}";

C: "entero"
   |"caracter"
   |"decimal"
   |"fecha";

D: E
   |
   ;

E: C "id" "," E
   |C "id";

R: C P ";";

P: "id" "=" G "," P
   |"id" "," P
   |"id" "=" G
   |"id";

G: |"car"
   |"fec"
   |"id"
   |"id" "+" "+"
   |"+" "+" "id"
   |"id" "-" "-"
   |"-" "-" "id"
   |"id" "(" AA ")"
   |K;

K:  K "+" H
   |K "-" H
   |H;

H: H "*" Q
  |H "/" Q
  |Q;

Q: J
  |"-" J;

J: "num"
   |"dec"
   |"(" T ")";

L: "mostrar" "(" O ")" ";"
   |"asignar" "(" C "," "id" ")" ";";

O: G "," O
   |"texto" "," O
   |"texto"
   |G;

M: N M
   |N;

N: R
   |L
   |"comentario"
   |S
   |U
   |V
   |W
   |X
   |Z
   |AD
   |AF;

S: "si" "(" T ")" "{" M "}"
   |"si" "(" T ")" "{" M "}" "sino" "{" M "}";


T: G "=" "=" G
   |G "!" "=" G
   |G "<" G
   |G ">" G
   |G "<" "=" G
   |G ">" "=" G;

U: "mientras" "(" T ")" "{" M"}"
   |"hacer" "{" M "}" "mientras" "(" T ")" ";";

V: "para" "(" AC T ";" G ")" "{" M "}";

W: "retornar" Y ";";

X: "id" "=" Y ";"
   |C "id" "=" "texto" ";";

Y: "car"
   |"fec"
   |"texto"
   |"id"
   |"id" "*" "id"
   |"id" "-" "id"
   |"id" "+" "id"
   |"id" "/" "id"
   |"id" "(" AA ")"
   |K;
 
Z: "id" "(" AA ")" ";"

AA: AB
   |
   ;

AB: Y "," AB
   |Y;

AC: R
   |X;

AD: "si" "(" T ")" AG;

AE: "sino" AG;

AF: AD AE

AG: L
   |R
   |"comentario"
   |U
   |V
   |W
   |X;
   
 
%%
string leerArchivo();


void yy::compilador_parser::error(const location_type& lugar, const std::string& lexema)
{
  
	string nombreArchivo = "FilaColumna.txt", fila, columna, cad = "";
	ofstream archivo;
 
	archivo.open(nombreArchivo.c_str(), fstream::out);
	archivo.clear();
	archivo << lugar;
	archivo.close();

	cad = leerArchivo();
	stringstream cc(cad);
	getline(cc, fila, '.');
	getline(cc, columna, '.');

	ofstream pagina;


	pagina.open("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\eSintactios.txt", ios::app);
 
	pagina << "<tr class= \"error\" >" << "<td>1</td>" << "<td>Error Sintactico</td>" << "<td>" << fila << "</td>"<< "<td>" << columna << "</td>" << "<td>" << lexema << "<td>" << "</tr>";
	pagina.close();
		  
}

string leerArchivo() {
	string cadena;
	ifstream datos("FilaColumna.txt");
	 
	if (datos.fail()) {
		cout << "Texto entrada Estructura.txt no existe" << endl;
	}
	else {
		while (!datos.eof()) {
		 
			getline(datos, cadena); //con esta funcion tomas la linea(limitada por \n)

		}
	}
	return cadena;
}