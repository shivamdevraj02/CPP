#include<iostream>
using namespace std;
class Animal{

     
    public:
    string name;
    string sound;
    int age;


    public:
    void speake(){
       cout<<"barking"<<endl;
       
    }
};

class Dog :public Animal{
    public:
    int legs;
};

int main (){

 Dog d;
d.speake();


    return 0;
}