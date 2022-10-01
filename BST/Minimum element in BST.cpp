// q -> https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1


// Function to find the minimum element in the given BST.


void search(Node* root,int &ans){
    
    if(root==NULL)return;
    ans=min(ans,root->data);
    search(root->left,ans);
    search(root->right,ans);
}
int minValue(Node* root) {
    // Code here
    if(!root)return -1;
    int ans=root->data;
    search(root,ans);
    return ans;
}
