#include <iostream>
using namespace std;
#include <queue>
#include <stack>
int main()
{
    queue<int> q;
    stack<int> s;
    q.push(10);
    q.push(110);

    q.push(20);

    q.push(1110);
    q.push(1012);

    int k = 3;
    int n= q.size()-k;

    while (k != 0)
    {
        s.push(q.front());
        q.pop();
        k--;
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    while (n!=0)
    {
       q.push(q.front());
       q.pop();
       n--;
    }

    
    while (!q.empty())
    {
        cout << q.front() << " ";
        
        q.pop();
    }

    

    return 0;
}