#include <pybind11/pybind11.h>

// methods
int add(int i, int j){
	return (i + j);
}

// creating the macro
PYBIND11_MODULE(example, mod){
	// docstring
	// mod.doc() = "pybind11 example";
	// skipping, not compiling

	mod.def("add", &add, "function to add two numbers");
}
