/* OPPS:--

Before Object-Oriented Programming (OOPs), most programs used a procedural approach, where the focus was on writing step-by-step functions. This made it harder to manage and reuse code in large applications.
OOP in C++ was introduced to solve this problem by organizing code into classes and objects, making programs easier to understand, reuse, and maintain.

@ Characteristics of an OOP (Object Oriented Programming):--

1) Class:--

A class is a user-defined blueprint or prototype from which objects are created. It represents the set of properties or methods that are common to all objects of one type. Using classes, you can create multiple objects with the same behavior instead of writing their code multiple times. In general, class declarations in C++ can include these components.


* Access Specifiers: A class can have members defined as public, private, or protected to control accessibility.
* Class Name: The class name should follow naming conventions, usually starting with a capital letter.
* Body: The class body is enclosed with braces {} and defines data members and member functions.

2. Object:--

An Object is a basic unit of Object-Oriented Programming that represents real-life entities. A typical C++ program creates many objects, which interact with each other by invoking methods. The objects are what perform your code, they are the part of your code visible to the user. An object mainly consists of:

* State: It is represented by the data members (attributes) of an object. It also reflects the properties of an object.
* Member Function: A member function is a collection of statements that perform some specific task and may return the result to the caller.
* Behavior: It is represented by the member functions of an object. It also reflects the response of an object to other objects.
* Identity: It is a unique name or reference given to an object that enables it to interact with other objects.*/



// #include <iostream>
// using namespace std ;
//  class Hero {

//    //properties

//  };

// int main (){

//     // creation of object
//     Hero h1;

//     cout<< "size: "<<sizeof(h1)<<endl;   // the size of empty class is :-->  1 byte

//     return 0;
// }




//note:=== (agr hero class ek alg tab me rakhni ho )


#include <iostream>
#include "Hero.cpp"
using namespace std ;
 


int main (){

    // creation of object
    Hero h1;

    cout<< "size: "<<sizeof(h1)<<endl;   // the size of empty class is :-->  1 byte

    return 0;
}


/*NOTE (VERY IMPORTANT) :---


Padding yahin hai

👉 char name ke baad 3 bytes empty chhod diye gaye

❓ Padding kyu daali?

int aur float ko 4-byte aligned address chahiye

char sirf 1 byte leta hai

To compiler automatically 3 empty bytes add karta hai

Isliye total size:
1 (char) + 3 (padding) + 4 (int) + 4 (float) = 12 bytes

*/









