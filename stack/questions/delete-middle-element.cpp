// concept :---

// Step-by-step logic:
// Stack ka size lo
// middle = size / 2
// Middle tak ke elements pop karke empty_stack me daalo
// Middle element ko remove karo
// Baaki elements wapas original stack me daalo


#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    stack<int> empty_stack;
    s.push(12);
    s.push(90);
    s.push(122);
    s.push(902);
    s.push(121);
    s.push(9);
    int size = s.size();
    int middle =size/2;
    for (int i = 0; i < middle; i++)
    {
        empty_stack.push(s.top());
        s.pop();
        
    }
    cout << "Removed middle element: " << s.top() << endl;
    s.pop();
    while (!empty_stack.empty())
    {
        s.push(empty_stack.top());
        empty_stack.pop();
    }
    
    
cout<<s.size()<<endl;
 


    return 0;
}