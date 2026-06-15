#include <iostream>
using namespace std;
int main()
{

    char palindrom[6] = "madam";
    char reverse [6]= "madap";
    int start = 0;
    int end = 4;
    while (start <= end)
    {
        swap(reverse[start], reverse[end]);
        start++;
        end--;
    }
     bool flag =true;
    for (int i=0;i<6;i++){

        if (palindrom[i]!=reverse[i])
        {
            flag=false;
            break;
        }
        else
            // cout << " not a palindrome ";
            // break;
            flag=true;
            
    }
    if (flag==true){
        cout<<" a palindrome";
    }
    else{
        cout<<"not a pallindrome";
    }
              //C++ me char array ko == se compare nahi karte,
              // ya to loop se compare karo ya strcmp() use karo.

    return 0;
}