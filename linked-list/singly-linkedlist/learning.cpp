#include<iostream>
using namespace std;

class List {
        public:
        int data;
        List *next;

        List(int data){
            this->data=data;
            this->next= NULL;

        }
    };

    // void insertAtHead (List *&head,int n ){
    //     List *temp =new List(n);
    //     temp->next=head;
    //     head=temp;

   
    // }


    void insertAtTail(List *&tail,int m ){
        List *temp=new List(m);
        tail->next = temp;   // purane tail ka next = new node
    tail = temp;         // tail ko aage badhao

   
    }


    void print(List *head){

        List *temp =head;

        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }


        


    }
int main (){

    List *first= new List(111);

    List *Head=first;

    // insertAtHead(Head , 22);
    // print(Head);

    //  insertAtHead(Head , 1122);
    // print(Head);

    //  insertAtHead(Head , 122);
    // print(Head);


   // for tail 

   List * Tail =first;

   insertAtTail(Tail,100);
   print(Head);



    return 0;
}