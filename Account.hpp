#pragma once
#include <iostream>
#include <string>

using namespace std;

class Account {
private:

  string first_name;
  string last_name;
  string acc_number;
  string pin_number;
  int balance;

  std::string generateAccountNumber();

public:

//default constructor
  Account();

//parameterized constructor
  Account(string first, string last, string pin);

//accessors (getters)
// (const) this function will not change any member variable, return it as a constant
  const string &getFirstName();

  const string &getLastName();

  const string &getAccNumber();

  const string &getPinNumber();

  const int &getBalance();

//mutators/modifiers (setters)
  void setFirstName(const string &first_name);

  void setLastName(const string &last_name);

  void setAccNumber();

  bool setPinNumber(string pin);

  bool transaction(int amount);
};