
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


 int  noneleaf(Node* root){

    if (root==NULL)
    {
       return 0;
    }

    if (!root->left && !root->right)
    {
      
        return 0;
        
    }
    
    
return (1+noneleaf(root->left)+noneleaf(root->right));

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

  

   int count = noneleaf(root);

   cout<<"the no of leaf nodes are : "<<count;
  
   
  
   
    return 0;
}