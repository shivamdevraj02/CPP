// #include <iostream>
// #include <vector>
// using namespace std;
// void merge(int arr[], int start, int mid, int end)
// {

//     vector<int> temp(end - start + 1);
//     int left = start, right = mid + 1, index = 0;

//     while (left <= mid && right <= end)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp[index] = arr[left];
//             index++, left++;
//         }

//         else
//         {
//             temp[index] = arr[right];
//             right++, index++;
//         }
//     }

//     index = 0;
//     while (start <= end)
//     {
//         arr[start] = temp[index];
//         start++, index++;
//     }
// }

// void mergesort(int arr[], int start, int end)

// {

//     if (start==end){
//         return;
//     }
//     int mid = start + (end - start) / 2;
//     mergesort(arr, start, mid);
//     mergesort(arr, mid + 1, end);

//     merge(arr, start, mid, end);
// }

// int main()
// {
//     int arr[6] = {8, 2, 4, 1, 0, 36};

//     mergesort(arr, 0, 5);
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i];
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);

    int left = start;
    int right = mid + 1;
    int index = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            left++;
        }
        else
        {
            temp[index] = arr[right];
            right++;
        }
        index++;
    }

    while (left <= mid)
    {
        temp[index] = arr[left];
        left++;
        index++;
    }

    while (right <= end)
    {
        temp[index] = arr[right];
        right++;
        index++;
    }

    index = 0;
    while (start <= end)
    {
        arr[start] = temp[index];
        start++;
        index++;
    }
}

void mergesort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    int arr[6] = {8, 2, 4, 1, 0, 36};

    mergesort(arr, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}