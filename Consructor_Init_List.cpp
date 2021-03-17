//                                  Consructor Initialization Lists


#include <iostream>
#include <string>

using namespace std;


class Player {



private:
    string name;
    int xp;
    int health;


public:

    //Constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);

    //getter for name attribute
    string getName();

    //setter for name attribute
    void setName(string name_val);

};


int main() {


    return 0;
}






//Default Constructor NOT using initialization list
//Player::Player() {
//
//    name = "none";
//    xp = 0;
//    health = 100;
//}



// NEW WAYS TO INITIALIZE CONSTRUCTOR USING INITIALIZER LIST
Player::Player(): name("None"), health(100), xp(0)
{
    //Nothing needed in body
}


Player::Player(string name_val): name(name_val), health(100), xp(0)
{
//    name = name_val;      DONT NEED THIS ANYMORE
}


Player::Player(string name_val, int health_val, int xp_val) :
name(name_val), health(health_val), xp(xp_val)
{
    //Nothing here
}

