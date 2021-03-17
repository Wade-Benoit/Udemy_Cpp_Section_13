//                              Defining Methods in and out of declaration

#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Account {

private:
    double balance;
    string name;




public:



    //Inline Methods here
    void setBalance(double amt) { balance = amt;}

    double getBalance() {return balance;}



    //Implemented below main()
    void set_name(string);

    bool deposit(double);

    bool withdraw(double);



};








int main() {

    Account WadesAccount;

    WadesAccount.set_name("Wade");
    WadesAccount.deposit(200.00);



    return 0;
}






//                                        Implementation outside class



void Account::set_name(string n) {

    name = n;

}


bool Account::deposit(double amt) {

    balance += amt;

    return true;
}


bool Account::withdraw(double amt) {


    if (balance - amt >= 0) {
        balance -= amt;
        return true;
    }
    else
        return false;
}














//                            Using separate files for declaration and implementation
//                          This is just main.cpp


#include <iostream>
#include <vector>
#include "string"

#include "Account.h"
using namespace std;



int main() {

    Account WadesAccount;


    WadesAccount.deposit(3000);
    cout << WadesAccount.getBalance() << endl;


}
