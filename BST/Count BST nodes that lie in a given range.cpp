// q -> https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1

class Solution{
public:

    int c=0;
    
    void count(Node *root, int l, int h){
        if(!root)return;
        
        if(l<=root->data && root->data<=h)c++;
        
        count(root->left,l,h);
        count(root->right,l,h);
    }
    
    int getCount(Node *root, int l, int h)
    {
      // your code goes here 
      count(root,l,h);
      return c;
    }
};
