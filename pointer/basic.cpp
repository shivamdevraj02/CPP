// pinter:--to store data .

// datatype *var_name; 


// Application of Pointers in C++
// Following are the Applications of Pointers in C++:

// To pass arguments by reference: Passing by reference serves two purposes

// For accessing array elements: The Compiler internally uses pointers to access array elements.

// To return multiple values: For example in returning square and the square root of numbers.

// Dynamic memory allocation: We can use pointers to dynamically allocate memory. The advantage of dynamically allocated memory is, that it is not deleted until we explicitly delete it.

// To implement data structures.
// To do system-level programming where memory addresses are useful.

// int d=3;

// int *ptr=&d   (ptr is pointer to int )

//note:--
#include <iostream>

// Function definition accepting integer pointers as parameters
void swap_values(int* p1, int* p2) {
    int temp = *p1;   // Dereference p1 to get the value it points to
    *p1 = *p2;        // Change the value at p1's address
    *p2 = temp;       // Change the value at p2's address
}

int main() {
    int a = 5, b = 10;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    // Call the function by passing the addresses of 'a' and 'b' using the '&' operator
    swap_values(&a, &b);

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}
