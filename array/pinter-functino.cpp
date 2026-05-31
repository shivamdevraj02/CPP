// #include<iostream>
// using namespace std;
// int print(int *arr ,int size){
       

//         cout<<sizeof(arr)<<endl;

//         for (int i = 0; i <  size; i++)
//         {
//             cout<<arr[i] <<" ";
//         }
 
// }
// int main(){

            
//  int arr[5]={1,2,3,4,5};
 
//  print(arr+3,5);

//     return 0;
// }







// NOTE:--------

// Jab array function me pass hota hai to pointer ke form me hi jata hai
// 🔹 Example
// int getSum(int arr[], int n)
// // ya
// int getSum(int *arr, int n)


// ➡️ Dono same hote hain

// Compiler internally isko aise treat karta hai:

// int getSum(int *arr, int n)

// 🔹 Kyun aisa hota hai?

// Array ka poora size copy karna costly hota hai

// Isliye C/C++ me array ka base address pass hota hai

// Array name → first element ka address

// int arr[5] = {1,2,3,4,5};

// arr      == &arr[0]

// 🔹 Isliye function ke andar:
// sizeof(arr)


// ❌ poora array ka size nahi deta
// ✅ pointer ka size deta (4 ya 8 bytes)

// 🔹 Example proof
// int main() {
//     int arr[6] = {1,2,3,4,5,6};
//     cout << sizeof(arr);   // 24 (6 * 4)
// }

// int getSum(int *arr, int n) {
//     cout << sizeof(arr);   // 8 (pointer size)
// }



#include <iostream>
using namespace std;

int getSum(int *arr, int n) {
    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "Sum is " << getSum(arr + 3, 3) << endl;

    return 0;
}
