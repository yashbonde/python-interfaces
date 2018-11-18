# Pybind 11

Pybind11 is a simple header only interfacing package based on boost.python. It is very easy compared to Boost 
though with every C/C++ there is a strong learning curve compared to python. It's simplicity and scale is promising 
and looks liek a candidate for my freeciv wrapper project.

## Running
To run the addition example `add_ex.cpp` run the command for macOS:
```bash
c++ -O3 -Wall -shared -std=c++11 -undefined dynamic_lookup `python3 -m pybind11 --includes` add_ex.cpp -o add_ex`python3-config --extension-suffix`
```

This will create a `*.so` file, for simplicity I renamed it to `add_ex.so`.

## Python

On your terminal go to the folder with generated library and run the following commands:
```bash
$ python3
> import add_ex
> add_ex.add(12, 23)
35
>
```

We can see that the result is proper and the file is working as intended.
