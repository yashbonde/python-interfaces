// test file for game_sample project

#include "Map.h"

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
	gameMap.printMap();
}