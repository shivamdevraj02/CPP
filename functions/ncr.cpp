#include <iostream>
using namespace std ;
int nummerator(int x){
    int ans=1;
    for(int i=x;i>=1;i--){
        ans=ans*i;
        
    }
    return ans;
}
int deno1(int y){
    int ans1=1;
    for(int i=y;i>=1;i--){
        ans1=ans1*i;
        
    }
    return ans1;
}
int deno2(int z){
    int ans2=1;
    for(int i=z;i>=1;i--){
        ans2=ans2*i;
        
    }
   return  ans2;
}
int main (){
    int n=10;
    int r=3;
    int p=n-r;
    int n2,p2,r2;
    int final_ans;

    n2=nummerator(5);
   p2= deno1(3);
    r2=deno2(2);
    cout<<n2<<endl;
    cout<<p2<<endl;
    cout<<r2<<endl;

    final_ans=n2/(p2*r2);
    cout<<final_ans;



    return 0 ;
}