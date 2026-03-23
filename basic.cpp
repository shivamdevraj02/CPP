// array --   simillar type of data 
// why we need array ?

// for multiple variable we will store in a single array 

// int arr_name[size_of_array];

// they have a contigous memory locations ;

// arr_name[0] for accessing by its index 

// if size of array is "n "  then its indexing will be from (0 to n-1)

// #include<iostream>
// using namespace std;
// int main (){
//     int arr[5]={1,2,3,4,5,};
// cout<<arr[10];
//     return 0;
// }

// if array is large and we give only few values then the remaining value of array will be 0

#include<iostream>
using namespace std;
int main (){
    int arr1[50]={1,2,3,4,5,};

    for (int i=0;i<=49;i++){
        cout<<arr1[i]<<endl;
    }


// cout<<arr1[10];
    return 0;
}



// note:---

// int n;
// cin>>n;
// int arr[n]; 

// it is bad practice hmlog array ka size variable nii dena chahiye 
// kyunki ye stack memory ka use krta he agr variable ka size jada hoga or utna hi space nii rahega stack ke pass then the programm will be crashed 

