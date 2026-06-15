// CHAR ARRAY:---

// string is a 1 dimensional character array .

// In character array and in string 

"cout<<  "behave differently 

ex:--

int arr[5]={1,2,3,4,5};

cout<<arr<<endl; here it prints the address of the arr[0] index element ;



char ch[5]="asdfg";

cout<<ch<<endl;  here it will print the entire string;
cout assumes it is a C-style string and keeps printing characters until it finds a null character '\0'.











// Declaration the character array :
// char str[10];

// Initialization
// char str[10] = "Hello";

// Character-wise initialization
// char str[] = {'H','e','l','l','o','\0'};

// taking input:-
// char name[20];
// cin>>name;

// note:-  in this chacter array always the last index is occupying by the" NULL CHARACTER" .it indicate the their is no character after it and it will break the char array and return it .

// #include <iostream>
// using namespace std;
// int main(){
//     char name[20];
//     cout<<"enter the name :";
//     cin>>name;
//     cout<<name;

//     return 0;
// }

// NOTE:-

// if we give the extra spacing in between the entering the character array then it will return the array before spacing

// their are many thing which can terminate the char array
// like :- 1)SPACE
//         2)tab
//         3)newline/enter


// now to take a hole sentence we use :--

// cin.getline(string_name,its_length)

#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cout << "enter the name :";
    cin.getline(name, 20);
    cout << name;

    return 0;
}

// TO find the length of the string : -

#include <iostream>
 using namespace std;
int main()
{
    int count = 0;
    char name[10] = "shivam";
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    };
    cout << count;

    return 0;
}

// ans:- 6