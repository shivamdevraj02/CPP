

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

    //parametrised comstructor.

    Hero(int health){

        cout<<"this"<<this<<endl;
        this->health=health;
    }


    // This :--it is a type of pointer which stores the addres of current object.







    Hero(int health ,char level){
        this-> level=level;
        this-> health=health;
    }

    void print(){
        cout<<level<<endl;
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

    Hero ramesh(10); //  (when we are creating a object then a constructor is called in the form of ramesh.Hero())
    ramesh.level = 'A';

    cout<<"adress of ramesh : "<<&ramesh<<endl;

    // Dynamically :--

    Hero *ch = new Hero(11);
    ch-> print();



    Hero temp(22 ,'B');
    temp.print();



    return 0;
}



/*note:--
 agr ek bhi parametrised constructor bna diya to default constructor apne aap die ho jata he