// q -> https://www.geeksforgeeks.org/permute-string-changing-case/

#include <bits/stdc++.h>

using namespace std;

void genrate(string in,string ot){
    
    if(in.size()==0){
        cout<<ot<<" ";
        return;
    }
    
    string ot1=ot;
    string ot2=ot;
    
    ot1+=in[0];
    ot2+=toupper(in[0]);
    in.erase(in.begin()+0);
    
    genrate(in,ot1);
    genrate(in,ot2);
    
}

int main()
{
    string in="abc";
    genrate(in,"");
    return 0;
}
