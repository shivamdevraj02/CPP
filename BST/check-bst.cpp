#include<iostream>
#include<vector>
using namespace std ;

class node{
    public:
    node * left,*right;
    int data;

    node(int val){
        left=   NULL;
        right= NULL;
        data= val;
    }
}

inorder(node*root ,vector<int>&ans){

    if (!root)
    {
        return;
    }
    
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);

}
int main(){
  

    node * root = new node();
    vector<int> ans;

    inorder(root,ans)

    for (int  i = 0; i < ans.size(); i++)
    {
        if (ans[i]<=ans[i-1])
        {
            return 0;
        }
        
    }

    return 0 ;
}