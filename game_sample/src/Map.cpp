/*
Game interface example using Cython

This is the C++ file for Map. It has some attributes and some methods.
*/

#include <iostream>

#include "Map.h"

// constructor
Map::Map(int size_x, int size_y){
    sizeX = size_x;
    sizeY = size_y;
    
    for (int iX = 0; iX < sizeX; iX++){
        for (int iY = 0; iY < sizeY; iY++){
            canvas[iX][iY] = 0;
        }
    }
}

/* main methods */
void Map::loadPositions(int teamCode, int* xPos, int* yPos, int numPos){
    // Loads the positions with teamCode
    // Args:
    //   teamCode: (int) code for the team
    //   xPos: (int, pointer) X-positions for the particular team
    //   yPos: (int, pointer) Y-positions for the particular team
    //   numPos: (int) length of each positions
    for (int i = 0; i < numPos; i++){
        canvas[xPos[i]][yPos[i]] = teamCode;
    }
}

void Map::updatePositionOfUnit(int uid, int x, int y){
    // update the position of the unit
    // Args:
    //     uid: (int) unique unit ID
    //     x: (int) move unit by x position
    //     y: (int) move unit by y position

    canvas[x][y] += uid;
}

void Map::printMap(void){
    for (int iX = 0; iX < sizeX; iX++){
        for (int iY = 0; iY < sizeY; iY++){
            std::cout << canvas[iX][iY] << " ";
        }
        std::cout << "\n";
    }
}