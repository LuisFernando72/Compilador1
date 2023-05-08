#ifndef DRIVER
# define DRIVER
#include <string>
#include "parser.tab.hh"
#include <iostream> 
//#include "FlexLexer2.h"
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <stdio.h> 
#include <string.h>
#define YY_DECL \
  yy::compilador_parser::symbol_type yylex (compilador_driver& driver) 
YY_DECL;


using namespace std;

class compilador_driver
{
public:
	float resultado;
	void iniciarScanner();
	void terminarScanner();
	 

	int parse(const std::string& archivo); 

	std::string file;
};
#endif

 