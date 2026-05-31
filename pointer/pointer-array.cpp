#include<iostream>
using namespace std;
int main (){
    int arr [10]={2,3,4,1};
    cout<<"the address of the first index of the array is: "<<1[arr]<<endl;    // hmlog aise bhi elements of array ko access kr sakte he .
    
    //her the address of the array and the element at the index of zero is same point to be noted


     cout<<"the address of the first index of the array is: "<<&arr[0]<<endl;
    //  int x=arr++;
     
     cout<<"1 is: "<<*arr<<endl;
      cout<<"1 is: "<<*arr+1<<endl;
       cout<<"1 is: "<<*(arr+1)<<endl;
        // cout<<"1 is: "<<x<<endl;

    //    int  9[brr] ={1,2,3,4};
    //    cout<<3[brr]<<endl;
    
            //   _____________________
            //   |                    |
            //   | arr[i]  =  *(arr+i)|
            //   |____________________|
                 


int temp[10];
cout << sizeof(temp);


// temp ek array of 10 integers hai

// 1 int = 4 bytes

// 👉 10 × 4 = 40 bytes





int *ptr = &temp[0];
cout << sizeof(ptr);



// Yaha important twist hai 👇

// ptr array nahi hai

// ptr sirf address store karne wala pointer hai

// Pointer ka size system par depend karta hai

// 💻 64-bit system (aajkal mostly):

// Pointer size = 8 bytes

// 💻 32-bit system:

// Pointer size = 4 bytes

// passing array in function : --




int brr(int arr[]  ,int size){

        for (int i = 0; i < size_t; i++)
        {
            cout<<arr[i];
        }
        



}








              
              
              
 int arr[5]={1,2,3,4,5};
 
 print (arr,5);
              
          
              
              
              
              
              



    return 0;
}




