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
    

    // creating node for the d

    Node* nodeToInsert =new Node(d);

    nodeToInsert->Next =temp->Next;
    temp->Next=nodeToInsert;
    
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

    // ClassName* objectNamePointer = new ClassName();


    Node *Node1 = new  Node (100);             
    
    
    // 👉 Node1 object ❌ nahi hai
    // 👉 Node1 pointer hai ✅
    // 👉 Actual object new Node(100) se banta hai ✅


    
    // // cout<<Node1->data<<endl;
    // cout<<Node1->Next<<endl;

    // for the head insertion
    Node *head = Node1;
    print(head);                        
    
    /*Bas ek aur pointer ban gaya jo same node ko point kar raha hai.

                           Diagram:

                           head ----|
                                    v
                           Node1 -->[100 | NULL]   */

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

    return 0;
}