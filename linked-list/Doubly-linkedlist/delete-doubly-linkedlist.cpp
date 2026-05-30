#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

public:
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int val =this->data;
        if (next!=NULL)
        {
            delete next;
            next =  NULL;
        }

        cout<<"memory free for node" <<endl;
        
    }
};

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

// for inserting at head
void insertAtHead(Node *&head, int d)
{
   // for handling the empty node
     if (head==NULL){
        Node* temp =new Node(d);
        head=temp;

    }
    else{
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;

    }
    
}

// for insert at tail

void insertAtTAil(Node *&tail, int d)
{

    if (tail==NULL){
        Node* temp =new Node(d);
        tail=temp;

    }
    else{

    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;

    }
    
}

// for the inserting between the linkedlist :---



void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // inserting at first position :
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position:--
    if (temp->next == NULL)
    {
        insertAtTAil(tail, d);
        return;
    }

    // creating a node for d

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

    // creatin node for the d

    // Node* nodeToInsert =new Node(d);

    // nodeToInsert->Next =temp->Next;
    // temp->Next=nodeToInsert;
}


void deleteNode(int position , Node* & head){

    //delete first or start  node 
    if (position==1)
    {
        Node* temp =head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    else{

        // deleting any middle node or last node

        Node* curr =head;
        Node * prev=NULL;

        int cnt =1;
        while (cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr->prev= NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
    

}

int main()
{

    Node *Node1 = new Node(10);
    Node *head = Node1;
    Node *tail = Node1;

    print(head);

    insertAtHead(head, 11);
    print(head);

    insertAtHead(head, 112);
    print(head);

    insertAtTAil(tail, 45);
    print(head);

    insertAtPosition(tail, head, 3, 1000);
    print(head);

    
    
    deleteNode(2,head);
    print(head);
    


    return 0;
}