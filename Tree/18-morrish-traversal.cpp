/*  Morris Traversal in Binary Tree




                    Morris Traversal ek tree traversal technique hai jisme stack aur recursion ka use nahi hota. Ye temporary pointers (threads) bana kar tree ko traverse karta hai.

                    Time Complexity: O(n)
                    Space Complexity: O(1)
                    Morris Inorder Traversal

Algorithm:

                    Agar current node ka left child nahi hai:
                    Current node ko visit karo.
                    Right child par chale jao.
                    Agar left child hai:
                    Left subtree ka rightmost node (inorder predecessor) dhoondo.
                    Agar predecessor ka right NULL hai:
                    predecessor->right = current (temporary thread banao)
                    Current = current->left
                    Agar predecessor ka right current hai:
                    Thread hata do (predecessor->right = NULL)
                    Current node ko visit karo.
                    Current = current->right


*/


vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    TreeNode* curr = root;

    while (curr != nullptr) {

        if (curr->left == nullptr) {
            ans.push_back(curr->val);
            curr = curr->right;
        }
        else {
            TreeNode* pred = curr->left;

            while (pred->right != nullptr && pred->right != curr)
                pred = pred->right;

            if (pred->right == nullptr) {
                ans.push_back(curr->val);   // Difference
                pred->right = curr;
                curr = curr->left;
            }
            else {
                pred->right = nullptr;
                curr = curr->right;
            }
        }
    }

    return ans;
}