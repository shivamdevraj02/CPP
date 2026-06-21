/* Approach :--

Pehle number of strings lo

Phir har string check karo ki usme digit (0–9) hai ya nahi

isdigit() use karo (best & simple)

*/



#include<iostream>
#include<vector>
using namespace std;+
int main (){
    cout<<"enter the size of vector : ";
    int n;
    cin>>n;
    cout<<"enter the string with number : ";
    vector <string> v1(n);

    for (int i = 0; i < v1.size(); i++)
    {
        cin>>v1[i];

    }
    for (int i = 0; i < n; i++) {
        bool hasNumber = false;

        for (int j = 0; j < v1[i].length(); j++) {
            if (isdigit(v1[i][j])) {
                hasNumber = true;
                break;
            }
        }

        if (hasNumber)
            cout << v1[i] << " → contains number\n";
        else
            cout << v1[i] << " → does NOT contain number\n";
    }
    
    


    return 0;
}