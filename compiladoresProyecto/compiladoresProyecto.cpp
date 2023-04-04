#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <string.h>
#include "Operaciones_archivos.h"
#include "FlexLexer.h"

#include <stdio.h> 
//#include "y.tab.h"

//declarando funciones
using namespace std;

void init();
int  LeerTokens();
int LeerLexer();

//CREANDO VARIABLES GLOABALES

//FUNCIONES A UTILIZAR
int leerArchivo(string direccion_archivo);
void parse(FILE* file);

void init() {
    LeerLexer();
    /*getch(); */
    //FILE* file = fopen("ejemplo.txt", "r");
   // parse(file);
}




int LeerTokens() {
    Operaciones_archivos op;
    string header = op.copiarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\header.txt");
    string footer = op.copiarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\footer.txt");
    string boody;


    for (int i = 0; i < 10; i++) {
        string id = "<tr><td>" + to_string(i) + "</td>";
        string simbolo = "<td>{</td>";
        string clasificacion = "<td> Puertas Negras </td>";
        string parse = "<td>Llave abierta</td>";
        string status = "<td><p class = \"status cancelled\">ERROR</p></td> </tr>";
		boody += id + "\n" + simbolo + "\n" + clasificacion + "\n" + parse + "\n" + status + "\n";
    }

    int retorno = op.crearHTML("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_html\\index.html", header, boody, footer);
    if (retorno != 0) {
        cout << "\n\n HTML CREADO CORRECTAMENTE!!\n\n";
    }

    return 1;
}

int LeerLexer() {
    string direccionArchivo;

    cout << "Ingrese la direccion del archivo: " << endl;
    getline(cin, direccionArchivo);
    ifstream archivo(direccionArchivo.c_str());

    if (!archivo)
    {
        cout << "Error al abrir el archivo\n";
     
    }
    else {
        leerArchivo(direccionArchivo);
    }
    return 1;
}

int leerArchivo(string direccion_archivo) {

    ifstream archivo(direccion_archivo.c_str());
    yyFlexLexer* lexer = new yyFlexLexer(&archivo);

    while (lexer->yylex() != 0) {
    
    }

    return 1;
}

int main()
{
    init();

    getch();
}

 