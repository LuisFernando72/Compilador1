#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <string>
#include <string.h>
#include "Operaciones_archivos.h"
#include <stdio.h> 
//#include "y.tab.h"

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

          fclose(file);

          return 1;
      }

};