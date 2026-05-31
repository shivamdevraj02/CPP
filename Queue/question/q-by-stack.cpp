#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack <int> s1;
    stack <int> s2;

    queue <int> q;

    q.push(2);
    q.push(10);
    q.push(5);
    q.push(20);

    cout<<"Enter the new to push in the queue : ";
    int n;
    cin>>n;  
    q.push(n);    

    while (!q.empty())
    {   
    //    s1.push(n); 
       s1.push(q.front());
       q.pop();
    }
    while (!s1.empty())
    {

       s2.push(s1.top());
       s1.pop();

    }
    while (!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
  
    return 0;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////













#include<iostream>
#include<stack>
using namespace std;

stack<int> s1;
stack<int> s2;

// Enqueue operation
void enqueue(int x){
    s1.push(x);
    cout<<"Element inserted: "<<x<<endl;
}

// Dequeue operation
void dequeue(){
    if(s1.empty() && s2.empty()){
        cout<<"Queue is empty"<<endl;
        return;
    }

    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }

    cout<<"Deleted element: "<<s2.top()<<endl;
    s2.pop();
}

// Display queue
void display(){
    if(s1.empty() && s2.empty()){
        cout<<"Queue is empty"<<endl;
        return;
    }

    stack<int> temp1 = s1;
    stack<int> temp2 = s2;

    // elements in s2 (front side)
    while(!temp2.empty()){
        cout<<temp2.top()<<" ";
        temp2.pop();
    }

    // elements in s1 (rear side)
    stack<int> rev;
    while(!temp1.empty()){
        rev.push(temp1.top());
        temp1.pop();
    }

    while(!rev.empty()){
        cout<<rev.top()<<" ";
        rev.pop();
    }

    cout<<endl;
}

int main(){

    int choice, x;

    while(true){
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                cout<<"Enter element: ";
                cin>>x;
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}