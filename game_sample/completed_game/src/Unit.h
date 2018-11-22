/*
Game interface example using Cython

This is the C++ header file for Units. It has some attributes and some methods.
*/

#include <iostream>

#include "SimpleOps.h"

#ifndef GAME_UNIT
#define GAME_UNIT

class Unit {
private:
	// attributes
	std::string unitType;
	int teamCode;
	int unitID;

	int maxDistancePerStep; // maximum distance that the unit can move 

public:
	Unit(std::string, int, int, int);

	// public variable
	int locX, locY; // location of unit

	// methods
	void move(int, int);
	void setLocation(int, int);
	void printSpecs(void);

	// getter/setter
	// pair<int, int> getLocation(void);
	std::string getType(void);
	int getID(void);
	int getTeamCode(void);
};

#endif // GAME_UNIT