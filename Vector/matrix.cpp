/* #include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the row : ";
    int n;
    cin>> n;
    cout<<"enter the colom : ";
    int m;
    cin>>m;
    vector <int> v;
    v[n][m];
    cout<<"enter the element of the matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
          cin>> v[i][j];
        }
        
    }

    cout<<"the entered element of the matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
         cout<<v[i][j]<<" ";
        }

        cout<<endl;
    }
    

    return 0;
}