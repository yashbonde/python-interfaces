/*
Game interface example using Cython

This is the C++ header file for Units. It has some attributes and some methods.
*/

class Unit {
private:
	int unitType;
	int unitID;
	int locX, locY; // location of unit
	int maxDistancePerStep; // maximum distance that the unit can move 

public:
	Unit(int, int);
	
	// methods
	void move(int, int);

	// getter/setter
	pair<int, int> getLocation(void);
	int getType(void);
	int getID(void);
};