# Cython
This is an example of linking C/C++ file to python using the Cython. The main issue with Cython is that the `*.pyx` is like 
a whole different prograaming language which aims to be similar to python, but in reality is quite difficult.

## Running
To run the tutorial run the command:

```bash
python3 setup.py build_ext --inplace
```

This will create the library file `rectangle_wrapper.so` for MacOS and Linux platforms and `rectangle_wrapper.dll` for Windows.
To test the operation of the code run the command:

```bash
python3 test.py
```
