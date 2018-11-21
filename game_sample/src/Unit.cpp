/*
Game interface example using Cython

This is the C++ file for Units. It has some attributes and some methods.
*/

#include "SimpleOps"
#include "Maps.h"
#include "Unit.h"

Unit::Unit(int id, int type){
	unitID = id; 
	unitType = type;
}

/* main methods */
void Unit::move(int x, int y){

	bool SimpleOps::verifyMove(x, y, maxDistancePerStep) moveVerified;
	if (true == moveVerified){
		Maps::updatePositionOfUnit(unitID, x, y);
	}
	else{
		std::cout << "Move (" << x << "," << y << ") not possible! \n[!]Could not be verified.";
	}
}

// getter/setter functions
int Unit::getID(void){
	return unitID;
}

int Unit::getType(void){
	return unitType;
}

pair<int, int> Unit::getLocation{
	//do something
}