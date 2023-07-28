// https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1

//Function to find the lowest common ancestor in a BST.
class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            while(root){
                if(root->data>n1 && root->data>n2)
                    root = root->left;
                else if(root->data<n1 && root->data<n2)
                    root=root->right;
                else
                    return root;
            }
        }
};
