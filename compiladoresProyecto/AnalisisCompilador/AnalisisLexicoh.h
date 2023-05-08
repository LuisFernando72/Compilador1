
#include <iostream>
#include <conio.h>
#include "driver.h"

using namespace std;

class AnalisisLexicoh
{
public:AnalisisLexicoh() {}
	  void IniciarAnalisis(string archivo) {
		 
		  float resultado = 0.0;
		  compilador_driver driver;
		  int dos = driver.parse(archivo);

		  if (dos) {
			 // printf("La entrada es incorrecta\n");
		  }
		  else {
			  printf("La entrada es correcta\n");
		  }
		 /* cout <<"Este es dos"<< dos<<endl;*/
	  }


};




