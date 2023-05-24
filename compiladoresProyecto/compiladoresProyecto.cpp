#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <string.h>
#include "Operaciones_archivos.h"
//#include "FlexTabla/FlexLexer.h"
#include <cstdlib>
#include <cstdio>
#include <stdio.h> 
#include "otros.h"
#include "colors.h"
#include <vector>
#include <list>
#include "AnalisisCompilador/AnalisisLexicoh.h"

using namespace std;

//declarando funciones

void init();

int LeerLexer();

//CREANDO VARIABLES GLOABALES

//FUNCIONES A UTILIZAR
 
//string tokenizar(  const char* del);
void menu();
vector<string> casa;

void init() {
	fondo();
	menu();
	 
}

 
void menu() {

	marco();
	LeerLexer();
}


int LeerLexer() {

	Operaciones_archivos op;

	AnalisisLexicoh ah;
	int retorno;
	char n;
	string direccionArchivo;
	do {

		system("cls");
		marco();

		gotoxy(25, 4); cout << BLACK << "Ingrese la direccion del archivo:";

		getline(cin, direccionArchivo);
		ifstream archivo(direccionArchivo.c_str());

		if (direccionArchivo.empty()) {
			gotoxy(25, 12); cout << RED << "Debe Ingresar una direccion valida";
			_getch();
			menu();

		}
		else {
			retorno = op.ComprobarExtension(direccionArchivo);
			if (retorno == 0) {
				gotoxy(25, 12); cout << "Extension no valida";
				_getch();
				menu();
			}
			else {
				if (archivo.fail())
				{
					gotoxy(70, 9); cout << GREEN << "Analizando el archivo";
						cargando();
					gotoxy(25, 12); cout << "Error al abrir el archivo :(\n";
					_getch();
					menu();
				}
				else {
					gotoxy(70, 9); cout << GREEN << "Analizando el archivo";
					cargando();
					op.eliminarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\eSintactios.txt");

					ah.IniciarAnalisis(direccionArchivo);
					int leer3 = op.InsertarHTML("Tabla_errores_sintacticos.html", "header3.txt", "eSintactios.txt", "footer.txt");
					cout << RED << "\n\t\tANALISIS SINTACTICO:";
					cout << BLACK << "\n\t\tC:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_html\\Tabla_errores_sintacticos.html\n\n";
				 	  
				}
			}

		}
		  cout << BLACK << "\n\t\tDesea volver a intentarlo[s/n]: ";
		cin >> n;
	} while ((n == 's') || (n == 'S'));
	if ((n == 'n') || (n == 'N')) {
		exit(0);
	}

	return 1;
}

int main()
{
	init();

	getch();
}

