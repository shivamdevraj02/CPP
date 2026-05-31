#include<iostream>
using namespace std ;
class Hero{
    ~Hero(){
        cout<<"Destructor called manually"
    }
}
int main (){

    //static
    Hero a;

    //dynamic

    Hero *b = new Hero();


    return 0;
}