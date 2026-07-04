


vector<int> leftView(Node* root){  // Tum return kar rahe ho ans, isliye function ka return type vector<int> hona chahiye.
    
    
    
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