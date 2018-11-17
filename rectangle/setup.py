# this is the setup file for this project

from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext

setup(ext_modules=[Extension("rectangle_wrapper", 
	["rectangle_wrapper.pyx", "Rectangle.cpp"],
	language="c++",)],
	cmdclass = {'build_ext': build_ext}
)