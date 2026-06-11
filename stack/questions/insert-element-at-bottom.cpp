#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
   stack<int> s;
   int array[] = {1, 2, 3, 4, 5, 6};
   for (int i = 0; i < 6; i++)
   {
      s.push(array[i]);
   }

   cout << s.top() << endl;
   stack<int> s1;
   while (!s.empty())
   {

      s1.push(s.top());
      s.pop();
   }

   cout << "from s1: " << s1.top() << endl;

   s.push(10000);

   while (!s1.empty())
   {

      s.push(s1.top());
      s1.pop();
   }

   if (s1.empty())
   {
      cout << "s1 is empty stack" << endl;
   }

   cout << "from s: " << s.top() << endl;
   // cout<<"from s1: "<<s1.top();
   cout << s.size() << endl;
   cout << s1.size();
   return 0;
}