
#include <iostream>
using namespace std;
class Node {
public:
   int data;
   Node* left;
   Node* right;
     Node(int value) {
          data = value;
          left = nullptr;
          right = nullptr;
     }
 };

 void preorder(Node* root){

    if(root==NULL)
        return;
    

    cout<<root->data;
    preorder(root->left);
    preorder(root->right);



 }


 Node * buildTree(){
   
     int data;
     cin>>data;
     
    if(data == -1){
        return nullptr;
    }
   Node* temp = new Node(data);
   cout<<"enter the left child of "<< data<< ":";
    temp->left = buildTree();
   cout<<"enter the right child of "<< data<< ":";
   
    temp->right = buildTree();
    return temp;
 }

int main() {

cout<<"enter the root element :";
   Node *root;

   // create a tree 

   root =buildTree();

   cout<<"preorder traversal : "<<endl;

  preorder(root);

    return 0;
}


/*   we can finding the preorder without recursion 

#include <vector>
class Solution {
    vector<int> preorder (TreeNode * root){
        stack<TreeNode*>s;
        vector<int>ans ;
           if (root == NULL) return ans; 
        s.push(root);
        while(!s.empty()){
            TreeNode* temp = s.top();
            s.pop();
            ans.push_back(temp->val);
            if(temp->right){
                s.push(temp->right);

            }
             if(temp->left){
                s.push(temp->left);

            }

        }

        return ans;
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {

        return preorder (root);
        
        
    }
};


*/