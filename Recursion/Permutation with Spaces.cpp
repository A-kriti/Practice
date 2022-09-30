// q -> https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1

public:
    vector<string>v;
    
    void genrate(string in,string op){
        
        string j=" ";
        if(in.size()==0){
            v.push_back(op);
            return;
        }
        
        string op1=op;
        string op2=op;
        
        op1+=j;
        op1.push_back(in[0]);
        op2.push_back(in[0]);
        
        in.erase(in.begin()+0);
        genrate(in,op1);
        genrate(in,op2);    
    }

    vector<string> permutation(string S){
        // Code Here
        string t;
        t+=S[0];
        S.erase(S.begin()+0);
        genrate(S,t);
        return v;
    }
};
