#pragma once

#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>

#include "templates.hh"
#include "definitions.hh"



class options {


public:
    int x = 14, y = 26;
	int extra = 0;

	void quitarletra() {
		coordinates(16, 26); printf("       ");
		coordinates(16, 28); printf("        ");
		coordinates(1, 33); printf("                    ");
		borrar();
	}

	void letras() {
		color(15);
		coordinates(16, 26); printf("PLAY");
		coordinates(16, 28); printf("EXIT");
		coordinates(1, 33); printf("ENTER PARA ELEGIR");
	}

	void pintar() {
		color(12);
		coordinates(x, y);   printf("%c", 219);
	}

	void borrar() {
		coordinates(x, y);   printf(" ");
	}
	void mover() {
		if (_kbhit()) {
			char tecla = _getch();
			borrar();
			if (tecla == UP && y >= 28) y = y - 2;
			if (tecla == DOWN && y <= 26)  y = y + 2;
			if (tecla == ENTER && y == 26) { extra = 1; }
			if (tecla == ENTER && y == 28) { exit(0); }
			pintar();
		}
	}
};
