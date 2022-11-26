#include <iostream>
#include "Account.hpp"
using namespace std;

int main(){
    Account myAccount("Fla", "Chang", "0916");

    cout<<myAccount.getFirstName()<<endl;
    cout<<myAccount.getAccNumber()<<endl;
    cout<<myAccount.getBalance()<<endl;
    cout<<myAccount.getPinNumber()<<endl;
    myAccount.setPinNumber("0111");
    cout<<myAccount.getPinNumber()<<endl;
    
    myAccount.setPinNumber("92382983");
    cout<<myAccount.getPinNumber()<<endl;

    myAccount.transaction(100);
    cout<<myAccount.getBalance()<<endl;
    
    cout<<myAccount.getAccNumber()<<endl;
}