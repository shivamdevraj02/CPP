// NOTE:-- hmlog private part ko getter and setter ki madad se manipulate kr sakte he.

#include <iostream>
#include <string.h>
// #include "Hero.cpp"
using namespace std;
class Hero
{

private:
    string name;
    char level;
    int health;

public:
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    void setHealth(int n)
    {
        health = n;
    }

    void setlevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // creation of object
    // static allocation
    Hero a;

    // cout << "level is " << a.level << endl;
    cout << "health is" << a.getHealth() << endl;
    cout << a.getLevel();

    // Dynamically :

    Hero *b = new Hero;
    cout << "level is : " << (*b).getLevel() << endl;
    cout << "health is : " << (*b).getHealth() << endl;

    cout << "level is : " << b->getLevel()
         << endl;
    cout << "health is : " << b->getHealth() << endl;

    return 0;
}