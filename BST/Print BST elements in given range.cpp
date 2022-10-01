// q -> https://practice.geeksforgeeks.org/problems/print-bst-elements-in-given-range/1


class Solution {
  public:
  
    vector<int>v;
    
    void find(Node *root, int low, int high){
        
        if(!root)return;
        
        if(low<=root->data && root->data<=high){
            v.push_back(root->data);
        }
        
        find(root->left,low,high);
        find(root->right,low,high);
    }
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here  
        
        find(root,low,high);
        sort(v.begin(),v.end());
        return v;
    }
};
