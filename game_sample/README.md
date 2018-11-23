# Sample Game

I am still unsure about what to use for my [freeciv project](https://github.com/yashbonde/freeciv-python). So building a sample game in C++ and trying to wrap it with python, this is a joke, this isn't even a real game, :-(. I am trying two different approaches, one using cython and the other using pybind11.

Now you can think of cython as C/C++ for the python programmer, and pybind11 as the other way around python for C/C++ programmer. There are advantages adn disadvantages to using one over the other.

## Folders

There are three different folders here and I built them in this order:

1. `completed_game`: The original code archieved to see what is happening and how it should behave. Just for redundany.

2. `game_pb11`: Using pybind11 and CMake to get the final `*.so` file.

3. `game_cython`: Using cython

## Update Log
`DD-MM-YYYY` format

24.11.2018: The pybind11 version is still giving me issues, I still haven't figured out how to use CMake and pybind11 to combine multiple files into one executable, will come back to it later. Starting the Cython version now.

23.11.2018: Completed the C++ part of the game. It now has a `Map` which is connected to `Unit` which is then connected to `SimpleOps`. We want to connect our python package to the control the `Map` and `Unit` and is not connected to the utils `SimpleOps`. The original code is archieved in `complete_game` folder and is not to be touched.

21.11.2018: Learned how to build and compile using cmake