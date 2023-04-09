#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <map>

//#include "otros.h"

using namespace std;
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

void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);

}

void fondo() {
	system("COLOR f3");
}
void cambiarcolor(int X) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), X);
}


void co(int x, int c) {
	cambiarcolor(c);
	int i;
	for (i = 1; i <= x; i++) {
		cout << char(219) << char(219);
	}
}



void bla(int u) {
	int q;
	for (q = 1; q <= u; q++) {
		cout << char(255) << char(255);
	}
}

void marco() {

	int z = 247, m = 248, k = 247;

	for (int i = 1; i <= 38; i++) {
		gotoxy(150, i); co(1, m);
	}

	for (int i = 1; i <= 38; i++) {
		gotoxy(13, i); co(1, m);
	}

	for (int i = 13; i <= 150; i++) {
		gotoxy(i, 0); co(1, m);
	}

	for (int i = 13; i <= 150; i++) {
		gotoxy(i, 38); co(1, m);
	}




	//for (int u = 0; u <= 49; u += 1) {
	//	gotoxy(132, u); co(8, k); bla(2); co(8, k);;
	//}
	//for (int r = 1; r <= 49; r += 6) {
	//	gotoxy(132, r); co(18, m);
	//}

	//for (int x = 0; x <= 49; x++) {
	//	gotoxy(0, x); co(8, k); bla(2); co(8, k);
	//}
	//for (int i = 1; i <= 49; i += 6) {
	//	gotoxy(0, i); co(18, m);
	//}
}


void cargando() {
	int o = 255, x = 219;
	int i, u;
	//cout << ("\n");

	for (u = 1; u <= 55; u++) {
		gotoxy(u, 10);
	}

	for (i = 1; i <= 26; i++) {
		co(0, 250);
		cout << char(x);
		Beep(523, 100); Sleep(125);
		cout << char(o);
	}
}
