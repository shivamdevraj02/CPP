class Solution {
public:
    unordered_map<int, TreeNode*> roots;
    unordered_set<int> used;

    bool dfs(TreeNode* &node, long low, long high) {

        if (!node)
            return true;

        if (node->val <= low || node->val >= high)
            return false;

        // If current node is a leaf and another tree starts here
        if (!node->left && !node->right &&
            roots.count(node->val) &&
            used.find(node->val) == used.end()) {

            used.insert(node->val);
            node = roots[node->val];
        }

        return dfs(node->left, low, node->val) &&
               dfs(node->right, node->val, high);
    }

    TreeNode* canMerge(vector<TreeNode*>& trees) {

        unordered_set<int> leaves;

        // Store all roots
        for (auto root : trees)
            roots[root->val] = root;

        // Collect all leaf values
        for (auto root : trees) {
            if (root->left)
                leaves.insert(root->left->val);
            if (root->right)
                leaves.insert(root->right->val);
        }

        TreeNode* start = nullptr;

        // Find unique root
        for (auto root : trees) {
            if (!leaves.count(root->val)) {
                if (start)
                    return nullptr;
                start = root;
            }
        }

        if (!start)
            return nullptr;

        used.insert(start->val);

        if (!dfs(start, LONG_MIN, LONG_MAX))
            return nullptr;

        // Every tree must be merged
        if (used.size() != trees.size())
            return nullptr;

        return start;
    }
};