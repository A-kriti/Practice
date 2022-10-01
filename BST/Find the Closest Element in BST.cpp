// q -> https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1


class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	
	int ans=INT_MAX;
	void solve(Node *root, int K){
	    
	    if(!root)return;
	    
	    ans=min(ans,abs(K-root->data));
	    solve(root->left,K);
	    solve(root->right,K);
	    
	}
	
    int minDiff(Node *root, int K)
    {
        //Your code here
        solve(root,K);
        return ans;
    }
};
