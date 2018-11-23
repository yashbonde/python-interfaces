cmake_minimum_required(VERSION 3.12)
project(game_sample)

# including libraries for cmake
include(FetchContent)

FetchContent_Declare(
	pybind11_sources
	GIT_REPOSITORY https://github.com/pybind/pybind11.git
	GIT_TAG		   v2.2
)

FetchContent_GetProperties(pybind11_sources)

if(NOT pybind11_sources_POPULATED)
	FetchContent_Populate(pybind11_sources)

	add_subdirectory(
		${pybind11_sources_SOURCE_DIR}
		${pybind11_sources_BINARY_DIR}
	)
endif()

# create python module
add_library(game_map MODULE src/Map.cpp
							src/Unit.cpp
							src/SimpleOps.cpp)
target_link_libraries(game_map PUBLIC pybind11::module)
set_target_properties(game_map PROPERTIES PREFIX "${PYTHON_MODULE_PREFIX}"
										  SUFFIX "${PYTHON_MODULE_EXTENSION}")