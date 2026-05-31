/* queue :-- 

A queue is a container adapter that stores elements in FIFO (First In, First Out) order.

The elements that are inserted first should be removed first.
This is possible by inserting elements at one end (called back) and deleting them from the other end (called front) of the data structure.

Syntax
Queue is defined as the std::queue class template inside <queue> header file.

queue<T> q;

where,


T: DataType of elements in the queue.
q: Name assigned to the queue.


Functions:--

front():-

Access the front element of the queue.

back():-

Access the end element of the queue.

empty():-

Check whether a queue is empty or not.

size():-

Returns the number of elements in the queue.

push():-

Adding an element at the back of the queue.

push_range():-

Adding multiple elements at the end of queue.


emplace():-

Add the constructs element in top of the queue.


pop():-

Delete the front element of the queue.


swap():-

Swap two queues.

*/

#include<iostream>
#include<queue>
using namespace std;
int main () {
    queue<int> q;

    // insertion an element 

    q.push(2);
    q.push(10);
    q.push(80);

    // Accessing elements 

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    // Deletion element  (from the front side of the queue) :-

    q.pop();
    cout<<q.front()<<endl;


    // check empty()

    if (q.empty())
    {
        cout<<"q is empty "<<endl;
    }
    else
    {
        cout<< "q is not empty"<<endl;
    }
    

    



    return 0;
}