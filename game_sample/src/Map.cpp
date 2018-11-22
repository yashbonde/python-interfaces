/*
Game interface example using Cython

This is the C++ file for Map. It has some attributes and some methods.
*/

#include <iostream>
#include <vector>

#include "Map.h"
#include "Unit.h"

// constructor
Map::Map(int size_x, int size_y, int num_units_team_A, int num_units_team_B){
    sizeX = size_x;
    sizeY = size_y;
    
    for (int iX = 0; iX < sizeX; iX++){
        for (int iY = 0; iY < sizeY; iY++){
            canvas[iX][iY] = 0;
        }
    }

    /* The part where we are intializing the units was initially in the main loop.
    But that is just stupid. Why would you spawn units in the the main loop itself.
    The map should give the units not the other way around.
    */
    // std::vector<Unit> allUnits;
    int teamCode = -1;
    numUnits_teamA = num_units_team_A;
    numUnits_teamB = num_units_team_B;

    for (int unit_idx=0; unit_idx < numUnits_teamA + numUnits_teamB; unit_idx++){
        if (unit_idx == numUnits_teamA){
            teamCode = 1; // update the team code
        }
        allUnits.push_back(Unit("Spartans", unit_idx, teamCode, (rand()%4)+1 ));
        // allUnits[unit_idx].printSpecs();
    }

    // std::cout << "[*] Number of units are now: " << allUnits.size() << "\n";
}

/* main methods */
void Map::loadPositions(int team_code, int* xPos, int* yPos, int numPos){
    // Loads the positions with teamCode
    // Args:
    //   teamCode: (int) code for the team
    //   xPos: (int, pointer) X-positions for the particular team
    //   yPos: (int, pointer) Y-positions for the particular team
    //   numPos: (int) length of each positions
    for (int i = 0; i < numPos; i++){
        canvas[xPos[i]][yPos[i]] = team_code;

        int unit_idx = i;
        if (team_code == 1)
           unit_idx = i+numUnits_teamA;

        allUnits[unit_idx].setLocation(xPos[i], yPos[i]);
    }
}

void Map::updatePositionOfUnit(int uid, int teamCode){
    // update the position of the unit
    // Args:
    //     uid: (int) unique unit ID
    //     x: (int) move unit by x position
    //     y: (int) move unit by y position

    int x = allUnits[uid].locX, y = allUnits[uid].locY;
    canvas[x][y] += teamCode;
}

void Map::printMap(void){
    for (int iX = 0; iX < sizeX; iX++){
        for (int iY = 0; iY < sizeY; iY++){
            std::cout << canvas[iX][iY] << " ";
        }
        std::cout << "\n";
    }
}

void Map::printUnitStats(void){
    for (int it = 0; it < allUnits.size(); it++){
        allUnits[it].printSpecs();
    }
}

std::vector<Unit> Map::getUnits(void){
    // function to return all the units
    return allUnits;
}