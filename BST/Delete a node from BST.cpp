// q -> https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1



// Function to delete a node from BST.

Node* successor(Node* root){
    root=root->right;
    
    while(root!=NULL && root->left!=NULL){
        root=root->left;
    }
    return root;
}

Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(root==NULL)return root;
    
    if(root->data>X){
        root->left=deleteNode(root->left,X);
    }
    
    else if(root->data<X){
        root->right=deleteNode(root->right,X);
    }
    
    else{
        
        if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        
        else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        
        else{
            Node* succ=successor(root);
            root->data=succ->data;
            root->right=deleteNode(root->right,succ->data);
        }
        return root;
    }
}
