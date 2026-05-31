#include <iostream>
using namespace std;
int n;
int main(){
    cin>> n;
    cout<<"the entered number is " <<n <<"\n";
    if (n<0){
        cout<<"the number is negative number";
    }
    else if(n==0){
        cout<<"the number is zero ";

    }
    else{
        cout<<"the number is greater than zero";
    }
    return 0;
}
