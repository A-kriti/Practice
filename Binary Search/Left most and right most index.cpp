// q -> https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1

{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        
        long n=v.size();
        long first=-1;
        long last=-1;
        
        long l1=0;
        long r1=n-1;
        
        while(l1<=r1){
            long m1=(l1+r1)/2;
            if(v[m1]==x){
                first=m1;
                r1=m1-1;
            }
            
            else if(v[m1]<=x)l1=m1+1;
            else r1=m1-1;
        }
        
        
        
        long l2=0;
        long r2=n-1;
        
        while(l2<=r2){
            long m2=(l2+r2)/2;
            if(v[m2]==x){
                last=m2;
                l2=m2+1;
            }
            
            else if(v[m2]<=x)l2=m2+1;
            else r2=m2-1;
        }
        
        
        return {first,last};
    }
};
