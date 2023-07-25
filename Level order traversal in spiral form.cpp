// https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1

vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> ans;
    deque<Node*> q;
    bool flag = true;
    q.push_back(root);
    
    while(!q.empty()){
        int size = q.size();
        while(size--){
            if(flag){
                Node *node = q.back(); q.pop_back();
                ans.push_back(node->data);
                if(node->right) q.push_front(node->right);
                if(node->left) q.push_front(node->left);
            }
            else{
                Node *node = q.front(); q.pop_front();
                ans.push_back(node->data);
                if(node->left) q.push_back(node->left);
                if(node->right) q.push_back(node->right);
            }
        }
        flag = !flag;
    }
    return ans;
    
}
