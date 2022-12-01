#include <iostream>
#include <string>
#include "Account.hpp"
using namespace std;

class Bank {
private:

  Bank bankAccounts[200];
  int numAccounts;

public:

  Bank();

  string createAccount(string first_name, string last_name, string pin_number);
  bool withdraw(int amount, string acc_number, string pin_number);
  bool removeAccount(string acc_number);
  bool deposit(int amount, string acc_number, string pin_number);
  int getAccountBalance(string acc_number, string pin_number);
};