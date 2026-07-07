
#include <vector>
class Solution {


int find (vector<int>& inorder ,int target , int start , int end ){

    for(int i=start;i<=end;i++){
        if(inorder[i]==target)
        return i;
    }

    return -1;
}



 TreeNode*   tree(vector<int>& preorder, vector<int>& inorder,int INstart,int INend,int index){

     if (INstart > INend)
        return nullptr;


            TreeNode* root = new TreeNode(preorder[index]);

            int pos = find(inorder ,preorder[index],INstart,INend );
            root->left =tree(preorder ,inorder ,INstart,pos-1,index+1);
               root->right =tree(preorder, inorder ,pos+1,INend,index+(pos-INstart)+1);

               return root;


 }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();

        return tree(preorder, inorder, 0, n - 1, 0);
        
    }
};