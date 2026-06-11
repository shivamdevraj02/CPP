/*
In selection sort we find a smallest number the array and swap it with their respect greatest bigger elements

for example : int array[5] = {4,14,3,10,1}

 4  is swapped with 1   ==  {1,14,3,10,4 } and then 14 is swapped with 3  ==  {1,3,14,10,4 } and 14 is swapped with 10  ==  {1,3,10,14,4 } and then ==  {1,3,4,10,14 }


*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {4, 14, 3, 10, 1};

    for (int i = 0; i < 4; i++)
    {
        int target =i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[target])
            {
                target =j;
            }
        }
        swap(arr[i], arr[target]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout <<  arr[i] << " ";
    }

    return 0;
}