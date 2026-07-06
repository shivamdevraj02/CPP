
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

void postorder(Node* root){

    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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

  postorder(root);

    return 0;
}


/*
  we can finding the postorder  without recursion 
 
 #include <vector>
class Solution {
    vector<int> postorder (TreeNode * root){
        stack<TreeNode*>s;
        vector<int>ans ;
           if (root == NULL) return ans; 
        s.push(root);
        while(!s.empty()){
            TreeNode* temp = s.top();
            s.pop();
            ans.push_back(temp->val);
             if(temp->left){
                s.push(temp->left);

            }
            if(temp->right){
                s.push(temp->right);

            }

        }

        reverse(ans.begin() ,ans.end());

        return ans;
    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        return postorder(root);
        
    }
};


*/