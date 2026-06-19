
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

 void inorder(Node* root){

    if(root==NULL)
        return;
    

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);



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

  inorder(root);

    return 0;
}