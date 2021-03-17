//                      Further reducing constructor redundancy using default parameters in the constructor
//                         Not always best to use, but handy when you can






#include <iostream>
#include <string>

using namespace std;


class Player {

private:
    string name;
    int xp;
    int health;


public:

    //Only One Constructor Needed

    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    //All arguments have default parameter values

    // If you were to define a no args constructor now it would cause ambiguity error



    string getName();


    void setName(string name_val);

    void displayPlayer();

};




int main() {


    Player empty;
    Player Wade("Wade", 20);
    Player Villain("Villain", 20, 80);

    empty.displayPlayer();
    Wade.displayPlayer();
    Villain.displayPlayer();


    return 0;
}





// Only the Three-Args constructor needs to be defined

Player::Player(string name_val, int health_val, int xp_val) :
name(name_val), health(health_val), xp(xp_val)
{
    //Nothing here
    cout << "Three args constructor called" << endl;
}



//Display Player definition for class method

void Player::displayPlayer() {
    cout << "Name of the player is " << this->name << endl;               // YES, This is how you display an object
    cout << "The xp of the player is " << this->xp << endl;
    cout << "The health of the player is " << this->health << endl;
}

