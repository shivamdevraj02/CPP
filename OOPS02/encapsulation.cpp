// Encapsulation :-- it means wrapping up data member and function /(information hiding and data hiding)

// why we are doing encapsulation ??

// advantages:

// 1)data hiding makes it more secure 

// 2) code reusability 

// 3) if we want we can make class - "Read Only"

#include<iostream>
using namespace std;
class Student {

    private :
    string name;
    int age;
    int height;


    public:
    int getAge(){

        return this->age;
    }
}

int main (){

    Student first;

    cout<<"ok"


    return 0;
}

