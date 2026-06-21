#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<string> v1;
    v1={"d","s","a"};
    cout<<"enter the size of the vector v2: ";
    int n;
    cin>>n;
    vector<string> v2(n);
    cout<<"enter the element for the contain in first vector v1 : ";
    for (int i = 0; i < n; i++)
    {
       cin>> v2[i];
    }
     for (int i = 0; i < v2.size(); i++) {
        for (int j = 0; j < v1.size(); j++) {
            if (v2[i] == v1[j]) {
                cout << "it contains " << v2[i] << endl;
                break;
            }
            else
            {
                cout<<"not any letter matches";
                break;
            }
        }
    }
    
    


    return 0;
}