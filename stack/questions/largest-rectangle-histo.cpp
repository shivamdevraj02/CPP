#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main (){
    int n =9;
    int height[n] = {2,3,4,2,6,5,4,5,3};
    vector <int> right(n);
    vector <int> left(n);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty()&& height[st.top()]>height[i])
        {
            right[st.top()]=i;
            st.pop();

        }
        st.push(i);
    }
    while (!st.empty())
    {
       right[st.top()]=n;
       st.pop();
    }

    for (int i = n-1; i >= 0; i--)
    {
        while (!st.empty()&&height[st.top()]>height[i])
        {
            left[st.top()]=i;
            st.pop();

        }
        st.push(i);
        
    }

    while (!st.empty())
    {
        left[st.top()]=-1;
        st.pop();
    }
    
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        ans =max(ans ,height[i]*(right[i]-left[i]-1));
    }
    cout<<ans;
    
    
    

    return 0;
}