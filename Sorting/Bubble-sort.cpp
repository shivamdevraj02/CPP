/*
  IN bubble sort  we compare each of the element with their left side if greater then we shift it right of the array it goes until the array will be sorted .in  this sorting both the (arr[j]>arr[j+1]) are moving .

  best case :- O(n)
  avg. case :- O(n2)
  worst case :-O(n2)

*/

#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n] = {5, 4, 3, 2, 1};
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0 ; j < i; j++)
        {
            if (arr[j]>arr[j+1])
            {
               swap(arr[j],arr[j+1]);
            }
            
        }
    }

    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }
    

    return 0;
}