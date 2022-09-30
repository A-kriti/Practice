// q -> https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1

class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long c=0;
    void solve(int N, int from, int to, int aux){
        c++;
        if(N==1){
            cout<<"move disk "<< N <<" from rod "<<from<<" to rod "<<to<<endl;
            return;
        }
        
        solve(N-1,from,aux,to);
        cout<<"move disk "<< N <<" from rod "<<from<<" to rod "<<to<<endl;
        
        solve(N-1,aux,to,from);
        //cout<<"move disk "<< N <<" from rod "<<aux<<" to rod "<<to<<endl;
    }
    
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        solve(N,from,to,aux);
        return c;
    }

};
