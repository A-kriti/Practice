// q-> https://practice.geeksforgeeks.org/problems/level-order-traversal/1

// Function to return the level order traversal of a BST.
vector<int> levelOrder(struct Node* node) {
    // code here
    vector<int>v;
    queue<Node*>q;
    q.push(node);
    
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        
        v.push_back(temp->data);
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
        
    }
    return v;
}
