
/*recursion:-- in bookish lang.. A function calling it self .

in recusion their is a base case for the termination of program.

WHY base case is important ::==

if we not give the base case then programme will executed until the stack memory get full and it gives segmentaion fault.

TAIL RECURSION AND HEAD RECURSION:-- 



1)  func(){
    
    base case 

    processs

    recursive relation (recursive relation is after the process )

}





2)  func()  {

    base case 

    processs

    recursive relation (recursive relation is before the process )

}

*/

#include<iostream>
using namespace std;
  int  fact(int m){
    if (m==0){
        return 1;
    }

    int factorial=fact(m-1);
    int ans =m*factorial;
    return ans;

  }

int main (){
    int n;
        cout<<"enter the number ";
        cin>>n;


    cout<< fact (n);


    return 0 ;
}

 