 class Solution {

 TreeNode* bst(vector<int>& preorder, int& index, int lower, int upper) {

        if (index == preorder.size() || lower > preorder[index] ||
            upper < preorder[index])
            return NULL;

        TreeNode* root = new TreeNode(preorder[index++]);

        root->left = bst(preorder, index, lower, root->val);
        root->right = bst(preorder, index, root->val, upper);
        return root;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {

        int index = 0;
        return bst(preorder, index,  INT_MIN, INT_MAX);
    }
};