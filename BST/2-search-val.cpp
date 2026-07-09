
class Solution {
public:
    TreeNode* search(TreeNode* root, int val) {

        if (root == NULL)
            return NULL;

        if (root->val == val)
            return root;

        if (val < root->val)
            return search(root->left, val);

        return search(root->right, val);
    }

    TreeNode* searchBST(TreeNode* root, int val) {

        return search(root, val);
    }
};