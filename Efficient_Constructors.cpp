//                           Constructor Delegation, reducing redundancy in constructor initialization



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


    Player empty;
    Player Wade("Wade");
    Player Villain("Villain", 20, 80);




    return 0;
}




// NEW WAYS TO INITIALIZE CONSTRUCTOR USING           DELEGATION
Player::Player(): Player("None", 0, 0)  //calls the constructor with three args
{
    //Nothing needed in body
    cout << "No args constructor" << endl;
}


Player::Player(string name_val): Player(name_val, 0, 0)  //Delegation again to three args constructor
{
//    name = name_val;      DONT NEED THIS ANYMORE
    cout << "One arg constructor" << endl;
}


Player::Player(string name_val, int health_val, int xp_val) :  //This is the constructor all other constructors delegate to
name(name_val), health(health_val), xp(xp_val)
{
    //Nothing here
    cout << "Three args constructor" << endl;
}


