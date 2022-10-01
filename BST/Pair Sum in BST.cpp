

//Function to check if any pair exists in BST whose sum is equal to given value.


void check(Node* root, int X,map<int,int>&m,bool &b){
    
    if(!root)return;
    
    if(m.find(X-(root->data))!=m.end()){
        b=1;
        return;
    }
    
    
    m[root->data]++;
    
    check(root->left,X,m,b);
    check(root->right,X,m,b);
}

bool findPair(Node* root, int X) 
{
    // Your code here
    bool b=0;
    map<int,int>m;
    check(root,X,m,b);
    return b;
}

