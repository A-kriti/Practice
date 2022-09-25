// q -> https://www.geeksforgeeks.org/print-shortest-common-supersequence/


#include <bits/stdc++.h>
 
using namespace std;

string Print(string a,string b){

    int n=a.size();
    int w=b.size();
    
    int t[n+1][w+1];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 || j==0)t[i][j]=0;
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(a[i-1]==b[j-1])
                t[i][j]=1+t[i-1][j-1];
            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    
    string s="";
    int i=n;
    int j=w;
    
    while(i>0 && j>0){
        
        if(a[i-1]==b[j-1]){
            s+=a[i-1];
            i--;
            j--;
        }
        
        else {
            if(t[i-1][j]>t[i][j-1]){
                s+=a[i-1];
                i--;
            }
            else{
                s+=b[j-1];
                j--;
            }
        }
    }
    
    while(i>0){
        s+=a[i-1];
        i--;
    }
    
    while(j>0){
        s+=b[j-1];
        j--;
    }
    
    return s;
    
}



// Driver's code
int main() {
 
 string a="HELLO";
 string b="GEEK";
 
 cout<<Print(a,b);
 
  return 0;
}
