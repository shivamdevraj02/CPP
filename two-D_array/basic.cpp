


#include<iostream>
using namespace std;
int main (){
    
    // creating 2-d array :
    int arr[3][4]={1,2,3,4,5,6,7,8,9,2,3,4};
    // int Array[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};



    // //for taking input ""
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //        cin>>arr[i][j];
    //     }
        
    // } 
    

    //for output:

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }



    return 0;
}