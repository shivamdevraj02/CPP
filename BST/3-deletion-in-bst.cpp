
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {

        if (root == NULL)
            return NULL;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        }
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }
        else {

            // Case 1: Leaf Node
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }

            // Case 2: Only Right Child
            else if (root->left == NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // Case 3: Only Left Child
            else if (root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Case 4: Two Children
            else {

                TreeNode* child = root->left;
                TreeNode* parent = root;

                // Find inorder predecessor
                while (child->right != NULL) {
                    parent = child;
                    child = child->right;
                }

                if (parent != root) {
                    parent->right = child->left;
                    child->left = root->left;
                }

                child->right = root->right;

                delete root;
                return child;
            }
        }

        return root;
    }
};