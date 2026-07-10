class Solution {

void  inorder(TreeNode*root, vector<int>&ans ){

        if(!root)
        return;

        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);


 
    }
public:
    int minDiffInBST(TreeNode* root) {
        vector<int>ans;


        inorder(root,ans);

        int min= INT_MAX;

        for(int i=1;i<ans.size();i++){

            int sub =ans[i]-ans[i-1];

            if(sub<min){

                min = sub;

            }
        }


        return min;
        
    }
};