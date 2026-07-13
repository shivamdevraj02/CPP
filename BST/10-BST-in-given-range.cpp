voide find(node *root,vector<int>&ans){

    if(!root)
    return;

    if(root->data>n1 && root->data>n2){
        find(root->left,ans)
    }
    else if(root->data<n1 && root->data<n2){
        find(root->right,ans)
    }
    else
    {
         find(root->left,ans);
         ans.push_back(root->data);
         find(root->right,ans);
    }


}