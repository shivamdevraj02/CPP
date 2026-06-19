
#include <iostream>
#include <algorithm>
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


 int  height(Node* root){

    if (root==NULL)
    {
       return 0;
    }

    
    
return (1+max(height(root->left),height(root->right)));

 }

/*
or it can be done by 

int countleaf(node * root){



if(root==NULL)
return 0;

if(!root->left && !root->right)
return 1;

return (countleaf(root->left)+countleaf(root->right))


}

*/















int main() {

cout<<"enter the root element :";
   Node *root;

   // create a tree 

   
   root =buildTree();

  

   int count = height(root);

   cout<<"the height of tree is : "<<count;
  
   
  
   
    return 0;
}