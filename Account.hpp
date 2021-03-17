//
//  Account.hpp
//  Secion13_Classes_Objects
//
//  Created by Wade Benoit on 4/2/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//




//     DO NOT USE NAMESPACE STD BECAUSE IT TAKES UP SPACE

#ifndef Account_h
#define Account_h

#include <stdio.h>
#include <iostream>
#include <string>




class Account {

private:
    
    double balance;
    std::string name;




public:



    //Inline Methods here
    void setBalance(double amt) { balance = amt;}

    double getBalance() {return balance;}



    //Implemented below main()
    void set_name(std::string);

    bool deposit(double);

    bool withdraw(double);



};





#endif /* Account_h */
