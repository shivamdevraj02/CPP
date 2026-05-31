// Tumhara code (logic wise)
// int value = 5;
// int *p = &value;   // p me value ka ADDRESS store hai
// print(p);


// Function:

// void print(int *p) {
//     cout << *p << endl;
// }

// 🔹 Step 1: p me kya store hota hai?
// int *p = &value;


// value = 5

// &value = maan lo 1000 (example address)

// to p = 1000

// 👉 p ek dabba hai jisme address rakha hai

// 🔹 Step 2: Function call me kya ja raha hai?
// print(p);


// p ka value (address 1000) function ko milta hai

// function ke andar bhi p = 1000

// 🔹 Step 3: *p ka matlab kya hota hai?

// ⚠️ Yahi sabse important baat

// p → address (1000)

// *p → “is address par jo value padi hai”

// Matlab:

// *p  == value at address 1000
// *p  == 5


#include<iostream>
using namespace std;

int sum(int x,int y){
    int result = x+y;
    cout<<*x<< endl;
    cout<<y<<endl;
    return result;
}
int main (){


    int n=7;
    int m=9;
    cout<<sum(&n,&m)<<endl;

    return 0;
}