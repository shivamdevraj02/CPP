#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "enter the number \n";
    cin >> n;
    while (n != 0)
    {
        sum = sum + n;
        n = n - 1;
    }
    cout << "the sum of even number is " << sum;

    return 0;
}