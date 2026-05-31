 The static keyword in C++ has different meanings when used with different types. In this article, we will learn about the static keyword in C++ along with its various uses.

In C++, a static keyword can be used in the following context:

Table of Content

Static Variables in a Function
Static Member Variable in a Class
Static Member Functions in a Class
Global Static Variable











Static Variables in a Function
In a function, when a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call.

Let's take a look at an example:




#include <bits/stdc++.h>
using namespace std;
​
void f() {
  
    // Static variable
    static int count = 0;
​
    // The value will be updated and carried over
    // to the next function call
    count++;
    cout << count << " ";
}
​
int main() {
  
    // Calling function f() 5 times
    for (int i = 0; i < 5; i++)
        f();
  
    return 0;
}

Output
1 2 3 4 5 
You can see in the above program that the variable count is declared static. So, its value is carried through the function calls. The variable count is not getting initialized every time the function is called. As a side note, Java doesn't allow static local variables in functions.

Applications

The static variables in a function have the following applications:

Return local variable address from the function.
Useful for implementing coroutines in C++ or any other application where the previous state of function needs to be stored.
Memoization in recursive calls.
Static Data Member in a Class
As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static member variables in a class are shared by the objects. There cannot be multiple copies of the same static variables for different objects. Also because of this reason static variables cannot be initialized using constructors.

Let's take a look at an example:




#include <iostream>
using namespace std;
​
class GfG {
public:
  
    // Static data member
    static int i;
​
    GfG(){
        // Do nothing
    };
};
​
int main() {
    GfG obj1;
    GfG obj2;
    obj1.i = 2;
    obj2.i = 3;
​
    // Prints value of i
    cout << obj1.i << " " << obj2.i;
}

Output

undefined reference to `GfG::i'
collect2: error: ld returned 1 exit status
Explanation: You can see in the above program that we have tried to create multiple copies of the static variable i for multiple objects. But this didn't happen.

So, a static variable inside a class should be initialized explicitly by the user using the class name and scope resolution operator outside the class as shown below: 




#include <iostream>
using namespace std;
​
class GfG {
public:
  
    // Static data member
    static int i;
​
    GfG(){
        // Do nothing
    };
};
​
// Static member inintialization
int GfG::i = 1;
​
int main() {
  
    // Prints value of i
    cout << GfG::i;
}

Output
1
Explanation: We were able to access the static variable when is was initialized globally outside the class. Moreover, we can access the static data member without creating the object of the class.

Applications

The static data members can be used to implement the following:

Counting Objects of a Class
Store and share configuration or settings globally.
Tracking Shared Resources
Regulate or limit operations performed by multiple objects.
Ensure a class has only one instance by using static members.
Static Member Functions in a Class
Just like the static data members or static variables inside the class, static member functions also do not depend on the object of the class. We are allowed to invoke a static member function using the object and the '.' operator but it is recommended to invoke the static members using the class name and the scope resolution operator. Static member functions are allowed to access only the static data members or other static member functions, they cannot access the non-static data members or member functions of the class. 

Let's take a look at an example:




#include <iostream>
using namespace std;
​
class GfG {
public:
  
    // Static member function
    static void printMsg() { cout << "Welcome to GfG!"; }
};
​
int main() {
  
    // Invoking a static member function
    GfG::printMsg();
}

Output
Welcome to GfG!
Applications

The static member functions have the following uses in C++:

Accessing Static Member Variables
Implement helper functions that do not depend on specific instances.
Singleton Pattern Implementation
Factory Methods to create and return objects without requiring an instance of the class.
Logging and Debugging
Global Static Variable
A global static variable in C++ is a static variable declared outside of any class or function. Unlike regular global variables, a global static variable has internal linkage, meaning it is accessible only within the file where it is defined. This ensures that its scope is limited to the current translation unit, preventing conflicts with variables in other files that may have the same name.

Let's take a look at an example:




#include <iostream>
using namespace std;
​
// Global static variable
static int count = 0;
​
void increment() {
    count++;
    cout << count << " ";
}
​
int main() {
    increment();
    increment();
    return 0;
}

Output
1 2 