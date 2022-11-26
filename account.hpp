#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account {
private:

    this->string first_name;
    this->string last_name;
    this->string acc_number;
    this->string pin_number;
    this->int balance;

    string Account::generateAccountNumber();
    
public:

//default constructor
    Account(){
        string first_name = "anonymous";
        string last_name = "anonymous";
        string acc_number = generateAccountNumber();
        string pin_number = "0000";
        int balance = 0;
    }
    
//parameterized constructor
    Account(string first, string last, string pin){
        first_name = first;
        last_name = last;
        if(setPinNumber(pin))
            pin_number = pin;
        else
            pin_number = "0000";
    }

//accessors (getters)
// (const) this function will not change any member variable, return it as a constant
    inline const string& getFirstName() const { return this->first_name; }
    inline const string& getLastName() const { return this->last_name; }
    inline const string& getAccNumber() const { return this->acc_number; }
    inline const string& getPinNumber() const { return this->pin_number; }
    inline const int& getBalance() const { return this->balance; }

//mutators/modifiers (setters)
    inline void setFirstName(const string& first_name) { this->first_name = first_name; }
    inline void setLastName(const string& last_name) { this->last_name = last_name; }
    bool setPinNumber(string& pin_number){
        if(pin_number.length() == 4){
            this->pin_number = pin_number;
            return true;
        }
        return false;
    }
    


}

