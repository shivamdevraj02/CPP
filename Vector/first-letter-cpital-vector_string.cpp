#include<iostream>
#include<vector>

using namespace std;
int main (){
  
   vector<string> v;
v = {"tommorow", "is", "our", "table", "tennis", "match"}; 


    for (int i = 0; i < v.size()-1; i++)
    {
       v[i][0]=toupper(v[i][0]);  // here v[i][0] means v vector ke andr jo i index pr he uska zeroth (0) index wala element hoga 
                                   // jaise i=1 to isme 't' ho jaega...
    }


    for (int i = 0; i < v.size()-1; i++)
    {
       cout<<v[i]<<" ";
    }

    
  



    return 0;
}