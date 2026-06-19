
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


 void total(Node* root ,int&count){

    if (root==NULL)
    {
       return;
    }
    
    count++;
    total(root->left,count);
    total(root->right,count);

 }

/*
or it can be done by 

int total(node * root){

if(!root) return 0;

return (1+total(root->left)+total(root->right))


}

*/















int main() {

cout<<"enter the root element :";
   Node *root;

   // create a tree 

   
   root =buildTree();

   int count=0;

   total(root,count);

   cout<<"the no of nodes are : "<<count;
  
   
  
   
    return 0;
}