# importing the dependencies
import os
import sys

# from './build/account' import Account  # isort: skip

# setup accounts
account1 = Account()
account2 = Account()

# Account 1 Transactions
account1.deposit(100.0)
account1.deposit(100.0)
account1.withdraw(50.0)

# Account 2 Transactions
account2.deposit(200.0)
account2.deposit(200.0)

# test
assert account1.get_balance() == 150.0
assert account2.get_balance() == 400.0