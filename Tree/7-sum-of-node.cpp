
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


 void total(Node* root ,int&sum){

    if (root==NULL)
    {
       return;
    }
    
  sum+=root->data;
    total(root->left,sum);
    total(root->right,sum);

 }

/*
or it can be done by 

int total(node * root){

if(!root) return 0;

return (root->data+total(root->left)+total(root->right))


}

*/















int main() {

cout<<"enter the root element :";
   Node *root;

   // create a tree 

   
   root =buildTree();

   int sum=0;

   total(root,sum);

   cout<<"the sum of nodes are : "<<sum;
  
   
  
   
    return 0;
}