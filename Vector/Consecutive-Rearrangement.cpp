#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cout << "enter the size of vector : ";
    int p;
    cin >> p;
    cout << "enter the element of vector: " << endl;
    vector<int> v(p);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "The entered vector is: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    sort(v.begin(), v.end());
     cout << "The sorted vector is: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " << endl;
    }
    

    bool isConsecutive =true;

    for (int k = 0; k < v.size() - 1; k++)
    {

        
            if (v[k + 1] != v[k] + 1)

            {
                isConsecutive =false;
                break;
            }
            
    }
    if (isConsecutive)
    {

        cout << "Vector is in consecutive way";
    }
    else
        cout << "Vector is NOT in consecutive way";

    return 0;
}