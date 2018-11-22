/*
Game interface example using Cython

This is the C++ header file for Maps. It has some attributes and some methods.
*/

#ifndef GAME_MAP
#define GAME_MAP

#include <stdio.h>
#include <vector>

#include "Unit.h"

class Map {
private:
	int canvas[6][6];
	int sizeX, sizeY;
	int numUnits_teamA, numUnits_teamB;

	std::vector<Unit> allUnits;

public:
	Map(int, int, int, int);

	// units
	void printUnitStats(void);
	std::vector<Unit> getUnits(void);


	// methods
	void loadPositions(int, int*, int*, int);
	void updatePositionOfUnit(int, int);
	void printMap(void);
	
};

#endif // GAME_MAP