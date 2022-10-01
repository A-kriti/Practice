// q -> https://practice.geeksforgeeks.org/problems/implementing-ceil-in-bst/1

// User function Template for C++

// Function to return the ceil of given number in BST.


int findCeil(Node* root, int input) {
    
    if(!root)return -1;
   
    if(root->data==input )return input;
    
    if(root->data<input)return findCeil(root->right,input);
    
    int ceil=findCeil(root->left,input);
    
    return (ceil>=input)?ceil:root->data;

}
