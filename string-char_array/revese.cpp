#include<iostream>
using namespace std;
int main (){
    char name[7]="devraj";
     
    int start =0;
int end=5;
while (start<=end)
{
    swap(name[start],name[end]);
    start++;
    end--;
};
cout<<"the rever is:"<<name;



    return 0;
}

// note((important observation )):----

// agr hmlog jada string ka size dege tb ye null chracter se replace ho jaegaa aur jaise hi null character aaega then the loop will terminate and ek empty string aaega 