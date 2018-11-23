/*
header file for account example
*/

#ifndef SRC_ACCOUNT
#define SRC_ACCOUNT

#include <pybind11/pybind11.h>

class Account
{
private:
	double balance;

public:
	Account();
	~Account();
	
	void deposit(const double);
	void withdraw(const double);

	double get_balance(void) const;
};

namespace py = pybind11;

PYBIND11_MODULE(account, mod) {
	py::class_<Account>(mod, "Account")
		.def(py::init())
		.def("deposit", &Account::deposit)
		.def("withdraw", &Account::withdraw)
		.def("get_balance", &Account::get_balance);
}

#endif