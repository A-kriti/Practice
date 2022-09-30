// q -> https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

{
	public:
	
	    vector<string>v;
    
        void genrate(string S,int l){
            
            int n=S.size();
            if(l==n-1){
                v.push_back(S);
                return;
            }
            
            
            for(int i=l;i<n;i++){
                if(i!=l && S[i-1]==S[i])continue;
                swap(S[i],S[l]);
                genrate(S,l+1);
                swap(S[i],S[l]);
            }
            
            
        }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    genrate(S,0);
		    sort(v.begin(),v.end());
            return v;
		}
};
