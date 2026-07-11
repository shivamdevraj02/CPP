class Solution {

    TreeNode* bst(vector<int>& postorder, int& index, int lower, int upper) {

        if (index < 0 || postorder[index] < lower || postorder[index] > upper)
            return NULL;

        TreeNode* root = new TreeNode(postorder[index--]);

        // Right subtree first
        root->right = bst(postorder, index, root->val, upper);

        // Left subtree
        root->left = bst(postorder, index, lower, root->val);

        return root;
    }

public:
    TreeNode* bstFromPostorder(vector<int>& postorder) {

        int index = postorder.size() - 1;

        return bst(postorder, index, INT_MIN, INT_MAX);
    }
};