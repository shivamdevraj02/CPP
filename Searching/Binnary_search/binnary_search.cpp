#include <iostream>
using namespace std;
int search(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;
    mid = (start + end) / 2;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            return array[mid];
        }
        if (key < array[mid])
        {
            end = mid - 1;
        }
        else

        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int num[6] = {1, 2, 3, 4, 5, 6};
    cout << "enter the number for the searching ";
    int m;
    cin >> m;
   int result = search(num, 6, m);
    cout <<result;

    return 0;
}