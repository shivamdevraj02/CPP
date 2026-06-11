#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() 
{
    char brackests;
    stack <char> s; 
    string s1 = "[()()]{}";
    for (int i = 0; i < s1.length(); i++)
    {
        brackests = s1[i];

        if (brackests == '(' || brackests == '{' || brackests == '[')
        {
            s.push(brackests);
        }
        else
        {
            if (!s.empty())

            {
                char top = s.top();
                if ((brackests == ')' && top == '(') || (brackests == '}' && top == '{') || (brackests == ']' && top == '['))
                {
                    s.pop();    
                }
                else
                {
                    cout<<"false";
                    return 0;    
                }
            }
            else
            {
                cout<<"false";
                return 0;
            }
        }
    }

     // final check
    if (s.empty())
        cout << "true";
    else
        cout << "false";

    return 0;
}