#include <iostream>
#include "Bank.hpp"
#include <cstdlib>
#include <string>
using namespace std;

//default constructor
Bank::Bank() {
    Bank bankAccounts[200];
    numAccounts = 0;
}

string Bank::createAccount(string first_name, string last_name, string pin_number){
    newAcc = Account(first_name, last_name, pin_number);
    if(numAccounts != 200){
        bankAccounts[numAccounts] = newAcc;
        numAccounts++;
        return newAcc.getPin();
    }
    return "-1";
}

bool Bank::removeAccount(string acc_number){
    for(int i = 0; i < 200; i++){
        if(bankAccounts[i].getAccountNumber() == acc_number){
            bankAccounts[i] = NULL;
            return true;
        }
    }
    return false;
}

bool Bank::withdraw(int amount, string acc_number, string pin_number){
    for(int i = 0; i < 200; i++){
        if(bankAccounts[i] == NULL)
            continue;
        if(bankAccounts[i].getAccountNumber() == acc_number){
            if(bankAccounts[i].getPin() == pin_number){
                if(bankAccounts[i].transaction(-1 * amount)){
                    return true;
                }
            }
        }
    }
    return false;
}

bool Bank::deposit(int amount, string acc_number, string pin_number){
    for(int i = 0; i < 200; i++){
        if(bankAccounts[i] == NULL)
            continue;
        if(bankAccounts[i].getAccountNumber() == acc_number){
            if(bankAccounts[i].getPin() == pin_number){
                if(bankAccounts[i].transaction(amount)){
                    return true;
                }
            }
        }
    }
    return false;
}

int Bank::getAccountBalance(string acc_number, string pin_number){
    for(int i = 0; i < 200; i++){
        if(bankAccounts[i] == NULL)
            continue;
        if(bankAccounts[i].getAccountNumber() == acc_number){
            if(bankAccounts[i].getPin() == pin_number){
                    return bankAccounts[i].getAccountBalance();
            }
        }
    }
    return -1;
}
