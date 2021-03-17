//                                        the COPY CONSTRUCTOR
//        used when an object is passed by value, returned by funtion, or to consturct new object based on existing object
//        There is a compiler generated copy of an object used when no Copy Constructor defined
//        This is often fine, unless a pointer is used in object definition, then user-defined object needed
//        Avoid using raw pointer data members if possible, use smart pointers?
//        Always use const and & (reference) like so:
//        Player::Player(const Player &source) {}      or        Type::Type(const Type &source) {}
//        with a copy constructor to avoid having to produce a compiler generated copy when using copy constructor




//                                         PART 1: Copy Consructor



#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {

private:
    string name;
    int health;
    int xp;

public:

    Player(string name_val = "None", int health_val = 100, int xp_val = 0);  //Constructor with default argument parameters
    Player(const Player &source);           // COPY CONSTRUCTOR
    ~Player() {cout << "Destructor called for: " << name << endl <<endl;}   //Destructor with message

    //Getters, all defined inside class so name, health, and xp are referenced without this->
    string getName() {return name;}
    int getHealth() {return health;}
    int getXP() {return xp;}

};

void displayPlayer(Player);


int main() {


    Player empty("XXXXXXX", 100, 50);

    Player myNewObject(empty);        // Copy Constructor used here to make a copy of "empty" called myNewObject!!

    displayPlayer(empty);






    Player Wade("Wade", 20);
    Player Villain("Villain", 20, 80);



    return 0;
}



//Implementation of three args constructor with initialization list
Player::Player(string name_val, int health_val, int xp_val) : name(name_val), health(health_val), xp(xp_val) {
    cout << "Three arguments constructor called for " << name_val << endl;
}




//Implementation of the Copy Constructor
Player::Player(const Player &source): name(source.name), health(source.health), xp(source.xp)
{
    cout << "Copy Constructor Made of " << source.name << endl;
}


//Function to accept/Display a Player object
void displayPlayer(Player p) {
    cout << "Name: " << p.getName() << endl;
    cout << "Health: " << p.getHealth() << endl;
    cout << "XP: " << p.getXP() << endl << endl;
}



