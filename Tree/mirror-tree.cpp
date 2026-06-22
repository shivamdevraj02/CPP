void mirror (Node * root){

    if(!root)   // !root meas root == NULL

        Node * temp = root->right;
         Node * right = root->left;
         root->left =temp;

         mirror(root->left);
         mirror(root->right);

     return ;

}