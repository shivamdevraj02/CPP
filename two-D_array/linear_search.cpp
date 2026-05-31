#include <iostream>
using namespace std;
int Search(int array[][3], int key, int n, int m)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (key == array[i][j])
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    int array[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target;
    cout << "enter the number for search ";
    cin >> target;
    int ans = Search(array, target, 3, 3);
    if (ans == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}