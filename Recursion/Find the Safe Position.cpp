// q -> https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle1840/1

  public:
    
    
    int ans;
    void solve(int k,vector<int>&v,int index){
        
        if(v.size()==1){
            ans=v[0];
            return;
        }
        
        index=(index+k)%v.size();
        v.erase(v.begin()+index);
        solve(k,v,index);
        return;
    }
    
    int safePos(int n, int k) {
        // code here
        vector<int>v;
        
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        
        solve(k-1,v,0);
        return ans;
    }
};
