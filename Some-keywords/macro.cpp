// Macro :-- a piece of code in a program that is replaced by value of macro .Macros are shortcuts or placeholders that the preprocessor replaces before the code is compiled.

#include<iostream>
using namespace std;

#define PI 3.14;




// Define a macro to calculate the square of a number
#define SQUARE(x) (x * x)





int main(){



    int n = 7;
    int result = SQUARE(n); // Expands to: (n * n)
    cout << "Square of " << n << " is " << result;





    int r=7;

    double area =PI *r*r;

    cout<<"Area is : "<<area;

    return 0;
}


/*

why we using macro:

1) It can not take exra memory for the value storing (like a variable) , it just replace the value before compiling.

2) It can not be further updated .

    ex--  PI=PI+1;  (not exceptable);;
    
    
*/