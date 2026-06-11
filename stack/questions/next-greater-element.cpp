#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main (){
 

    // using array:--

    // int arr [10]={5,4,9,1,8,2,3,12,11,0};
    
    // vector <int> v(10);
    // for (int i = 0; i < 9; i++)
    // {
    //    for (int j = i+1; j <8 ; j++)
    //    {
    //     if (arr[j]>arr[i])
    //     {
    //         v[i]=arr[j];
    //         break;
    //     }
        
    //    }
       
    // }

    // using stack :--
    int arr [10]={5,4,9,1,8,2,3,12,11,0};
    int n=10;
    vector<int> v( n,-1);
    stack <int> s;
    for (int i = 0; i <n; i++)
    {
        while (!s.empty()&&arr[s.top()]<arr[i])
        {
            v[s.top()]=arr[i];
            s.pop();

        }
        s.push(i);
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    

    

    return 0;
}