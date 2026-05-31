// polymorphism :-- when one things is existing in multiple forms .

// it has two types :--

// 1) compile time polymerphism:--(static polymorphism)

// a)  function overloading :-- we have to change in no of input
// arguments.

/

#include <iostream>
    using namespace std;

class A
{
public:
    void sayHelo()
    {
        cout << "helo iii" << endl;
    }

    int sayHelo(char name)
    {

        cout << "helo iii" << endl;

        return 1;
    }

    void sayHelo(char name, int n)
    {
        cout << "helo iii" << endl;
    }
};

int main()
{

    A obj;
    obj.sayHelo();

    return 0;
}

// b) operator overloading:--



























// 2) Runtime polymerphism :--(dynamic polymorphism)


#include<iostream>
using namespace std;


int main (){



    return 0;
}