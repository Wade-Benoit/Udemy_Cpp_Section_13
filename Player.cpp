//
//  Player.cpp
//  Secion13_Classes_Objects
//
//  Created by Wade Benoit on 5/17/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;



//Initialization of Static Variable here, best done in .cpp file
int Player::numOfPlayers = 0;





// Default Constructor
Player::Player(std::string name_val, int health_val, int xp_val): name(name_val), health(health_val), xp(xp_val) {
    cout << "Default Constructor Used" << endl;
    numOfPlayers++;                //This is where the number of players increases
}

//Copy Constructor
Player::Player(const Player &source) : Player(source.name, source.health, source.xp) //Delegation
{                                                                               //To the Constructor
    cout << "Copy Constructor Used For " << source.name << endl;
}

//Destructor
Player::~Player() {
    cout << "Destructor used" << endl;
    numOfPlayers--;           //Decrementing static variable number of players
}





//Implementation of the static function getNumOfPlayers
int Player::getNumOfPlayers() {
    return numOfPlayers;
}
