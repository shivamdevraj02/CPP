node *lca(node*root,int n1,int n2){

    if(!root)
    return NULL;

    if(root->data >n1 && root->data>n2){
      return   lca(root->left,n1,n2);
    }
     else if(root->data <n1 && root->data<n2){
      return   lca(root->right,n1,n2);
    }

    else return root;

}