#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <map>

//#include "otros.h"

using namespace std;

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
