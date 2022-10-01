// q -> https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1


class Solution
{
    public:
    
    //Function to find the nodes that are common in both BST. 
    vector <int>v;
    
    void solve(Node *root,map<int,int>&m){
        if(!root)return;
        
        if(m.find(root->data)!=m.end()){
            v.push_back(root->data); 
        }
        
        else{
            m[root->data]=1;
        }
        
        solve(root->left,m);
        solve(root->right,m);
    }
    
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
        map<int,int>m;
        solve(root1,m);
        solve(root2,m);
        sort(v.begin(),v.end());
        return v;
    }
};

