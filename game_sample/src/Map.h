/*
Game interface example using Cython

This is the C++ header file for Maps. It has some attributes and some methods.
*/

#ifndef GAME_MAP
#define GAME_MAP

#include <stdio.h>

class Map{
private:
	int canvas[6][6];
	int sizeX, sizeY;

public:
	Map(int, int);

	// methods
	void loadPositions(int, int*, int*, int);
	void updatePositionOfUnit(int, int, int);
	void printMap(void);
	
};

#endif // GAME_MAP