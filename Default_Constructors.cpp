                                        // DEFAULT CONSTRUCTORS



#include <iostream>
#include <string>


using namespace std;


class Player {


private:
    string name;
    int xp;
    int health;


public:


    //Default here:
    Player() {
        name = "None";
        xp = 0;
        health = 100;
    }

    //Overloaded Constructor:
    Player(string n, int xpVal, int healthVal) {
        name = n;
        xp = xpVal;
        health = healthVal;
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

};


int main() {

    //No default constructor declared, still able to make objects using default const automaticaly
    Player *wade = new Player;
    wade->setName("Wade");

    // or

    (*wade).setName("Wade2");

    string theName = wade->getName();
    cout << "\nThe name of your player is " << theName << ". " << endl;



    // Using overloaded constructor
    Player Frank("Frank", 100, 10);

    cout << Frank.getName() << endl;


    return 0;
}


