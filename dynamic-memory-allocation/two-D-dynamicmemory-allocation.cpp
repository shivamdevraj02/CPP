// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter the size of the array: ";
//     cin>>n;

//     //creating a 2D array:


//     int **arr=new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[n];
//     };




//     //taking input

//     cout<<"enter the elements : "

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
        
//     }
  


//          //taking output
//         cout<<endl;
//       for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//              cout<< arr[i][j]<<" ";
//         }  cout<<endl;
        
//     }



//releasing memory:===

// for (int  i = 0; i < n; i++)
// {
//    delete [] arr[i]
// }


// delete []arr;



    

    

//     return 0;

// }












#include<iostream>
using namespace std;
int main (){
    int row;
    cout<<"enter the size of row of the array: ";
    cin>>row;


     int colm;
    cout<<"enter the size of colm of the array: ";
    cin>>colm;

    //creating a 2D array:


    int **arr=new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[n];
    };




    //taking input

    cout<<"enter the elements : "

    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
  


         //taking output
        cout<<endl;
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < n; j++)
        {
             cout<< arr[i][j]<<" ";
        }  cout<<endl;
        
    }


    

    

    return 0;

}