// q -> https://practice.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=0;
        int j=m-1;
        
        while(i>=0 && i<n && j>=0 && j<m){
            if(matrix[i][j]==x)return 1;
            
            if(matrix[i][j]>x)j--;
            else i++;
        }
        
        return 0;
    }
};
