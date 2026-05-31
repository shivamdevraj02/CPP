#include <iostream>
#include<string.h>
// #include "Hero.cpp"
using namespace std ;
class Hero {

  public:      
    string name ;
    private:   //(private se kewale isi class me access kr sakte he or ye by default privaate hi rahta he )
    int age;
    float salary;

    cout<<ramesh.age<<endl;

 };
 

int main (){

    // creation of object
    Hero ramesh;

    ramesh.age =20;
    ramesh.name="william";

    // cout<< "size: "<<sizeof(h1)<<endl;
       // the size of empty class is :-->  1 byte

    //    cout<<ramesh.age<<endl;
        cout<<ramesh.name<<endl;

    return 0;
}

/*
Access Modifiers in C++:==

Access modifiers are special keywords in C++, that control the visibility of class members (data and functions).

They help in implementing data hiding by restricting or allowing access to certain parts of a class.



1. Public Specifier :-

Public specifier makes class members (variables and functions) accessible from anywhere - inside the class, outside the class, or even other files.

2. Private Specifier :-

Private specifier makes class members accessible only inside the class itself (mainly member methods), and is mainly used to hide data from outside so that we can make changes internally later without changing the code of its users. By default, all class members in C++ are private if no specifier is mentioned.


3. protected specifier:-











#include <iostream>
using namespace std;

class Employee {
private:     

    // salary and empId cannot be accessed 
    // from outside the Class
    double salary;
    int empID;

public:                 
    string name; // Name can be accessed anywhere
    
    Employee(string n, double s, int id) {
        name = n;
        salary = s;
        empID = id;
    }
};

int main() {
    Employee emp("Fedrick", 50000, 101);
    cout << "Name: " << emp.name << endl;
    return 0;
}




Output
Name: Fedrick

*/




 
