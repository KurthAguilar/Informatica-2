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



class player
{


	public:
        player(){};
		int x, y;
		int cont = 0;

		void search() {
			for (int i = 0; i < XX; i++) {
				for (int j = 0; j < YY; j++) {
					if (map[i][j] == 6) {
						x = i;
						y = j;
					}
				}
			}
		}

		void recolor() {
			color(15);
			coordinates(x, y); printf("%c%c%c%c", 219, 219, 219, 219);
			coordinates(x, y + 1); printf("%c%c%c%c", 219, 219, 219, 219);
		}

		void hide() {
			color(2);
			coordinates(x, y); printf("%c%c", 219, 219);
			coordinates(x + 2, y + 1); printf("%c%c", 219, 219);
			color(10);
			coordinates(x + 2, y); printf("%c", 219); coordinates(x + 3, y); printf("%c", 219);
			coordinates(x, y + 1); printf("%c", 219); coordinates(x + 1, y + 1); printf("%c", 219);
		}

		void counter(int x1, int y1) {
			color(15);
			coordinates(x1, y1); printf("MOVIMIENTOS %i", cont);
		}



};



