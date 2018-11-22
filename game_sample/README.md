# Sample Game

I am still unsure about what to use for my [freeciv project](https://github.com/yashbonde/freeciv-python). So building a sample game in C++ and trying to wrap it with python. The idea here is that we have two files. A `map.h` file and `unit.h` file which are both wrapped in the python connected to `game.h`. But all the methods in `map.h` and `unit.h` are connected to a third file which is not connected to python.

The question here is can we make a simple package?

The structure of the package has been refractored and now is of the conventioanla format as following:

```
-game_sample/
	|-README.md
	|-CMakeLists.txt
	|-tests/
		|-test.cpp // this has the main() function
	|-src/
		|- *.h and *.cpp files
```

## Installation and Running

To install the basic code to test if `Map.h` functionalities is working correctly run the following commands

```bash
$ mkdir build
$ cd build
$ cmake ..
$ make
$ ./game_sample
```

## Update Log
`DD-MM-YYYY` format

23.11.2018: Completed the C++ part of the game. It now has a `Map` which is connected to `Unit` which is then connected to `SimpleOps`. We want to connect our python package to the control the `Map` and `Unit` and is not connected to the utils `SimpleOps`. The original code is archieved in `complete_game` folder and is not to be touched.

21.11.2018: Learned how to build and compile using cmake