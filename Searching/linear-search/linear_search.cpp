#include <iostream>
using namespace std;

bool search(int ar[], int size, int search_element)
{
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == search_element)
        {
            return 1;
        }
    }

    return 0;
}
int main()
{

    int n;
    cout << "enter the size of array:" << endl;
    cin >> n;
    // int m;
    cout << "enter the array :" << endl;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // cin>>m;
    int p;
    cout << "enter the element for the search :";
    cin >> p;

    bool result = search(array, n, p);
    if (result)
    {
        cout << "the element  found" << endl;
    }
    else
    {
        cout << "not found";
    }

    return 0;
}