#include <iostream>
#include <cstdlib>
#include <string>
#include "Account.hpp"

using namespace std;

//private
std::string Account::generateAccountNumber() {
  std::string an_str = "Acc Number";
  // for (int i = 0; i < 8; i++) {
  //   int temp = rand() % 10;
  //   an_str += std::to_string(temp);
  // }
  return an_str;
}

//public

//default constructor
Account::Account() {
  first_name = "anonymous";
  last_name = "anonymous";
  //acc_number = generateAccountNumber();
  acc_number = "beewb";
  pin_number = "0000";
  balance = 0;
}

//parameterized constructor
Account::Account(string first, string last, string pin) {
  first_name = first;
  last_name = last;
  setPinNumber(pin);
}


//accessors (getters)
// (const) this function will not change any member variable, return it as a constant
const string &Account::getFirstName() { return first_name; }

const string &Account::getLastName() { return last_name; }

const string &Account::getAccNumber() { return acc_number; }

const string &Account::getPinNumber() { return pin_number; }

const int &Account::getBalance() { return balance; }

//mutators/modifiers (setters)
void Account::setFirstName(const string &first_name) { this->first_name = first_name; }

void Account::setLastName(const string &last_name) { this->last_name = last_name; }

void Account::setAccNumber() {this->acc_number = generateAccountNumber(); }

//functions
bool Account::setPinNumber(string pin) {
  if (pin.length() == 4) {
    this->pin_number = pin;
    return true;
  }
  return false;
}

bool Account::transaction(int amount) {
  if (amount + balance >= 0) {
    this->balance += amount;
    return true;
  }
  return false;
}
