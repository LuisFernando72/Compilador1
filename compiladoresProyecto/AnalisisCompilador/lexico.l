%{
#include <cerrno>
#include <stdio.h>
#include <string>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <fstream>
#include "driver.h"
#include "parser.tab.hh"
#include "FlexLexer2.h"
#include "../Operaciones_archivos.h"
#undef yywrap
#define yywrap() 1
static yy::location loc;
# define YY_USER_ACTION  loc.columns (yyleng);
#pragma warning(disable:4996)
  string lleva;
  string a = ",";
  vector<string> tokens;
  string tokenizar(const char* del);
  void ruta(string file);
%}

%option noyywrap nounput batch debug noinput
%option outfile="scanner.cpp"
%option yylineno
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
blank [ \t\r]
DELIMITADOR [\t\r\f\n" "]

%%
%{

  // Code run each time yylex is called.
  loc.step ();
 
%}
{blank}+                loc.step ();
\n+                     loc.lines (yyleng); loc.step ();

"inicio"			  {
cout<<endl<<yytext<<" "<<loc<< " "<<yylineno<<endl;
string s;
s.push_back(yyleng);
lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
tokens.push_back(lleva);
return yy::compilador_parser::make_INICIO(yytext,loc);
}

"entero"			  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);
  return yy::compilador_parser::make_ENTERO(yytext,loc);
  }

"caracter"			{
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);
  return yy::compilador_parser::make_CARACTER(yytext,loc);
  }

"decimal"			  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);
  return yy::compilador_parser::make_DECIMAL(yytext,loc);
}

"fecha"				  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);
  return yy::compilador_parser::make_FECHA(yytext,loc);
}

"procedimiento"	{
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);
  return yy::compilador_parser::make_PROCEDIMIENTO(yytext,loc);
  }

"mostrar"			  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_MOSTRAR(yytext,loc);
  }

"asignar"			  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_ASIGNAR(yytext,loc);
  }

"si"			    	{
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_SI(yytext,loc);
  }

"sino"				  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_SINO(yytext,loc);
  }

"mientras"			{
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_MIENTRAS(yytext,loc);
  }

"hacer"				  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_HACER(yytext,loc);
  }

"para"				  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_PARA(yytext,loc);
  }

"retornar"			{
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_RETORNAR(yytext,loc);
  }

"("				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_PARENTESISABIERTO(loc);
  }

")"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_PARENTESISCERRADO(loc);
  }

"{"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_LLAVEABIERTA(loc);
  }

"}"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_LLAVECERRADA(loc);
  }

";"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_PUNTOCOMA(loc);
  }

","				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_COMA(loc);
  }

"="				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_IGUAL(loc);
  }

"+"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_SUMA(loc);
  }

"-"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_RESTA(loc);
  }

"*"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_MULTIPLICA(loc);
  }

"!"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_DIFERENCIA(loc);
  }

"<"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_MENOR(loc);
  }

">"				      {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_MAYOR(loc);
  }

{DIAGONAL}			{
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_DIVISION(loc);
  }

{IDENTIFICADOR}	{
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_IDENTIFICADOR(yytext,loc);
  }

{ENTERO}			  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_NUMERO(strtol (yytext, NULL, 10),loc);
  }

{REAL}				  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_REAL(strtod (yytext, NULL),loc);
  }

{FECHA}				  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_DFECHA(yytext,loc);
  }

{CARACTERES}		{
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_DCARACTER(yytext,loc);
  }

{TEXTO}				  {
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_TEXTO(yytext,loc);
  }
  
{COMENTARIO}		{
  string s;
  s.push_back(yyleng);
  lleva= yytext + a + to_string(12) + a + s + a + to_string (yylineno);
  tokens.push_back(lleva);  
  return yy::compilador_parser::make_COMENTARIO(yytext,loc);
  }

{DELIMITADOR}   {}
.               {
  printf("ERROR LEXICO %s\n",yytext);
  }

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
	ruta(file);
  }
 
}
 

void compilador_driver::terminarScanner(){
  //tokenizar(",");
  fclose(yyin);
}


void ruta(string file) {
	Operaciones_archivos op;
	ifstream archivo(file.c_str());
	yyFlexLexer* lexer = new yyFlexLexer(&archivo);

	int token = lexer->yylex(), contador = 0, contadorE = 0, longitud, lf;
	string boody_Error, boody_tabla, status, id;

	while (token) {
		longitud = lexer->YYLeng();
		string tok = lexer->YYText(), retorno = op.Hash(token);
		lf = lexer->lineno();

		string simbolo = "<td>" + tok + "</td>";
		string clasificacion = "<td>" + retorno + ", " + tok + "</td>";
		string parse = "<td>" + to_string(longitud) + "</td>";
		string linea = "<td>" + to_string(lf) + "</td>";

		if (token == 99) {
			contadorE++;
			id = "<tr class= \"error\" ><td>" + to_string(contadorE) + "</td>";
			status = "<td><p class = \"status cancelled\">No definido</p></td> </tr>";
			boody_Error += id + "\n" + simbolo + "\n" + clasificacion + "\n" + parse + "\n" + linea + "\n" + "\n" + status;
		}
		else {
			contador++;
			id = "<tr><td>" + to_string(contador) + "</td>";
			status = "<td><p class = \"status delivered\">Aceptado</p></td> </tr>";
			boody_tabla += id + "\n" + simbolo + "\n" + clasificacion + "\n" + parse + "\n" + linea + "\n" + "\n" + status;
		}
		token = lexer->yylex();
	}
	op.eliminarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\B_error_lexico.txt");
	op.eliminarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\analisis_lexico.txt");
 

	int retorno1 = op.CrearBody("B_error_lexico.txt", boody_Error);
	int retorno2 = op.CrearBody("analisis_lexico.txt", boody_tabla);

	int leer1 = op.InsertarHTML("Errores_lexicos.html", "header2.txt", "B_error_lexico.txt", "footer.txt");
	int leer2 = op.InsertarHTML("Analisis_lexicos.html", "header.txt", "analisis_lexico.txt", "footer.txt");

if ((leer1 == 1) && (leer2 == 1)) {
		  cout << "\n\n\t\tANALISIS TERMINADO CORRECTAMENTE!!";
	      cout <<   "\n\t\tANALISIS LEXICO:";
		  cout <<   "\n\t\tC:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_html\\Tabla_analis_lexico.html";
		  cout <<   "\n\t\tERRORES LEXICO:";
		  cout <<   "\n\t\tC:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_html\\Tabla_errores_lexico.html\n\n";
		  cout <<   "\n\t\tTABLA DE SIMBOLOS:";
		  cout <<   "\n\t\tC:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_html\\Tabla_simbolos.html\n\n";

	}
}

string tokenizar(const char* del){
string tok;
const char* delimitadores = del;
char* kk;
for(int r =0; r<tokens.size(); r++){
kk = const_cast<char*>(tokens[r].c_str());
char* token = strtok(kk, ",");
cout<<"<tr>";
while(token){
cout<<"<td>"<<token<<"</td>";
token = strtok(NULL, ",");
}
cout<<"<tr>";
cout<<endl;
}
return tok;
}