// Strings are used for storing text/characters.

// For example, "Hello World" is a string.

// A string variable contains a collection of characters surrounded by double quotes (""):

// initialliz/declare :--
// string greeting = "Hello";

// To use strings, you must include an additional header file in the source code, the <string> library:

#include <string>
#include <iostream>
using namespace std;
int main (){

    // Create a string variable
    string greeting = "Hello";
    
    // Print the string
    cout << greeting;



// Note: Strings can contain multiple words, spaces, and punctuation:




string greeting = "Hello and welcome!";
cout << greeting;




// User Input Strings:===
// It is possible to use the extraction operator >> on cin to store a string entered by a user:

// string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;


// However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single word (even if you type many words):


// string fullName;
cout << "Type your full name: ";
cin >> fullName;
cout << "Your name is: " << fullName;


// That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:



string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;

// Type your full name: John Doe
// Your name is: John Doe


// String Concatenation
// The + operator can be used between strings to add them together to make a new string

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName;







    string str = "Hello Geeks";

    // Access using index operator []
    cout << "First character: " << str[0] << endl;
    cout << "Fifth character: " << str[4] << endl;

    // Access using at()
    cout << "Character at index 6: " << str.at(6) << endl; 	
    
    // Returns the character at a specified index, with bounds checking



    string str = "Hello Geeks";

    size_t pos = str.find("Geeks");  
    // Finds the first occurrence of a character or substring

    if (pos < str.size()) {
        cout << "\"Geeks\" found at index: " << pos << endl;
    }





    return 0;
}

