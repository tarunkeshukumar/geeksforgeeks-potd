// https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1

class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')

    Node *ans=NULL;
    bool flag=false;
    
    void inorder(Node *root, Node*x){
        if(!root)
            return ;
      
        inorder(root->left, x);
        if(flag){
            ans = root;
            flag = false;
        }
        if(root == x)
            flag=true;
      
        inorder(root->right, x);
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code he
        inorder(root, x);
        return ans;
    }
};
