
////                          Part 2:  Shallow/Deep Copy Example
////              When using pointers, both copies point to the same location, == shallow copy
////              When the copy of that object is destroyed, so is the location the original pointer is pointing to.
////              Whenever a new object is made, that new object will point to the same location, causing issues
////              Need to do a Deep Copy when you have a raw pointer as a data member




#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Deep {

private:
    int *data;

public:

    //Getter/Setter
    void setData(int d) {*data = d;}
    int getData() {return *data;}

    //Constructor
    Deep(int d);

    //Copy Constructor
    Deep(const Deep &source);

    //Destructor
    ~Deep();

};



//Default Constructor Imp
Deep::Deep(int d) {
    data = new int;
    *data = d;
}

//Copy Constructor Imp
Deep::Deep(const Deep &source): Deep(*source.data)  //IMPORTANT BIT: this delegates to regular constructor for deep copy,
                                                    //This delegation CREATES NEW STORAGE
                                                    //This new storage will be deleted when copy is out of scope, original data safe

{
    cout << "Deep Copy Called" << endl;
}

//Destructor Imp
Deep::~Deep() {
    delete data;
    cout << "Destructing Free Data" << endl;
}

//Display non-member function
void displayDeepCopy(Deep d) {
    cout << d.getData() << " is the data." << endl;
}






int main() {

    Deep Obj1(100);

    displayDeepCopy(Obj1);

    Obj1.setData(1000);

    Deep Obj2 (Obj1);


    return 0;
}
