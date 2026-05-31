// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     queue<int> q;

// q.push(12);
// q.push(12);

// q.push(12);

// q.push(12);

// q.push(12);

// q.push(12);

// q.push(12);

// while (!q.empty())
//     {
//         for (int i = 0; i < q.size(); i++)
//         {
//             cout<<q.front()<<" ";
//             q.pop();
//         }
//     }

//     return 0;
// }






#include <iostream>
using namespace std;

int main()
{
   int size = 5;
   int arr[size] = {2,3,1,5,6};

   int rear = size - 1;   // last valid index
   int front = 0;

   while (rear >= front)
   {
       cout << arr[rear] << " ";
       rear--;
   }

   return 0;
}