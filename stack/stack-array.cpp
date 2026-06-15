/*Step-by-step kya hota hai (IMPORTANT)
🔹 Step 1
int *arr;


Sirf ek pointer bana

Heap me kuch bhi nahi bana

arr = garbage address

📦 Memory:

arr ──► ???? (kuch nahi)

🔹 Step 2
arr = new int[capacity];


Ab kya hua?

Heap me capacity size ka array create hua

new int[capacity] ne first element ka address return kiya

Wo address arr me store ho gaya

 Memory:

arr ──► [ ][ ][ ][ ]   (contiguous block)


✔️ Array heap me bana
✔️ arr sirf uska address pakad ke baitha hai

4️⃣ Important Line (Yaad rakhna 💡)

❝ new int[capacity] array banata hai
❝ arr us array ko point karta hai ❞

*/

#include <iostream>
using namespace std;
class Stack
{
    int *arr;
    int top;
    int size;

public:
    Stack(int n)
    {
        this->arr = new int[n];
        top = -1;
        this->size = n;
    }
    void push(int m)
    {
        if (top == size - 1)
        {
            cout << "stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top] = m;
            cout << m << " is pushed successfully"<<endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow";
        }
        else
        {
            top--;
            cout<<"poped successfully"<<endl;
        }
    }
    void isSize()
    {
        if (top == -1)
        {
            cout << "stack is empty"<<endl;
        }
        else
        {   
            cout << "the size of stack is : " << top+1 << endl;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "stack is empty"<<endl;
        }
        else
        {
            cout << "the top element is : " << arr[top] << endl;
        }
    }
};

int main()
{

    //   int p=
    Stack s(5);

    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    s.pop();
    s.pop();
    s.pop();
    // s.pop();
    // s.pop();

    s.isSize();

    s.peek();


    return 0;
}