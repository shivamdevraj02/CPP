#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int>p; // for max heap
    
    // priority_queue<int , vector<int> ,greater<int>> p;    // for min heap

    p.push(12);
    p.push(121);

    p.push(13);
    p.push(120);
    p.push(122);

    cout<<p.top()<<endl<<" ";

    p.pop();

    cout<<p.top()<<endl<<" ";
    cout<<p.size()<<endl<<" ";

    while (!p.empty())
    {
       cout<<p.top()<<" ";
       p.pop();
    }
    

    

    return 0;
}
