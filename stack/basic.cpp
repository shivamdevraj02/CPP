/* 

stack:-- A stack is basically a linear data structure which follow the LIFO (last in first out) order of insertion and deletion.

A Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). LIFO implies that the element that is inserted last, comes out first and FILO implies that the element that is inserted first, comes out last.


Stack container follows LIFO (Last In First Out) order of insertion and deletion. It means that most recently inserted element is removed first and the first inserted element will be removed last. This is done by inserting and deleting elements at only one end of the stack which is generally called the top of the stack.


syntax:--

Stack is defined as std::stack class template inside the <stack> header file.

stack <T> st;
stack <datatype> stackname;

where,

T: DataType (int, char etc.) of elements in the stack.
st: Name assigned to the stack.

Basic Operations:-
Here are the basic operations that can be performed on a stack:

1. Inserting Elements:-
In stack, new elements can only be inserted at the top of the stack by using push() method.

2. Accessing Elements:-
Only the top element of the stack can be accessed using top() method.

3. Deleting Elements:-
In stack, only the top element of the stack can be deleted by using pop() method in one operation.

4.empty():-
This checks whether the stack is empty. It returns true if the stack has no elements; otherwise, it returns false.

5. Size of stack:-
The size() function in a stack returns the number of elements currently in the stack. It helps to determine how many items are stored without modifying the stack.



NOTE:--

Pseudo Traversal:

As any element other than the top element cannot be accessed in the stack, it cannot be actually traversed. But we can create a copy of it, access the top element and delete the top. By doing this till the copy stack is empty, we can effectively traverse without modifying the original stack.









👉 Linked List, Stack (DS), Queue, Tree jaise data structures heap me isliye bante hain kyunki:

Size runtime pe decide hota hai

Lifetime function se bahar chahiye hoti hai

Stack memory limited hoti hai

Dynamic grow / shrink chahiye hota hai







*/



#include<iostream>
#include <stack>
using namespace std;
int main(){
    stack <int> st;

    // st.push(110);
    // st.push(80);
    // st.push(100);
    // st.push(90);
    // cout<<st.top()<<endl;

    // st.pop();
    // cout<<st.top()<<endl;


    // stack<int>st;
    if(st.empty()){
        cout<<"Stack is empty "<<endl;
    }
    st.push(100);
    st.push(100);

    if(!st.empty()){
        cout<<"Stack is not empty. Top element: "<<st.top()<<endl;
    }

    cout<<st.size()<<endl;

    return 0;
}

