// An array of objects and a vector of objects



#include <iostream>
#include <string>
#include <vector>
using namespace std;




class Player {



public:
    //attributes
    string name {"Default"};                    //Initialization in declaration possible with c++11  ************************
    int health {100};
    int xp {0};





    //methods
    void talk (string textToSay) {
        cout << "\n" << name << " says " << textToSay << endl;
    }

    bool isDead ();


};



class Account {


public:
    //Attributes
    string name;
    double balance {1000};



    //Methods
    bool deposit(double amt) {
        this -> balance += amt;
        return true;
    }


    bool withdraw(double amt) {

        int total = this -> balance;

        if (total >= amt) {
            this -> balance -= amt;
        }
        else
            cout << "\nInsufficient Funds" << endl;



        return true;
    }

};



int main() {



    Player Frank;

    Player Hero;

    Player players[] {Frank, Hero};                 //Array of Objects




    vector <Player> playerVec {Frank};              //Vector with an object, and then add another object
    playerVec.push_back(Hero);




    Frank.name = "Frank";                           //Initializing Objects Video Section *************************
    Frank.health = 100;
    Frank.xp = 0;


    Frank.talk("Hi there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy -> xp = 0;

    enemy -> talk("I will destroy you");



    Account *wadesAccount = new Account;

    wadesAccount -> withdraw(900);


    cout << wadesAccount -> balance;





    /////////////
    cout << "\n\nEnd of Program --" << endl;





}



