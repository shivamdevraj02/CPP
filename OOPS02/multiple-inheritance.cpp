#include<iostream>
using namespace std;
class Animal{

     
    public:
    string name;
    string sound;
    int age;


    public:
    void bark(){
       cout<<"barking"<<endl;
       
    }
};


class Human {

    public:
    string name;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Hybrid:public Animal,public Human{
    public:
    int legs;
};

int main (){

Hybrid h;
h.speak();
h.bark();


    return 0;
}