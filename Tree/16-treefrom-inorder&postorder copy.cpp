 
class Solution {
public:
    int find(vector<int>& inorder, int target, int start, int end) {
        for (int i = start; i <= end; i++) {
            if (inorder[i] == target)
                return i;
        }
        return -1;
    }

    TreeNode* tree(vector<int>& postorder, vector<int>& inorder,
                   int INstart, int INend, int &index) {

        if (INstart > INend)
            return nullptr;

        TreeNode* root = new TreeNode(postorder[index]);
        index--;

        int pos = find(inorder, root->val, INstart, INend);

        root->right = tree(postorder, inorder, pos + 1, INend, index);

        root->left = tree(postorder, inorder, INstart, pos - 1, index);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int index = postorder.size() - 1;
        return tree(postorder, inorder, 0, inorder.size() - 1, index);
    }
};