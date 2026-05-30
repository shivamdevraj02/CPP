#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    public:
  Node(int d){
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
  }


};


 void  insertAtHead(Node* &head,int n){

    if (head==NULL)
    {
        Node * temp = new Node(n);
        head=temp;
        return;
    }
    

    Node * temp =new Node(n);
    head->prev=temp;
    temp->next=head;
    head=temp;


 }

 void print(Node * head){
    Node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    

    
 }


int main (){
   Node* node1 =new Node(99);
   Node *head =node1;
//   insertAtHead(head,44);
  print(head);


    return 0;
}