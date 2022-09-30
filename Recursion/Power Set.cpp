// q -> https://practice.geeksforgeeks.org/problems/power-set4302/1

vector<string>v;
	    void genrate(string s,string h,int l){
	        
	        if(h.size()!=0)v.push_back(h);
	        
	        for(int i=l;i<s.size();i++){
	            h+=s[i];
	            genrate(s,h,i+1);
	            h.pop_back();
	        }
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    
		    //sort(s.begin(),s.end());
		    genrate(s,"",0);
		    sort(v.begin(),v.end());
		    return v;
		}
