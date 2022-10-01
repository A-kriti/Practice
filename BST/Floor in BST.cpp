
// User function Template for C++

// Function to return the floor of given number in BST.

//method 1
// int floor(Node* root, int key) {
//     // Your code goes here
//     if(root==NULL)return -1;
    
//     if(root->data==key)return key;
    
//     if(root->data>key)return floor(root->left,key);
  
//     int floor_val=floor(root->right,key);
    
//     return (floor_val>root->data)?floor_val:root->data;
// }

int floor(Node* root, int key) {
    // Your code goes here
    //if(root==NULL)return -1;
    int res=-1;
    while(root!=NULL){
        if(root->data==key)return key;
        
        else if (root->data<key){
            res=max(res,root->data);
            root=root->right;
        }
        
        else {
            root=root->left;
        }
    }
    
    return res;
}
