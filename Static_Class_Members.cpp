//                                            STATIC CLASS MEMBERS
//                      Static Class Members are members that belong to the class, not any one object from class
//                      Used in this example for number of objets created from class



#include <iostream>
#include <string>
#include "Player.h"

using namespace std;


void displayActivePlayers() {
    cout << "Active Players: " << Player::getNumOfPlayers() << endl;
}

int main() {


    displayActivePlayers();


    Player hero("Hero");

    displayActivePlayers();

    {
        Player rando("Random", 20, 100);

        displayActivePlayers();
    } // As soon as out of scope the rando player is no longer active, destructor is used



    Player *enemy = new Player("Enemy");
    displayActivePlayers();
    delete enemy;

    return 0;
}





//                                      Struct Vs. Class
//                A struct is the same as a class except all methods/members are public
//                Generally use structs as passive, don't make member functions in a struct







//                                     Friends of a Class
//              A function can be declared as a friend inside the class allowing for it to
//              have access to the class private data members, no longer needs to use public
//              methods to access.
//              Ex:  friend void displayPlayer(const Player &p);  inside the class Player
//              You can declare an entire other class as a friend.
//              Ex:  friend class other_class;      inside the class
