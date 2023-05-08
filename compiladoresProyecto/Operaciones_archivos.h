#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <string>
#include <string.h>
#include "Operaciones_archivos.h"
#include <stdio.h> 
#include <cstring>
#include <map>
 


#pragma warning(disable:4996)

using namespace std;

class Operaciones_archivos {
public: Operaciones_archivos() {}


	  string  copiarArchivo(string rutaArchivo) {
		  const string fileRuta = rutaArchivo;
		  char letra;
		  string cadena;
		  ifstream fichero;

		  fichero.open(fileRuta.c_str());

		  if (!fichero.fail()) {
			  fichero.get(letra);
			  while (!fichero.eof()) {
				  cadena += letra;
				  fichero.get(letra);
			  }
			  fichero.close();
		  }

		  return cadena;
	  }

	  int crearHTML(string name, string header, string boody, string footer) {
		  string NombreArchivo(name);

		  FILE* file = fopen(NombreArchivo.c_str(), "w+");

		  if (file) {
			  fwrite(header.c_str(), 1, header.size(), file);
			  fwrite(boody.c_str(), 1, boody.size(), file);
			  fwrite(footer.c_str(), 1, footer.size(), file);
		  }

		  fclose (file);

		  return 1;
	  }

	  int ComprobarExtension(string direccionArchivo) {
		  string::size_type idx;
		  int retorno;
		  idx = direccionArchivo.rfind('.');
		  if (idx != std::string::npos) {
			  string extension = direccionArchivo.substr(idx + 1);
			  if (extension == "txt") {
				  retorno = 1;
			  }
		  }
		  else {
			  retorno = 0;
		  }

		  return retorno;
	  }

	  int eliminarArchivo(string direccion) {
		  remove(direccion.c_str());
		  return 1;
	  }

	  int CrearBody(string bood, string cuerpo) {
		  ofstream pagina;
		  pagina.open("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\" + bood, ios::app);
		  pagina << cuerpo;
		  pagina.close();
		  return 1;
	  }

	  int InsertarHTML(string nombre, string head, string cuerpo, string foot) {
		  Operaciones_archivos op;
		  string header = op.copiarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\" + head);
		  string boody = op.copiarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\" + cuerpo);
		  string footer = op.copiarArchivo("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\" + foot);

		  crearHTML("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_html\\" + nombre, header, boody, footer);

		  return 1;
	  }
	  map<int, string> mapa;

	  string Hash(int clave) {
		  string retorno;
		  mapa[10] = "Numero Entero";
		  mapa[11] = "Numero Real";
		  mapa[12] = "Palabra Reservada";
		  mapa[13] = "Identificador";
		  mapa[14] = "Signo Division";
		  mapa[15] = "Texto";
		  mapa[16] = "Comentario";
		  mapa[20] = "Suma";
		  mapa[21] = "Resta";
		  mapa[22] = "Multiplicacion";
		  mapa[23] = "Punto y Coma";
		  mapa[24] = "Coma";
		  mapa[25] = "Parentesis Abierto";
		  mapa[26] = "Parentesis Cerrado";
		  mapa[27] = "Llave Abierta";
		  mapa[28] = "Llave Cerrada";
		  mapa[29] = "Signo Igual";
		  mapa[30] = "Signo Menor";
		  mapa[31] = "Signo Mayor";
		  mapa[32] = "Operador Logico";
		  mapa[99] = "ERROR LEXICO";
		  mapa[33] = "Tipo Fecha";
		  mapa[34] = "Tipo Caracter";

		  auto search = mapa.find(clave);
		  if (search != mapa.end()) {
			  retorno = search->second;
		  }
		  return retorno;
	  }


};