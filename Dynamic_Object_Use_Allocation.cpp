//
//  main.cpp
//  Secion13_Classes_Objects
//
//  Created by Wade Benoit on 3/12/20.
//  Copyright © 2020 Software Systems. All rights reserved.
//






//                              INTRO NOTES
// Object Oriented Programming has limitations, but more often used in large complex programs
// Procedural programming is the alternative, less efficient coding practice.
// A class is a blueprint for the construction of an object
// An object is an instance of a class






// Using a Dynamically Allocated Object

#include <iostream>
#include <string>
using namespace std;


class Class_Name {

    //Declarations;

};



class Player {


public:
    int age;
    string name;


};



void displayPlayer(Player *player) {


    string playerName = player->name;

    cout << "\n\nThis player's name is: ";
    cout << playerName;
    cout << ". " << endl << endl;


    cout << playerName << " is ";
    cout << player->age;
    cout << " years old.\n\n\n\n\n";

}


int main(int argc, const char * argv[]) {
    // insert code here...

    //   CREATING AN OBJECT DYNAMICALLY FROM THE HEAP *******************************

    Player *one = new Player;

    cout << "Name your player here: " << endl;
    cin >> one->name;

    cout << "\n\nHow old is your player? Enter age here: " << endl;
    cin >> one->age;


    displayPlayer(one);  //***************************************************




    delete one;

    std::cout << "\nEnd of program--\n";
    return 0;
}

