/*
Game interface example using Cython

This is the C++ file for SimpleOps. It has some attributes and some methods.
*/

#include <cmath>
#include <iostream>

namespace simple_ops{

bool verifyMove(int x, int y, int maxAllowed, int locX, int locY, int canvasX, int canvasY){
	/* In reality it is very stupid to have a function like this, if a function is going to
	have so many parameters and do so little, let's just keep it in the main code itself.

	The reason to use this kind of function is because we needed to have functions outside
	the main files which are to be ported*/
	int manhattanDistance = abs(x) + abs(y);
	// locX += x;
	// locY += y;

	/*
	bool x_true = (0 <= locX + x < canvasX);
	bool y_true = (0 <= locY + y < canvasY);
	bool allowed = (manhattanDistance <= maxAllowed);
	*/

	if ((0 <= locX + x < canvasX) && (0 <= locY + y < canvasY) && (manhattanDistance <= maxAllowed)){
		return true;
	}
	return false;
}


// namespace ends
};