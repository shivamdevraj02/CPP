 class Solution {

 TreeNode* bst(vector<int>& postorder, int& index, int lower, int upper) {

        if (index< 0 || lower > postorder[index] ||
            upper < postorder[index])
            return NULL;

        TreeNode* root = new TreeNode(postorder[index--]);

        root->left = bst(postorder, index, lower, root->val);
        root->right = bst(postorder, index, root->val, upper);
        return root;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& postorder) {

        int index = 0;
        return bst(postorder, index,  INT_MIN, INT_MAX);
    }
};