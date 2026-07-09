#include<iostream>
using namespace std ;
class Node {
    public :
    int data;
    Node * left,*right;
    Node(int val){

        data =val;
        left = NULL;
        right = NULL;

    }

};

Node *insert_node(Node* root ,int target){

    if(!root){
        Node* temp = new Node(target);
        return temp;
    }

    if(target<root->data){

        root->left = insert_node(root->left ,target );

    }
    else if(target>root->data){

           root->right = insert_node(root->right ,target );
        
    }
    return root;
}

void inorder(Node* root){

    if(!root)
        return ;
    

    inorder(root->left);

    cout<<root->data<<" ";

    inorder(root->right);



}

// inorder travesal in the binnary search tree always gives a sorted array ;
int main(){
   
    int arr[] ={6,3,17,2,13,27,54,32,12,9};

    Node *root = NULL;


 for (int i = 0; i < 10; i++)
 {
    root = insert_node(root,arr[i]);
 }
 

 inorder(root);


    return 0;
}
