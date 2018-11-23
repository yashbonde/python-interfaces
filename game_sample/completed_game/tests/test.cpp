// test file for game_sample project

#include <iostream>
#include <vector>

#include "Map.h"

#define SIZE 6

using namespace std;

int main(void){
	Map gameMap(SIZE, SIZE, SIZE, SIZE);

	// print the map at curreent state
	gameMap.printMap();

    // passing the array is automatically sending
    // the pointer to the first element

	// push team A positions
	// team A = -1;
	cout << "[*] Making postions for team A\n";
	int teamA_xPos[SIZE] = {0, 1, 2, 3, 4, 5};
	int teamA_yPos[SIZE] = {0, 1, 0, 1, 0, 1};
    gameMap.loadPositions(-1, teamA_xPos, teamA_yPos, SIZE);

	// get team B positions
	// team B = 1
	cout << "[*] Making postions for team B\n";
	int teamB_xPos[SIZE] = {0, 1, 2, 3, 4, 5};
	int teamB_yPos[SIZE] = {4, 5, 4, 5, 4, 5};
	gameMap.loadPositions(1, teamB_xPos, teamB_yPos, SIZE);

	// print the map to see positions
	std::cout << "\n[*] Positions Loaded.. \n";
	gameMap.printMap();

	gameMap.printUnitStats();

	/* Unleash the TRON, the idea here is pretty simple and I spent more time thinking
	on the opening line than what will happen here. Over multiple turn the AI agents
	randomly chose movement values from 0 to whatever and just update the map everytime */

	int numActions = 10;
    std::vector<Unit> allUnits = gameMap.getUnits();
    std::cout << "Starting the Game...\n";

	for (int act_i = 0; act_i < numActions; act_i++){
	    // take random actions for the numAction number of unit
	    int x_action = (rand()%2) - 1;
        int y_action = (rand()%2) - 1;
        int uid = allUnits[act_i].getID(), teamCode = allUnits[act_i].getTeamCode();
	    allUnits[act_i].move(x_action, y_action);
	    gameMap.updatePositionOfUnit(uid, teamCode);
	}

	// get the final map
	// NOTE: it may be wrong
	gameMap.printMap();

}