#pragma once

#include <Windows.h>
#include <WinUser.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>

#include "templates.hh"
#include "definitions.hh"



int inicio[XX][YY];

void menu() {

	int ini[XX][YY] = {
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0},
{0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0},
{0,0,0,1,1,1,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0},
{0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,1,0,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,0,1,0,0,0,0,1,1,1,0,0,0},
{0,1,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,1,1,0,1,0,0,0,0,1,0,0,1,0,0},
{0,1,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,1,1,0,1,0,0,0,0,1,0,0,1,0,0},
{0,1,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,1,1,0,1,0,0,0,0,1,0,0,1,1,0},
{0,1,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,1,1,0,1,0,0,0,0,1,0,0,1,1,0},
{0,1,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,1,1,0},
{0,1,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,1,1,0,0,1,0,0,0,0,1,0,0,1,1,0},
{0,1,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1,1,0},
{0,1,1,1,1,1,1,1,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,1,1,1,1,0,1,0,0,1,0,0},
{0,0,1,0,1,0,1,0,0,1,1,1,1,1,1,0,1,0,0,0,0,1,0,1,1,1,1,0,1,1,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, };


	for (int i = 0; i < XX; i++) {
		for (int j = 0; j < YY; j++) {
			inicio[i][j] = ini[j][i];
		}
	}
}

void imprimir_menu() {
	for (int i = 0; i < XX; i++) {
		for (int j = 0; j < YY; j++) {
			if (inicio[i][j] == 1) {
				color(5);
				coordinates(i, j); printf("%c", 219);
			}

		}
	}
}

void cleanmenu() {

	for (int i = 0; i < XX; i++) {
		for (int j = 0; j < YY; j++) {
			if (inicio[i][j] == 1) {
				coordinates(i, j); printf("%c", 32);
			}
		}
	}
}
