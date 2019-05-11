#pragma once

#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>

#include "definitions.hh"
#include "maps.hh"
#include "templates.hh"
#include "player.hh"




class boxes {

	public:


		int x = 0;
		int y = 0;
		int _pos;

		boxes(int a) : _pos(a) {}

		void search() {
			for (int i = 0; i < XX; i++) {
				for (int j = 0; j < YY; j++) {
					if (map[i][j] == _pos) {

						x = i;
						y = j;
					}
				}
			}
		}

		void hide() {
			color(1);
			coordinates(x, y); printf("%c", 219); coordinates(x + 1, y); printf("%c", 219);
			coordinates(x + 2, y + 1); printf("%c", 219); coordinates(x + 3, y + 1); printf("%c", 219);
			color(9);
			coordinates(x + 2, y); printf("%c", 219); coordinates(x + 3, y); printf("%c", 219);
			coordinates(x, y + 1); printf("%c", 219); coordinates(x + 1, y + 1); printf("%c", 219);
		}


		void recolor() {
			color(14);
			coordinates(x, y); printf("%c%c%c%c", 201, 203, 203, 187);
			coordinates(x, y + 1); printf("%c%c%c%c", 200, 202, 202, 188);
		}










};
