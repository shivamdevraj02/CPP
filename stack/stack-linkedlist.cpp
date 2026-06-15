#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node * next;
    Node(int n){
        data=n;
        next=NULL;
    }


};
class Stack{
    public:
    Node*top;
    int size;

    Stack(){

        top=NULL;
        size=0;
    }

    void push(int value)

    {
        Node *temp= new Node(value);
        if (temp==NULL)
        {
            cout<<"stack is over flow"<<endl;
        }
        else
        {
            temp->next=top;
            top=temp;
            size++;
            cout<<"pushed successfullly\n";
        }
        
    }

    void pop()
    {
        if (top==NULL)
        {
           cout<<"stack underflow\n";
           return ;
        }
        else
        {
            Node*temp =top;
            cout<<"ppped"<<top->data<<endl;
            top=top->next;
            delete temp;

        }
        
    }

int peek()
{
    if (top==NULL)
    {
       cout<<"stack is empty \n";
    }
    else
    {
        return top->data;
    }
    
}

};
int main(){

    Stack s;
    s.push(10);

    return 0;
}