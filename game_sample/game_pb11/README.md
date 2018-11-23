# Sample Game - using `pybind11`

For my [freeciv project](https://github.com/yashbonde/freeciv-python) I have two simple options, using pybind11, or writing from scratch using cython. Now I know there is another option Boost.python, but I am having a hard time getting it running, and If I am facing that problem then I cannot use that. This project is aimed at people who simply want to test their model and not worry about anything. That should be the aim of programming, afterall! I also have a cython version of it but I am writing that after this, so read my thoughts in that order.

Anyways so the folder `../completed_game` has the complete original stuff that doesn't necesarily do anything. It's just stupid. But it has structure like this: we have two files, a `Map.h` file connected to user and `Unit.h` file. But the methods in `Map.h` and `Unit.h` are connected to a third file which is not connected to python. The question here is can we make a simple package?

The structure of the package has been refractored and now is of the conventioanl format as following:

```
-game_sample/
	|-README.md
	|-CMakeLists.txt
	|-src/
		|- *.h and *.cpp files
		|- test.py
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