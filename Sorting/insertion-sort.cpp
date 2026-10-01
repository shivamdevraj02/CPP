/*

Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.

Start with the second element as the first element is assumed to be sorted.
Compare the second element with the first if the second is smaller then swap them.
Move to the third element, compare it with the first two, and put it in its correct position
Repeat until the entire array is sorted.



Complexity Analysis
Time Complexity

Best case: O(n), If the list is already sorted, where n is the number of elements in the list.
Average case: O(n2), If the list is randomly ordered
Worst case: O(n2), If the list is in reverse order
Space Complexity

Auxiliary Space: O(1), Insertion sort requires O(1) additional space, making it a space-efficient sorting algorithm.



*/

#include<iostream>
using namespace std; 
int main (){
    int n=5;
    int arr[n]={4,3,5,1,2};
    for (int i = 1; i <n ; i++)
    {
         for (int j = i; j >0; j--)
    {
        if (arr[j]>arr[j-1])
        {
            swap(arr[j],arr[j-1]);
        }
        else{
            break;
        }
        
    }
    }
    
   
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}