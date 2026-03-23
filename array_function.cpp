#include<iostream>
using namespace std;

void arr_fun(int arry[],int size){
    for (int i=0;i<size;i++){
        cout<<arry[i]<<" ";
    }
}
int main(){

    int arr[10]={1,2,3,4,5,6};

    arr_fun(arr,10);

    return 0;
}


// note :-

     // when we are calling the function with arr_fun()  then it passing the its base address to void funtion (
    //     arr_fun  
     // ) which is store in the arry if we change the arry array then it will refelect in the original array 