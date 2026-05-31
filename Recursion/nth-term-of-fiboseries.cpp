#include<iostream>
using namespace std;
int fibo(int m){
    if (m==0){
        return 0;
    }
    if (m==1){
        return 1;
    }
    int ans= fibo(m-1)+fibo(m-2);
    return ans;
}
int main (){
     int n;
    cout<<"enter the number: ";
   
    cin>>n;
    cout<<fibo(n);

    return 0;
}