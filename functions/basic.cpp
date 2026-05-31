

             return_type function_name(parameters) {
                                    // code
                return value;
            }




#include <iostream>
using  namespace std;

int summ(int c,int d){
    int ans=c+d;
    return ans;
}
int main (){

    int a=2;
    int b=4;

    int sum;
    cout<<summ (a,b);

    return 0; 
}




//    Call by VALUE

//      Function value ki copy leta hai. 
//      Original value change nahi hoti.

Example:
void change(int x) {
    x = 100;
}

int main() {
    int a = 5;
    change(a);
    cout << a;   // output → 5
}

// Why output 5?

// a ki copy x me gayi

// x = 100 hua

// a waise ka waisa 5 hi raha

// 2) Call by REFERENCE

// Function original value ko change karta hai.
// Means copy nahi, address jaata hai।

// Example:
void change(int &x) {
    x = 100;
}

int main() {
    int a = 5;
    change(a);
    cout << a;   // output → 100
}

// Why output 100?

// &x → x original a ka reference है (copy nahi)

// Jab x = 100 kiya → a bhi 100 ho gaya


