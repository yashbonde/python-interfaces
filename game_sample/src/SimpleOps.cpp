/*
Game interface example using Cython

This is the C++ file for SimpleOps. It has some attributes and some methods.
*/

simple_ops::verifyMove(int x, int y, int maxAllowed){
	// use Manhattan Distance
	return (x+y <= maxAllowed) ? true: false;
}