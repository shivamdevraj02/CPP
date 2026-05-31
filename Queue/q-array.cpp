#include <iostream>
using namespace std;
int main()
{

    int front = 0;
    int rear = 0;
    int size = 10;
    int array[size];
    int n;

    cout << "enter the element for inserting the queue : " << endl;
    cin >> n;

    // push element in the queue

    if (rear == size - 1)
    {
        cout << "q is full " << endl;
    }
    else
    {
        array[rear] = n;
        rear++;
    }

    for (int i = 0; i < rear; i++)
    {
        cout << "the element is q is : " << array[i] << endl;
    }

    // deletion of element from the queue

    if (rear == front)
    {
        cout << "queue is already empty " << endl;
    }
    else

    {
        
        front++;
    }

    // check empty or not

    if (rear == front)
    {
        cout << "queue is empty " << endl;
    }

    return 0;
}