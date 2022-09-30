// q -> https://practice.geeksforgeeks.org/problems/subsets-1587115621/1

{
    public:
    //Function to find all possible unique subsets.
    vector<vector<int>>v;
    
    void genrate(vector<int>&arr, int n,vector<int>t,int l){
        
        v.push_back(t);
        
        //while(l<n && arr)
        //if(l<n-1 && arr[l]==arr[l+1])l++;
        for(int i=l;i<n;i++){
            if(i!=l && arr[i]==arr[i-1])continue;
            t.push_back(arr[i]);
            genrate(arr,n,t,i+1);
            t.pop_back();
        }
        
    }
    
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        vector<int>t;
        sort(arr.begin(),arr.end());
        genrate(arr,n,t,0);
        return v;
    }
};
