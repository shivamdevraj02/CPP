#include <iostream>
using namespace std;
int main()
{

    int front = -1;
    int rear = -1;
    int size = 10;
    int array[size];
    int n;

    cout << "enter the element for inserting the queue : " << endl;
    cin >> n;

    // push element in the queue

    if (((rear + 1) % size == front))
    {

        cout << "queue is full";
    }
    else if (front == -1)
    {
        front = rear = 0;
        array[rear] = n;
    }

    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
        array[rear] = n;
    }

    else
    {
        rear++;
        array[rear] = n;
    }

    // deletion of element from the queue

    if (front == -1)
    {
        cout << "queue is empty";
    }
    else if (front == rear)
    {
        front = rear = -1;
    }

    else if (front == size - 1)
    {
        front = 0;
    }

    else
    {
        front++;
    }

    // check empty or not

    return 0;
}