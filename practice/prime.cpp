// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int i = 2;
//     cout << "enter the number ";
//     cin >> n;
//     while (n != 0)
//     {
//         if (n % i == 0)
//         {
//             cout << "the given number is not prime number ";
//             break;
//         }
//         else if (n == 0)
//         {
//             cout << "the given number is zero";
//             break;
//         }
//         else
//         {
//             cout << "the given number is prime number ";
//             break;
//         }
//         i = i + 1;
//         n--;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not a prime number";
        return 0;
    }

    int i = 2;
    bool isPrime = true;

    while (i <= n / 2) {
        if (n % i == 0) {
            isPrime = false;   // not prime
            break;
        }
        i++;
    }

    if (isPrime)
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}

