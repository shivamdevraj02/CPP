void right_view(Node root , int level , vector<int>& ans){

    if(!root){
        return;
    }

    if(ans.size()==level){

        ans.push_back(root);

    }

    right_view(root->right,level+1,ans);
    right_view(root->left ,level+1,ans);


}

int main(){
    
    vector<int>ans;

    if(!root){
        return ans;
    }

  right_view(root,0,ans);

}