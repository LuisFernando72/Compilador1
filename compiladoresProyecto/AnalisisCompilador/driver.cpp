#include "driver.h"
#include "parser.tab.hh"
#include "FlexLexer2.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;
int compilador_driver::parse(const std::string& archivo)
{
	file = archivo;
	iniciarScanner();
	yy::compilador_parser parser(*this);
	 
	parser.set_debug_level(false);
	float resultado = parser.parse();
	 
	terminarScanner();
	/*cout << "resultado:::" << resultado;*/
	return resultado;
}
 