#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <string.h>
#include "Operaciones_archivos.h"
#include "FlexLexer.h"
#include <cstdlib>
#include <cstdio>
#include <stdio.h> 
#include "otros.h"
#include "colors.h"
//#include "driver.h"
//#include "otros.h"

using namespace std;

//declarando funciones
void init();

int LeerLexer();

//CREANDO VARIABLES GLOABALES

//FUNCIONES A UTILIZAR
int leerArchivo(string direccion_archivo);



void init() {
	system("cls");
	_getch();
	fondo();
	marco();
	LeerLexer();
	system("pause");

	/*float resultado = 0.0;
	compilador_driver driver;
	if (driver.parse("ejemplo1.txt")) {
		printf("La entrada es incorrecta\n");
	}
	else {
		printf("La entrada es correcta\n");
		
	}*/

	 
}


int LeerLexer() {
	_getch();
	Operaciones_archivos op;
	string direccionArchivo;
	int retorno;
	gotoxy(25, 4); cout << BLACK << "Ingrese la direccion del archivo: ";
	getline(cin, direccionArchivo);
	ifstream archivo(direccionArchivo.c_str());

	if (direccionArchivo.empty()) {
		gotoxy(25, 12); cout << RED << "Debe Ingresar una direccion valida\n";
		_getch();
		init();
	}
	else {
		retorno = op.ComprobarExtension(direccionArchivo);
		if (retorno == 0) {
			gotoxy(25, 12); cout << "Extension no valida";
			_getch();
			init();
		}
		else {
			if (archivo.fail())
			{
				gotoxy(70, 9); cout << GREEN << "Analizando el archivo";
				cargando();
				gotoxy(25, 12); cout << "Error al abrir el archivo :(\n";
				_getch();
				init();
			}
			else {
				gotoxy(70, 9); cout << GREEN << "Analizando el archivo";
				cargando();
				op.eliminarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\B_error_lexico.txt");
				op.eliminarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\analisis_lexico.txt");
				leerArchivo(direccionArchivo);
			}
		}

	}
	return 1;
}

int leerArchivo(string direccion_archivo) {
	Operaciones_archivos op;
	ifstream archivo(direccion_archivo.c_str());
	yyFlexLexer* lexer = new yyFlexLexer(&archivo);
	int token = lexer->yylex(), contador = 0, contadorE = 0, longitud, lf;
	string boody_Error, boody_tabla, status, id;
	char n;

	while (token) {
		longitud = lexer->YYLeng();
		string tok = lexer->YYText(), retorno = Hash(token);
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


	int retorno1 = op.CrearBody("B_error_lexico.txt", boody_Error);
	int retorno2 = op.CrearBody("analisis_lexico.txt", boody_tabla);
	int leer1 = op.InsertarHTML("Tabla_errores_lexico.html", "header2.txt", "B_error_lexico.txt", "footer.txt");
	int leer2 =op.InsertarHTML("Tabla_analis_lexico.html", "header.txt", "analisis_lexico.txt", "footer.txt");


	if ((leer1 == 1) && (leer2 == 1)) {
		gotoxy(25, 14); cout << "Analisis Terminado Correctamente!!";
		gotoxy(25, 15); cout << BLUE << "ANALISIS LEXICO:";
		gotoxy(25, 16); cout << BLACK << "C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_html\\Tabla_analis_lexico.html";
		gotoxy(25, 17); cout << BLUE << "ERRORES LEXICO:";
		gotoxy(25, 18); cout << BLACK << "C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_html\\Tabla_errores_lexico.html\n\n";
		gotoxy(25, 19); cout << BLUE << "TABLA DE SIMBOLOS:";
		gotoxy(25, 20); cout << BLACK << "C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_html\\Tabla_simbolos.html\n\n";

	}
	gotoxy(25, 21); cout << BLACK << "Desea volver al inicio[s/n]: ";
	cin >> n;
	if ((n == 'N') || (n == 'n')) {
		exit(0);
	}
	else {
		init();
	}
	return 1;
}


int main()
{
	init();

	getch();
}

