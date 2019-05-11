#pragma once

#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <mmsystem.h>

#include "definitions.hh"
#include "maps.hh"
#include "templates.hh"
#include "player.hh"
#include "boxes.hh"




void move(player& p1, boxes& box) {
	if (_kbhit()) {
		char key = _getch();
		p1.hide();

		switch (key)
		{
		    case LEFT:

				if (p1.x == box.x + 4 && p1.y == box.y && (map[p1.x - 5][p1.y] == 3 || map[p1.x - 5][p1.y] == 4 || map[p1.x - 5][p1.y] == 5)) {
					p1.cont++;
					break;
				}
				if (map[p1.x - 1][p1.y] != 3 && map[p1.x - 1][p1.y] != 4 && map[p1.x - 1][p1.y] != 5
					&& map[p1.x - 4][p1.y + 1] != 3 && map[p1.x - 4][p1.y + 1] != 4 && map[p1.x - 4][p1.y + 1] != 5) {
					if (p1.x == box.x + 4 && p1.y == box.y) {
						if (map[box.x - 1][box.y] != 3 && map[box.x - 1][box.y] != 4 && map[box.x - 1][box.y] != 5
							&& map[box.x - 1][box.y + 1] != 3 && map[box.x - 1][box.y + 1] != 4 && map[box.x - 1][box.y + 1] != 5) {
							box.hide();
							box.x = box.x - 4;
							box.recolor();
						}
					}
					char moveS = PlaySound((LPCSTR)"move.wav", NULL, SND_FILENAME | SND_ASYNC);
					p1.x = p1.x - 4;
					p1.recolor(); 
					p1.cont++;
				}
				
				break;

            case RIGHT:

				if (p1.x == box.x - 4 && p1.y == box.y && (map[p1.x + 8][p1.y] == 3 || map[p1.x + 8][p1.y] == 4 || map[p1.x + 8][p1.y] == 5)) {
					p1.cont++;
					break;
				}
				if (map[p1.x + 4][p1.y] != 3 && map[p1.x + 4][p1.y] != 4 && map[p1.x + 4][p1.y] != 5 && map[p1.x + 4][p1.y] != 99
					&& map[p1.x + 4][p1.y + 1] != 3 && map[p1.x + 4][p1.y + 1] != 4 && map[p1.x + 4][p1.y + 1] != 5) {
					if (p1.x == box.x - 4 && p1.y == box.y) {
						if (map[box.x + 4][box.y] != 3 && map[box.x + 4][box.y] != 4 && map[box.x + 4][box.y] != 5
							&& map[box.x + 4][box.y + 1] != 3 && map[box.x + 4][box.y + 1] != 4 && map[box.x + 4][box.y + 1] != 5) {
							box.hide();
							box.x = box.x + 4;
							box.recolor();
						}
					}

					p1.x = p1.x + 4;
                    p1.recolor();
                    p1.cont++;
				}
				break;
			case UP:

				if (p1.y == box.y + 2 && p1.x == box.x && (map[p1.x][p1.y - 3] == 3 || map[p1.x][p1.y - 3] == 4 || map[p1.x][p1.y - 3] == 5)) {
					p1.cont++;
					break;
				}
				if (map[p1.x][p1.y - 2] != 3 && map[p1.x][p1.y - 2] != 4 && map[p1.x][p1.y - 2] != 5
					&& map[p1.x + 3][p1.y - 1] != 3 && map[p1.x + 3][p1.y - 1] != 4 && map[p1.x + 3][p1.y - 1] != 5) {
					if (p1.y == box.y + 2 && p1.x == box.x) {
						if (map[box.x][box.y - 1] != 3 && map[box.x][box.y - 1] != 4 && map[box.x][box.y - 1] != 5
							&& map[box.x + 3][box.y - 1] != 3 && map[box.x + 3][box.y - 1] != 4 && map[box.x + 3][box.y - 1] != 5) {
							box.hide();
							box.y = box.y - 2;
							box.recolor();
							p1.cont++;
						}
					}
					char moveS = PlaySound((LPCSTR)"move.wav", NULL, SND_FILENAME | SND_ASYNC);
					p1.y = p1.y - 2;
                    p1.recolor();
                    p1.cont++;
				}
				break;


			case DOWN:

				if (p1.y == box.y - 2 && p1.x == box.x && (map[p1.x][p1.y + 4] == 3 || map[p1.x][p1.y + 4] == 4 || map[p1.x][p1.y + 4] == 5)) {
					p1.cont++;
					break;
				}
				if (map[p1.x][p1.y + 2] != 3 && map[p1.x][p1.y + 2] != 4 && map[p1.x][p1.y + 2] != 5) {
					if (p1.y == box.y - 2 && p1.x == box.x) {
						if (map[box.x][box.y + 2] != 3 && map[box.x][box.y + 2] != 4 && map[box.x][box.y + 2] != 5) {
							box.hide();
							box.y = box.y + 2;
							box.recolor();
						}
					}
					char moveS = PlaySound((LPCSTR)"move.wav", NULL, SND_FILENAME | SND_ASYNC);
					p1.y = p1.y + 2; 
					p1.recolor(); 
					p1.cont++;
				}
				break;





			case ESC:
				exit(0);
				break;

			case REINICIAR:
				p1.search();
				p1.cont = 0;
				box.hide();
				box.search();
				box.recolor();
				break;


			default:
				break;


		}
		p1.recolor();

		p1.counter(11, 28);
	}

}


