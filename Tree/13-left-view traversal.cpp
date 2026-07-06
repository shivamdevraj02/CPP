


vector<int> leftView(Node* root){  // we returning  vector  (ans), isliye function ka return type vector<int> hona chahiye.
    
    
    
    if(root == NULL)
    return {};
    queue<Node*>q;
    q.push(root);
   
    vector<int> ans ;
    while (!q.empty())
    {
       int n = q.size();
       ans.push_back(q.front()->data);
       while(n--){
        Node * temp = q.front();
        q.pop();
        if(temp->left){

            q.push(temp->left);

        }
         if(temp->right){
             q.push(temp->right);
            
        }
       }

    }

    return ans;
    
} 




// Another way to solve this problem  :

void left_view(Node root , int level , vector<int>& ans){

    if(!root){
        return;
    }

    if(ans.size()==level){

        ans.push_back(root);
    }

    left_view(root->left ,level+1,ans);
    left_view(root->right,level+1,ans);


}

int main(){

  vector<int>ans;

  if(!root){
    return ans;
  }

  left_view(root,0,ans);

}