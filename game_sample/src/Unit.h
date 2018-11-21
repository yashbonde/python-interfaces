/*
Game interface example using Cython

This is the C++ header file for Units. It has some attributes and some methods.
*/

class Unit {
private:
	string unitType;
	int teamCode;
	int unitID;
	int maxDistancePerStep; // maximum distance that the unit can move 

	int locX, locY; // location of unit

public:
	Unit(string, int, int, int);
	
	// methods
	void move(int, int);
	void initializeFromPosition(int, int);

	// getter/setter
	pair<int, int> getLocation(void);
	int getType(void);
	int getID(void);
};