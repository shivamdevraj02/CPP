#include <iostream>
#include <stack>
using namespace std ;
int main (){
    int array [] ={100,-2,34,1,222};
    stack <int> s;
    for (int i = 0; i <5; i++)
    {
        s.push(array[i]);
    }
    while (!s.empty())
    {
       cout<<s.top()<<endl;
       s.pop();
    }
    stack <int> temp ;
    while (!s.empty())
    {
        int num =s.top();
        
        s.pop();
      
        
       while (!temp.empty()&&temp.top()>num)
       {
            temp.push(s.top());
            
       }
       

    }
    
    
    
    


    return 0 ;
}