#include <iostream>
using namespace std;
int main()
{

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int start, end;
    start = 0;
    end = 9;
    while (start <=end)
    {
        // swap(array[start], array[end]);/
        int a=array[start];
        array[start]=array[end];
        array[end]=a;
        start++;
        end--;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << array[i]<<endl;
    }

    return 0;
}



// CONCEPT :

// In this problem we swaping the first index value to the last index value .
// After the swaping we will increasing the starting index and decreasing the last index .

// In the while loop if we not take the equal to condition then it will not check for the the middle index value 
