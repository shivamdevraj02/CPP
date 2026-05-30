#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;

public:
    Node(int data)
    {
        this->data = data;
        this->Next = NULL;
    }


    //destructor 
    ~Node (){
        int value =this->data;

        //memory free 

        if (this->Next!=NULL)
        {
            delete Next;
            this->Next =NULL;
        }

        cout<<"memory is free for node with data "<<value<<endl;
        
    }
};

// for insert node at the head of the linked list :---

void insertAtHead(Node *&head, int d)
{

    // new node create

    Node *temp = new Node(d);
    temp->Next = head;
    head = temp;
}

// for insert node at the tail of the linked list :----

void inserAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->Next = temp;
    tail = temp;
}


// for the inserting between the linkedlist :---
void insertAtPosition (Node* &tail, Node* &head, int position , int d){

// inserting at first position :
    if (position==1)
    {
        insertAtHead(head,d);
        return;
    }
    
    Node* temp =head;
    int cnt =1;

    while (cnt<position-1)
    {
       temp =temp->Next;
       cnt++;
    }

    // inserting at last position:--
    if (temp->Next==NULL)
    {
       inserAtTail(tail,d);
       return;
    }
    

    // creatin node for the d

    Node* nodeToInsert =new Node(d);

    nodeToInsert->Next =temp->Next;
    temp->Next=nodeToInsert;
    
}

void deleteNode(int position , Node* & head){

    //delete first or start  node 
    if (position==1)
    {
        Node* temp =head;
        head = head->Next;

        // memory free start node
        temp->Next=NULL;
        delete temp ;
    }

    else{

        // deleting any middle node or last node

        Node* curr =head;
        Node * prev=NULL;

        int cnt =1;
        while (cnt<position)
        {
            prev=curr;
            curr=curr->Next;
            cnt++;
        }

        prev->Next =curr->Next;
        curr->Next=NULL;
        delete curr;
        
    }
    

}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->Next;
    }
    cout << endl;
}
int main()
{

    Node *Node1 = new  Node (100);             
    
    
    // 👉 Node1 object ❌ nahi hai
    // 👉 Node1 pointer hai ✅
    // 👉 Actual object new Node(100) se banta hai ✅


    
    // // cout<<Node1->data<<endl;
    // cout<<Node1->Next<<endl;

    // for the head insertion
    Node *head = Node1;
    print(head);

    insertAtHead(head, 12);

    print(head);

    insertAtHead(head, 122);

    print(head);

    // for the tail insertion

    Node *tail = Node1;

    print(head);

    inserAtTail(tail, 12);

    print(head);

    inserAtTail(tail, 122);

    print(head);


  // for the insertion in between the linked list:--

    insertAtPosition(tail,head,1,1000);
    print(head);



    deleteNode(1,head);
    print(head);

    return 0;
}