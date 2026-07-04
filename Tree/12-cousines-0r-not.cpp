class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if (!root) return false;

        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root, NULL});

        while (!q.empty()) {
            int size = q.size();
            TreeNode* parentX = NULL;
            TreeNode* parentY = NULL;

            for (int i = 0; i < size; i++) {
                auto it = q.front();
                q.pop();

                TreeNode* node = it.first;
                TreeNode* parent = it.second;

                if (node->val == x) parentX = parent;
                if (node->val == y) parentY = parent;

                if (node->left) q.push({node->left, node});
                if (node->right) q.push({node->right, node});
            }

            // after one level
            if (parentX && parentY) {
                return parentX != parentY;
            }

            if (parentX || parentY) {
                return false;
            }
        }

        return false;
    }
};