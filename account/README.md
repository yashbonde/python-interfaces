# Account

This is a simple example from cmake-cookbook ([here](https://github.com/dev-cafe/cmake-cookbook)). In this particular example we are looking at Chapter-9, Recipe-05, to connect C++ and python using pybind 11. A simple class in C++ is made and used in python.

## Usage

```bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```

This will generate a `account*.so` file. Open `python3` from terminal and the following commands will run:

```python
> from account import Account
> a = Account()
> a.deposit(420.)
> assert a.get_balance() == 420.
```