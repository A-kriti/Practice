// q -> https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1


// Function to search a node in BST.
bool search(Node* root, int x) {
    // Your code here
    if(root==NULL)return 0;
    
    if(root->data==x)return 1;
    
    
    return search(root->left,x) || search(root->right,x);
    //or 
    
    // if(root->data>x)return search(root->left,x);
    // return search(root->right,x);
}
