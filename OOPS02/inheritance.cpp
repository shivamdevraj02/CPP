// syntax :

// class child-name : mode parent-name{

// }

#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    // string: color;

    void sleep()
    {
        cout << "male sleep" << endl;
    }
};

int main()
{

    Male object1;
    cout << object1.age << endl;

    return 0;
}


// #include <iostream>
// using namespace std;

// class Animal
// {
//   public:
//     void sound()
//     {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal
// {
//   public:
//     void sound()
//     {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal
// {
//   public:
//     void sound()
//     {
//         cout << "Cat meows" << endl;
//     }
// };

// class Cow : public Animal
// {
//   public:
//     void sound()
//     {
//         cout << "Cow moos" << endl;
//     }
// };

// int main()
// {
//     Dog d;
//     d.sound();

//     Cat c;
//     c.sound();

//     Cow cow;
//     cow.sound();

//     return 0;
// }




// Types of inheritance :--

// 1) single  :--  

// 2) multi-level 

// 3) multiple 

// 4) hybrid 

// 5) hierarichal