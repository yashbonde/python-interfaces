# Sample Game

I am still unsure about what to use for my [freeciv project](https://github.com/yashbonde/freeciv-python). So building a sample game in C++ and trying to wrap it with python. The idea here is that we have two files. A `map.h` file and `unit.h` file which are both wrapped in the python connected to `game.h`. But all the methods in `map.h` and `unit.h` are connected to a third file which is not connected to python.

The idea here is can we make a simple package here.