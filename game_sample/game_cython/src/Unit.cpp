/*
Game interface example using Cython

This is the C++ file for Units. It has some attributes and some methods.
*/

#include <iostream>

#include "SimpleOps.h"
#include "Map.h"

#define canvasSize 6

Unit::Unit(std::string type, int id, int team_code, int max_d_ps){
	// Args:
	//   type: some string
	//   id: (int) some id
	//   team_code: (int) team code
	//   max_d_ps: (int) maximum allowed traveling distance in one step
	unitID = id; 
	unitType = type;
	teamCode = team_code;
	maxDistancePerStep = max_d_ps;
}

/* main methods */
void Unit::move(int x, int y){
	/* Move the player by position x, and y
	The initial idea was that if I played the move it could simply update the world too
	But I was continuously getting errors. I still don't know what I was doing wrong.

	The current iteration has structure similar to what we will be using in the
	freeciv-world.
	*/

	// it is stupid to have such a big function, but I explain in the documentation why
	// it is structured like that
	bool moveVerified = simple_ops::verifyMove(x, y, maxDistancePerStep, locX,
		locY, canvasSize, canvasSize);
	if (true == moveVerified){
		std::cout << "Move Valid Going from (" << locX << "," << locY << ") --> ("
			<< locX + x << "," << locY + y << ")\n";
		locX += x; locY += y;
	}
	else{
		std::cout << "Move Invalid! Not Going from (" << locX << "," << locY << ") --> ("
				  << locX + x << "," << locY + y << ")\n";
	}
}

/*
void Unit::move(int x, int y, Map& mapCanvas){

	bool moveVerified = verifyMove(x, y, maxDistancePerStep);
	if (true == moveVerified){
		mapCanvas::updatePositionOfUnit(unitID, x, y);
	}
	else{
		std::cout << "Move (" << x << "," << y << ") not possible! \n[!]Could not be verified.";
	}
}
*/

void Unit::setLocation(int x, int y){
	locX = x; locY = y;
}

void Unit::printSpecs(void){
	std::cout << "=== Unit Details ===\n";
	std::cout << "Unit ID " << unitID << "\n";
	std::cout << "Unit Team " << teamCode << "\n";
	std::cout << "Unit Max Distance " << maxDistancePerStep << "\n";
	std::cout << "Unit Type " << unitType << "\n -------- \n";
}

// getter/setter functions
int Unit::getID(void){
	return unitID;
}

int Unit::getTeamCode(void){
	return teamCode;
}

std::string Unit::getType(void){
	return unitType;
}

/*
pair<int, int> Unit::getLocation{
	//do something
}
*/