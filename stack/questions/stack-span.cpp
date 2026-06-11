#include<iostream>
#include<stack>
#include<vector>
using namespace std ;
int main(){
    int n=10;
    vector <int> ans(n);
    stack<int> st;
    int arr [10]={5,4,9,1,8,2,3,12,11,0};
    for (int i = n-1; i >= 0; i--)
    {
        while (!st.empty()&&arr[i]>arr[st.top()])
        {
           ans[st.top()]= st.top() -i;
           st.pop();
        }
        st.push(i);
        
    }
    while (!st.empty())
    {
        ans[st.top()]=st.top()+1;
        st.pop();
    }
    for (int i = 0; i < n; i++)
{
   cout<<ans[i]<<' ';
}
    


    return 0;
}