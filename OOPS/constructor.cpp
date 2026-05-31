// constructor : -- when we are creating an object then a constructor is called /invoked and their is no {return type }in it.

// constructor name is always same as its class name



#include <iostream>
#include <string.h>
// #include "Hero.cpp"
using namespace std;
class Hero
{

private:
    string name;

    int health;

public:
    char level;

    // creating constructor:

    Hero()
    {
        cout << " default constructor called" << endl;
    }

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

    // creation of object:--

    // static allocation
    Hero ramesh; //  (when we are creating a object then a constructor is called in the form of ramesh.Hero())
    ramesh.level = 'A';

    // Dynamically :

    Hero *ch = new Hero;

    return 0;
}

#include <iostream>
#include <string.h>
// #include "Hero.cpp"
using namespace std;
class Hero
{

private:
    string name;

    int health;

public:
    char level;

    // creating constructor:

    Hero()
    {
        cout << " default constructor called" << endl;
    }

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
    Hero ramesh; //  (when we are creating a object then a constructor is called in the form of ramesh.Hero())
    ramesh.level = 'A';

    // Dynamically :

    Hero *ch = new Hero;

    return 0;
}

void print()
{
    cout << "health " << this->health << endl;
    cout << "level " << this->level << endl;
}