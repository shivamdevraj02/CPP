#include <iostream>
using namespace std;

void max_array(int arr[],int size){
      int max= INT16_MIN;
      for(int i=0;i<size;i++){
        if(arr[i]>max){

                max=arr[i];


        }
      }

      cout<<max<<endl;

}
void min_array(int arr[],int size){
      int min= INT16_MAX;
      for(int i=0;i<size;i++){
        if(arr[i]<min){

                min=arr[i];


        }
      }

      cout<<min;

}

int main (){
    int n;
    int i;
    cout<<"enter the size of array";
    cin>>n;
    int array[n];
    cout<<"enter the array:";
    for ( i=0;i<n;i++){
        cin>>array[i];

    }
     
    max_array(array,n);
    min_array(array,n);

    return 0;
}