#pragma once

#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>

#include "templates.hh"
#include "definitions.hh"


	int	map[XX][YY];

	/*void map1() {
		int map1[XX][YY] = {
			{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0},
{0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,7,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,6,0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,3,3,3,3,0,0,0,0,0,0,0,0,3,3,3,3,0,0},
{0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0},
{0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		};*/
	void map1() {
		int map1[XX][YY] = {
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0},
{0,5,8,5,5,5,5,8,8,8,8,5,8,5,5,5,8,5,8,8,8,8,5,8,5,5,5,5,5,8,8,5,5,0},
{0,5,8,5,5,5,5,8,5,5,5,5,8,5,5,5,8,5,8,5,5,5,5,8,5,5,5,5,8,5,5,8,5,0},
{0,5,8,5,5,5,5,8,8,8,8,5,8,8,5,8,8,5,8,8,8,8,5,8,5,5,5,5,5,8,8,5,5,0},
{0,5,8,5,5,5,5,8,5,5,5,5,5,8,5,8,5,5,8,5,5,5,5,8,5,5,5,5,8,5,5,5,5,0},
{0,5,8,8,8,8,5,8,8,8,8,5,5,8,8,8,5,5,8,8,8,8,5,8,8,8,8,5,8,8,8,8,5,0},
{0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,4,4,5,5,4,4,5,5,4,4,5,5,4,4,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,3,3,3,3,6,1,2,2,1,1,2,2,3,3,3,3,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,0},
{0,4,4,5,5,2,2,1,1,2,2,1,1,4,4,5,5,0,0,0,0,4,4,5,5,4,4,5,5,4,4,5,5,0},
{0,3,3,3,3,1,1,2,2,7,1,2,2,3,3,3,3,0,0,0,0,3,3,3,3,9,9,2,2,3,3,3,3,0},
{0,4,4,5,5,2,2,1,1,2,2,1,1,4,4,5,5,0,0,0,0,4,4,5,5,2,2,9,9,4,4,5,5,0},
{0,3,3,3,3,1,1,2,2,1,1,2,2,3,3,3,3,0,0,0,0,3,3,3,3,1,1,2,2,3,3,3,3,0},
{0,4,4,5,5,2,2,1,1,2,2,1,1,4,4,5,5,0,0,0,0,4,4,5,5,2,2,1,1,4,4,5,5,0},
{0,3,3,3,3,3,3,3,3,1,1,2,2,3,3,3,3,3,3,3,3,3,3,3,3,1,1,2,2,3,3,3,3,0},
{0,4,4,5,5,4,4,5,5,2,2,1,1,4,4,5,5,4,4,5,5,4,4,5,5,2,2,1,1,4,4,5,5,0},
{0,3,3,3,3,3,3,3,3,1,1,2,2,1,1,2,2,1,1,2,2,1,1,2,2,1,1,2,2,3,3,3,3,0},
{0,4,4,5,5,4,4,5,5,2,2,1,1,2,2,1,1,2,2,1,1,2,2,1,1,2,2,1,1,4,4,5,5,0},
{0,3,3,3,3,10,10,10,10,1,1,2,2,1,1,2,2,3,3,3,3,1,1,2,2,1,1,2,2,3,3,3,3,0},
{0,4,4,5,5,10,10,10,10,2,2,1,1,2,2,1,1,4,4,5,5,2,2,1,1,2,2,1,1,4,4,5,5,0},
{0,3,3,3,3,10,10,10,10,10,10,10,10,10,10,10,10,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0},
{0,4,4,5,5,10,10,10,10,10,10,10,10,10,10,10,10,4,4,5,5,4,4,5,5,4,4,5,5,4,4,5,5,0},
{0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,4,4,5,5,4,4,5,5,4,4,5,5,4,4,5,5,4,4,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, };
/*{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0},
{0,5,8,5,5,5,5,8,8,8,8,5,8,5,5,5,8,5,8,8,8,8,5,8,5,5,5,5,5,5,8,5,5,0},
{0,5,8,5,5,5,5,8,5,5,5,5,8,5,5,5,8,5,8,5,5,5,5,8,5,5,5,5,5,8,8,5,5,0},
{0,5,8,5,5,5,5,8,8,8,8,5,8,8,5,8,8,5,8,8,8,8,5,8,5,5,5,5,5,5,8,5,5,0},
{0,5,8,5,5,5,5,8,5,5,5,5,5,8,5,8,5,5,8,5,5,5,5,8,5,5,5,5,5,5,8,5,5,0},
{0,5,8,8,8,8,5,8,8,8,8,5,5,8,8,8,5,5,8,8,8,8,5,8,8,8,8,5,5,8,8,8,5,0},
{0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,4,4,5,5,4,4,5,5,4,4,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,3,3,3,3,1,1,2,2,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,4,4,5,5,2,2,1,1,4,4,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,3,3,3,3,1,1,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0},
{0,0,0,0,0,0,0,0,0,4,4,5,5,2,2,1,1,4,4,5,5,4,4,5,5,4,4,5,5,4,4,5,5,0},
{0,3,3,3,3,3,3,3,3,3,3,3,3,1,1,2,2,1,1,2,2,1,1,2,2,9,9,2,2,3,3,3,3,0},
{0,4,4,5,5,4,4,5,5,4,4,5,5,2,2,1,1,2,2,1,1,2,2,1,1,2,2,9,9,4,4,5,5,0},
{0,3,3,3,3,1,1,2,2,1,1,2,2,1,1,7,2,7,1,2,2,3,3,3,3,3,3,3,3,3,3,3,3,0},
{0,4,4,5,5,2,2,1,1,2,2,1,1,2,2,1,1,2,2,1,1,4,4,5,5,4,4,5,5,4,4,5,5,0},
{0,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,2,2,3,3,3,3,0,0,0,0,0,0,0,0,0},
{0,4,4,5,5,4,4,5,5,4,4,5,5,4,4,5,5,2,2,1,1,4,4,5,5,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,6,1,2,2,3,3,3,3,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,5,5,2,2,1,1,4,4,5,5,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,5,5,4,4,5,5,4,4,5,5,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	};*/

	for (int i = 0; i < XX; i++) {
		for (int j = 0; j < YY; j++) {
			map[i][j] = map1[j][i];
		}
	}
}


    void print() {
	for (int i = 0; i < XX; i++) {
		for (int j = 0; j < YY; j++) {
			switch (map[i][j])
			{
			case 1:
				color(2);//FLOOR
				coordinates(i, j); printf("%c", 219);
				break;
			case 2:
				color(10);//FLOOR
				coordinates(i, j); printf("%c", 219);
				break;
			case 3: //WALL
				color(15);
				coordinates(i, j); printf("%c", 177);
				break;
			case 4: //WALL
				color(11);
				coordinates(i, j); printf("%c", 177);
				break;
			case 5: //WALL
				color(11);
				coordinates(i, j); printf("%c", 177);
				break;
			case 6: //PLAYER
				color(9);
				coordinates(i, j); printf("%c", 219);
				break;
			case 7: //BOX
				color(9);
				coordinates(i, j); printf("%c", 219);
				break;
			case 8:
				color(12);
				coordinates(i, j); printf("%c", 219);
				break;
			case 10: //BOMB
				color(4);
				coordinates(i, j); printf("%c", 233);
				break;
			
			case 9: //WIN
				color(0);
				coordinates(i, j); printf("%c", 219);
				break;
			
			

			default:
				break;
			}

		}
	}

}

	void clean_map() {
	for (int i = 0; i < XX; i++) {
		for (int j = 0; j < YY; j++) {
			coordinates(i, j);
			if (map[i][j] == 0) {
				coordinates(i, j);
			}
			if (map[i][j] == 1) {
				map[i][j] = 0;
				coordinates(i, j); printf("%c", 32);
			}
			if (map[i][j] == 2) {
				map[i][j] = 0;
				coordinates(i, j); printf("%c", 32);
			}
			if (map[i][j] == 3) {
				map[i][j] = 0;
				coordinates(i, j); printf("%c", 32);
			}
			if (map[i][j] == 4) {
				map[i][j] = 0;
				coordinates(i, j); printf("%c", 32);
			}
			if (map[i][j] == 5) {
				map[i][j] = 0;
				coordinates(i, j); printf("%c", 32);
			}
			if (map[i][j] == 6) {
				map[i][j] = 0;
				coordinates(i, j); printf("%c", 32);
			}
			if (map[i][j] == 7) {
				map[i][j] = 0;
				coordinates(i, j); printf("%c", 32);
			}
			if (map[i][j] == 8) {
				coordinates(i, j); printf("%c", 32);
			}
			if (map[i][j] == 9) {
				map[i][j] = 0;
				coordinates(i, j); printf("%c", 32);
			}
			if (map[i][j] == 10) {
				map[i][j] = 0;
				coordinates(i, j); printf("%c", 32);
			}
		}
	}
}

