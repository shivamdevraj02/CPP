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
    Hero ramesh;

    // ramesh.age = 20;
    // ramesh.name = "william";

    //    cout<<ramesh.age<<endl;
    // cout << ramesh.name << endl;


    cout<<"ramesh health is:"<<ramesh.getHealth()<<endl;
    ramesh.setHealth(70);
    ramesh.setlevel('A');
    // ramesh.level='A';

    cout<< "health is: "<<ramesh.getHealth()<<endl;
    cout<<"level is : "<<ramesh.getLevel()<<endl;
    // cout<<"level is: "<<ramesh.level<<endl;

    return 0;
}