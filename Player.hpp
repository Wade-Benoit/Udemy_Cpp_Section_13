//
//  Player.hpp
//  Secion13_Classes_Objects
//
//  Created by Wade Benoit on 5/17/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//

#ifndef Player_h
#define Player_h

#include <stdio.h>
#include <string>



class Player {
    
private:
    std::string name;    //std needed because no using namespace std;
    int health;
    int xp;
    
    static int numOfPlayers;
    
public:
    
    //getters:
    std::string getName() const {return name;}
    int getHealth() const {return health;}
    int getxp() const {return xp;}
    
    //Default Constructor
    Player(std::string name_val = "None", int health_val = 100, int xp_val = 0);
    
    //Copy Constructor
    Player(const Player &source);
    
    //Destructor
    ~Player();
    
    //getter for static int numOfPlayers
    static int getNumOfPlayers();
    
};

#endif /* Player_h */
