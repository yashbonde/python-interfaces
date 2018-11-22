cmake_minimum_required (VERSION 2.6)

# setting the C standards
set(CMAKE_CXX_STANDARD 11)

# our source code is placed in src directory, need to add that to the cmake
include_directories(src)

add_executable(game_sample
	src/SimpleOps.h
	src/SimpleOps.cpp
	src/Unit.h
	src/Unit.cpp
    src/Map.h
    src/Map.cpp
    tests/test.cpp)