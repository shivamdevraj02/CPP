#include <iostream>
using namespace std;
int n;
int main()
{
    cout << "enter the number :";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "you enter the number 1";

        break;
    case 2:
        cout << "you enter the number 2";

        break;
    case 3:
        cout << "you enter the number 3";

        break;

    default:
        cout << "you entered some random nuber which is not in my range ";
        break;
    }

    return 0;
}