// q-> https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1


Node* insert(Node* root, int Key) {
    // Your code here
    if(root==NULL){
        return new Node(Key);
    }
    
    if(root->data<Key){
        root->right=insert(root->right,Key);
    }
    
    if(root->data>Key){
        root->left=insert(root->left,Key);
    }
    
    return root;
}

