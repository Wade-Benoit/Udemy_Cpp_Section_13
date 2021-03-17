//                                  Using const with classes, Const Correctness
//
//
//                  const Player Villain("Villain", 100, 50);   Unable to change object with const identifier
//                  We will be unable to use any method in class without const after parethesis like so:
//                          void displayPlayerName() const;
//                  This allows const objects to be used, as long as the object is not changed in any way
//                  All of this is part of the concept of CONST CORRECTNESS, an important concept in CS




#include <iostream>
#include <vector>
#include <string>

using namespace std;



class Player {
private:
    string name;
    int health;
    int xp;

public:

    //name getter
    string getName() const {return name;}

    //name setter
    void setName(string nameVal) {name = nameVal;}

    //Constructors/Overloaded Constructors
    Player();

    Player(string name_val);

    Player(string name_val, int health_val, int xp_val);

};


//Implementations:

Player::Player(): name("None"), health(100), xp(0) {
    cout << "Default Constructor Used" << endl;
}

Player::Player(string name_val): name(name_val), health(100), xp(0) {
    cout << "One Arg Constructor Used" << endl;
}

Player::Player(string name_val, int health_val, int xp_val): name(name_val), health(health_val), xp(xp_val) {
    cout << "Three Arg Constructor Used" << endl;
}


//Display Player Object Function
void displayPlayer(const Player &p) {
    cout << p.getName() << endl;
}



int main() {


    const Player Villain("Villain", 100, 50);  //HERE IS THE CONST OBJECT CREATION
    Player Hero("Hero", 100, 15);

    //    Villain.health = 20;     THIS WILL NEVER BE ALLOWED, EVEN IF HEALTH WAS PUBLIC, BECAUSE VILLAIN IS A CONST OBJECT

    //    cout << Villain.getName() << endl;     THIS WILL ALSO NOT BE ALLOWED, getName() is not a const member function
    cout << Hero.getName() << endl;            // THIS WORKS BECAUSE HERO IS NOT A CONST OBJECT








    //Now that getName() is a const member function

    cout << Villain.getName() << endl;            //Works even though Villain is a const object




    return 0;
}


//                  OVERALL: ALL MEMBER FUNCTIONS THAT DO NOT CHANGE OBJECT SHOULD BE CONST!!!!
