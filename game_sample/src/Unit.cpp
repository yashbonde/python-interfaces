/*
Game interface example using Cython

This is the C++ file for Units. It has some attributes and some methods.
*/

#include "SimpleOps.h"
#include "Maps.h"
#include "Unit.h"

Unit::Unit(string type, int id, int team_code, int max_d_ps){
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

	bool simple_ops::verifyMove(x, y, maxDistancePerStep) moveVerified;
	if (true == moveVerified){
		Maps::updatePositionOfUnit(unitID, x, y);
	}
	else{
		std::cout << "Move (" << x << "," << y << ") not possible! \n[!]Could not be verified.";
	}
}

void Unit::initializeFromPosition(int x, int y){
	locX = x; locY = y;
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