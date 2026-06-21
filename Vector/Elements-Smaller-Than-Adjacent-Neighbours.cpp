#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v(6);
    v={24,22,3,2,11,3};
    
    for (int i = 1; i < v.size() - 1; i++)
    {
       if (v[i] < v[i-1] &&  v[i] < v[i+1])
       {
           cout<<v[i]<<" ";
       }
       
    }
    return 0;
}