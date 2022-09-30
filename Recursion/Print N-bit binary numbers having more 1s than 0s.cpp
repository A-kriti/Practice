// q -> https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1

class Solution{
public:	
    
    vector<string>v;
    
    void genrate(int n,string s,int l0,int l1){
        
        if(s.size()==n){
            v.push_back(s);
            return;
        }
        
        if(l1<n)genrate(n,s+'1',l0,l1+1);
        if(l0<l1)genrate(n,s+'0',l0+1,l1);
    }
    
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    genrate(N,"",0,0);
	    return v;
	}
};
