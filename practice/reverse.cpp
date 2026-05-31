#include<iostream>
using  namespace std;
int main (){
  int n ;
  int y;
  int ans=0;
  cout<<" enter the number  ";
  cin>> n;
  while (n!=0)
  {
    int x=n%10;
     ans=(ans*10)+x;
     n=n/10;

    
  }
  cout<<ans;
  


    return 0;
}