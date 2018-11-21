// test file for game_sample project

#include <vector>

#include "Map.h"
#include "Unit.h"

#define SIZE 6

using namespace std;

int main(void){
	Map gameMap(SIZE, SIZE);

	// print the map at curreent state
	gameMap.printMap();

	// push team A positions
	// team A = -1;
	int teamA_xPos[SIZE] = {0, 1, 2, 3, 4, 5};
	int teamA_yPos[SIZE] = {0, 1, 0, 1, 0, 1};

	// get team B positions
	// team B = 1
	int teamB_xPos[SIZE] = {0, 1, 2, 3, 4, 5};
	int teamB_yPos[SIZE] = {4, 5, 4, 5, 4, 5};

	// passing the array is automatically sending
	// the pointer to the first element
	gameMap.loadPositions(-1, teamA_xPos, teamA_yPos, SIZE);
	gameMap.loadPositions(1, teamB_xPos, teamB_yPos, SIZE);

	// print the map to see positions
	std::cout << "\n[*] Positions Loaded.. \n";
	gameMap.printMap();

	// the idea here is that each unit has a unique ID and can move around in the world
	// we need to run loops to load all the units
	int num_units = SIZE*2, teamCode = -1;
	std::vector<Unit> allUnits;

	for (int unit_idx=0; unit_idx < num_units; unit_idx++){
		if (unit_idx == SIZE){
			teamCode = 1; // update the team code
		}

		allUnits.push_back(Unit('Spartans', unit_idx, teamCode, rand() % 6))
	}

}