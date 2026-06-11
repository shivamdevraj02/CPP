#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main (){
 int n=10;
vector <int> v (n ,-1);
int arr [10]={5,4,9,1,8,2,3,12,11,0};
stack <int> s;
for (int i = 0; i < n; i++)
{
    while (!s.empty()&&arr[s.top()]>arr[i])
    {
       
        v[s.top()]=arr[i];
            s.pop();

    }
    s.push(i);
    
}
for (int i = 0; i < n; i++)
{
   cout<<v[i]<<' ';
}




    return 0;
}