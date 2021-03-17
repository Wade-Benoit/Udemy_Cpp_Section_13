//                                          Move Constructors
//              The move constructor moves the object, it does not create a copy, causing less overhead for the program
//              R-Value Reference Operator: (&&)



//      L-value reference parameter example:
//
//      int x = 100;              x is an L-Value
//      void func(int &num);      func expects an L-Value as a parameter
//      func(x);                  Allowed
//      func(200);                Error - 200 is an R-Value


//      R-value reference parameter example:
//
//      int x = 100;              x is an L-Value
//      void func(int &&num);     func expects an R-Value as a parameter, && indicates this
//      func(200);                Allowed
//      func(x);                  Error - x is an L-Value



//      Overload Example:
//
//      void func(int &num);
//      void func(int &&num);     This is allowed, and either an L or R value will be accepted by func




////    Move Constructor example:
//
//    Move(Move &&source) : data(source.data) {        //Notice: no const, simple copy of source.data, and null out source.data
//
//           source.data = nullptr;
//}


#include<iostream>
#include<string>
#include<vector>

using namespace std;




class Move {


private:
    int *data;  // Raw pointer to int
public:

    //getter
    int getData() {
        return *data;
    }

    //setter
    void setData(int d) {
        *data = d;
    }

    // Default Constructor
    Move(int d);

    //Copy Constructor
    Move(const Move &source);

    //Move Constructor
    Move(Move &&source)noexcept;

    //Destructor
    ~Move();

};


//Implementations:

//Default Constructor
Move::Move(int d) {
    data = new int;
    *data = d;
    cout << "Default Constructor for " << d << " used" << endl;
}

//Copy Constructor
Move::Move(const Move &source): Move(*source.data)       // This Move(*source.data) is what makes it a deep copy constructor
{
    cout << "Copy Constructor - Deep Copy for " << *data << " used" << endl;
}

//Move Constructor
Move::Move(Move &&source)noexcept : data(source.data) {
    source.data = nullptr;
    cout << "Move Constructor used, Moving " << *data << endl;
}

//Destructor
Move::~Move() {
    if(data != nullptr) {
        cout << "Destructor freeing data for " << *data << endl;
    }
    else {
        cout << "Destructor freeing data for nullptr" << endl;
    }

    delete data;
}


int main() {

    vector <Move> vec;

    vec.push_back(Move(10));   //This is making a temporary object of Move, making it an R-Value, making Move constructor more efficient


    vec.push_back(Move(20));
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    vec.push_back(Move(50));
    vec.push_back(Move(60));
    vec.push_back(Move(70));
    vec.push_back(Move(80));




    return 0;
}



//Output:

//Default Constructor for 10 used
//Move Constructor used, Moving 10
//Destructor freeing data for nullptr
//Default Constructor for 20 used
//Move Constructor used, Moving 20
//Move Constructor used, Moving 10
//Destructor freeing data for nullptr
//Destructor freeing data for nullptr
//Default Constructor for 30 used
//Move Constructor used, Moving 30
//Move Constructor used, Moving 20
//Move Constructor used, Moving 10
//Destructor freeing data for nullptr
//Destructor freeing data for nullptr
//Destructor freeing data for nullptr
//Default Constructor for 40 used
//Move Constructor used, Moving 40
//Destructor freeing data for nullptr
//Default Constructor for 50 used
//Move Constructor used, Moving 50
//Move Constructor used, Moving 40
//Move Constructor used, Moving 30
//Move Constructor used, Moving 20
//Move Constructor used, Moving 10
//Destructor freeing data for nullptr
//Destructor freeing data for nullptr
//Destructor freeing data for nullptr
//Destructor freeing data for nullptr
//Destructor freeing data for nullptr
//Default Constructor for 60 used
//Move Constructor used, Moving 60
//Destructor freeing data for nullptr
//Default Constructor for 70 used
//Move Constructor used, Moving 70
//Destructor freeing data for nullptr
//Default Constructor for 80 used
//Move Constructor used, Moving 80
//Destructor freeing data for nullptr
//Destructor freeing data for 80
//Destructor freeing data for 70
//Destructor freeing data for 60
//Destructor freeing data for 50
//Destructor freeing data for 40
//Destructor freeing data for 30
//Destructor freeing data for 20
//Destructor freeing data for 10
//Program ended with exit code: 0

//THIS IS ALL MUCH MORE EFFICIENT THAN USING THE COPY CONSTRUCTOR FOR THOSE R-VALUE DECLARATION IN THE VECTOR

