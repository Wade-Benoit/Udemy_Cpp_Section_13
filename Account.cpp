//
//  Account.cpp
//  Secion13_Classes_Objects
//
//  Created by Wade Benoit on 4/2/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//



//   INCLUDE ACCOUNT.H SO THAT DEFINITIONS POSSIBLE

//   CPP FILES DON'T NEED TO BE LINKED TO, THEY ARE COMPILED WHEN RAN!!!!!!!!!!!!!


#include "Account.h"


void Account::set_name(std::string n) {

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
