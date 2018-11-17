// this is the C++ code for using the cython interface
// this is the .cpp file

#include "Rectangle.hpp"

namespace shapes
{	
	// constructor
	Rectangle::Rectangle(int X0, int Y0, int X1, int Y1){
		x0 = X0;
		y0 = Y0;
		x1 = X1;
		y1 = Y1;
	}

	// destructor
	Rectangle::~Rectangle() { }

	// ops
	int Rectangle::getLength() { return (x1 - x0); } 
	int Rectangle::getHeight() { return (y1 - y0); } 
	int Rectangle::getArea() { return (x1 - x0) * (y1 - y0); } 

	void Rectangle::move(int dx, int dy) {
		x0 += dx;
		x1 += dx;
		y0 += dy;
		y1 += dy;
	}
}