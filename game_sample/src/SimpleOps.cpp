/*
Game interface example using Cython

This is the C++ file for SimpleOps. It has some attributes and some methods.
*/

#include <cmath>

namespace simple_ops{

simple_ops::verifyMove(int x, int y, int maxAllowed){
	// use Manhattan Distance
	return (abs(x)+abs(y) <= maxAllowed) ? true: false;
}

// close namespace
}