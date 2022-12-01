#include <iostream>
#include "Account.hpp"
using namespace std;

int main(){

    Account myAccount("Fla", "Chang", "0916");

    cout<<myAccount.getFirstName()<<endl;
    cout<<myAccount.getAccountNumber()<<endl;
    cout<<myAccount.getBalance()<<endl;
    myAccount.setPin("0111");
    cout<<myAccount.getPin()<<endl;
    
    myAccount.setPin("92382983");
    cout<<myAccount.getPin()<<endl;

    myAccount.transaction(100);
    cout<<myAccount.getBalance()<<endl;
    
    cout<<myAccount.getAccountNumber()<<endl;

}