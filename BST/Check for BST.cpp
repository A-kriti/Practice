// q -> https://practice.geeksforgeeks.org/problems/check-for-bst/1

{
    public:
    //Function to check whether a Binary Tree is BST or not.
    
    
    
    bool check(Node* root,int min,int max){
        
        if(root==NULL)return 1;
        
        if(root->data>max || root->data<min){
            return 0;
        }
        
        return check(root->left,min,root->data) && check(root->right,root->data,max);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        int min=INT_MIN;
        int max=INT_MAX;
        return check(root,min,max);
        
    }
};

