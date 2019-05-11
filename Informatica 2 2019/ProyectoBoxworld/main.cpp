#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>

#include "definitions.hh"
#include "movement.hh"
#include "boxes.hh"
#include "player.hh"
#include "maps.hh"
#include "options.hh"
#include "menu.hh"






int main() {

	
	char gameS = PlaySound((LPCSTR)"Bubble.wav", NULL, SND_FILENAME | SND_ASYNC);

	player p1;
	boxes box(7);
	options opc;
	hidecursor();

restart:

	char gameS2 = PlaySound((LPCSTR)"Bubble.wav", NULL, SND_FILENAME | SND_ASYNC);
	menu();
	imprimir_menu();
	opc.pintar();
	opc.letras();

	while (opc.extra != 1)
	{
		
		opc.mover();
	}

	cleanmenu();
	opc.quitarletra();
	steps();
	map1();
	print();
	

	p1.search();
	box.search();
	p1.recolor();
	box.recolor();
	int cond;
	p1.counter(11, 28);

	bool game_over = false;

	while (!game_over) {
	
		move(p1, box);

		if (map[box.x][box.y] == 9) {
			cond = 0;
			game_over = true;
			
		}
		if (map[box.x][box.y] == 10) {
			cond = 1;
			game_over = true;
			

		}
		

		
		
		Sleep(30);
	}
	if (cond == 0) {
		gameS = PlaySound(NULL, 0, 0);
		//char overS = PlaySound((LPCSTR)"help.wav", NULL, SND_FILENAME | SND_ASYNC);
		char winS = PlaySound((LPCSTR)"win.wav", NULL, SND_FILENAME | SND_ASYNC);
		hide();
		steps2();
		clean_map();
		win();

		while (game_over) {

			system("color 0C");
			Sleep(100);
			system("color 0E");
			Sleep(100);

			if (_kbhit()) {
				char tecla = _getch();
				if (tecla == ESC) {
					winS = PlaySound(NULL, 0, 0);
					opc.extra = 0;
					p1.cont = 0;
					system("CLS");
					goto restart;
				}

			}
		}
	} 
	if (cond == 1)
	{
		gameS = PlaySound(NULL, 0, 0);
		//char overS = PlaySound((LPCSTR)"help.wav", NULL, SND_FILENAME | SND_ASYNC);
		char winS = PlaySound((LPCSTR)"help.wav", NULL, SND_FILENAME | SND_ASYNC);
		hide();
		steps2();
		clean_map();
		lose();

		while (game_over) {

			system("color 0C");
			Sleep(100);
			system("color 0E");
			Sleep(100);

			if (_kbhit()) {
				char tecla = _getch();
				if (tecla == ESC) {
					winS = PlaySound(NULL, 0, 0);
					opc.extra = 0;
					p1.cont = 0;
					system("CLS");
					goto restart;
				}

			}
		}
	}

	
	

	
	return 0;


}

