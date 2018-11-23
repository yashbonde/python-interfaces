/*
Game interface example using Cython

This is the C++ header file for Maps. It has some attributes and some methods.
*/

#ifndef GAME_MAP
#define GAME_MAP

#include <stdio.h>
#include <vector>

#include <pybind11/pybind11.h>

#include "Unit.h"

class Map {
private:
	int canvas[6][6];
	int sizeX, sizeY;
	int numUnits_teamA, numUnits_teamB;

	std::vector<Unit> allUnits;

public:
	Map(int, int, int, int);

	// units
	void printUnitStats(void);
	std::vector<Unit> getUnits(void);


	// methods
	void loadPositions(int, int*, int*, int);
	void updatePositionOfUnit(int, int);
	void printMap(void);
	
};

/*============ PYBIND11 ============*/

namespace py = pybind11;

PYBIND11_MODULE(Map, mod) {
	py::class_<Map>(mod, "Map")
		.def(py::init<int, int, int, int>())
		.def("print_unit_stats", &Map::printUnitStats)
		.def("get_units", &Map::getUnits)

		.def("load_positions", &Map::loadPositions)
		.def("update_position_of_unit", &Map::updatePositionOfUnit)
		.def("print_map", &Map::printMap);
}

#endif // GAME_MAP