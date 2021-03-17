//                                 CONSTRUCTORS AND DESTRUCTORS


#include <iostream>
#include <string>

using namespace std;



class Player {

private:
    string name;
    int health;
    int xp;

public:

    void set_name(string n) {name = n;}

    // CONSTRUCTORS
    Player() {
        cout << "\nDefault constructor called" << endl;
    }

    Player(string name) {
        cout << "\nName constructor called" << endl;
    }

    Player(string name, int health, int xp) {
        cout << "\nComprehensive constructor called" << endl;
    }


    // DESTRUCTOR

    ~Player() {
        cout << "\nDestrctor Called" << endl;
    }


};


int main() {


    {
        Player Wade;
    }
    //              Once out of scope, destructor automatically called


    {
        Player Slayer("Slayer");
    }

    {
        Player Default("Default", 100, 0);
    }


    //                 Program shows how once in and out of scope the constructors and destructors are called.
}

