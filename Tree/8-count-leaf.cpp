
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


 void countleaf(Node* root ,int&count){

    if (root==NULL)
    {
       return;
    }

    if (!root->left && !root->right)
    {
        count++;
        return;
        
    }
    
    
    countleaf(root->left,count);
    countleaf(root->right,count);

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

   int count=0;

   countleaf(root,count);

   cout<<"the no of leaf nodes are : "<<count;
  
   
  
   
    return 0;
}