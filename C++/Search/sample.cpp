// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        
        int a=0,count=0;
        vector<int>v;
        while(a<N){
            int temp,c=0;
            temp=M[0][a];
            for(int i=1;i<N;i++){
                for(int j=0;j<N;j++){
                    if(temp==M[i][j]){
                        c++;
                        break;
                    }
                }
                if(c==0)
                    break;
            }
            //cout<<"value of c " << c;
            if(c>N-2){
                v.push_back(M[0][a]);
                count++;
                //cout<<"value of count \n" << count;
            }
            //cout<<"\n new \n" <<v[a];
            a++;
        }
        int nv=0;
        for(int i=0;i<v.size()-1;i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j])
                    nv++;
            }
            //count = count -nv;
        }
    return count-nv;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> M(N, vector<int>(N, 0));
        for(int i = 0;i < N*N; i++)
            cin>>M[i/N][i%N];
        
        Solution ob;
        cout<<ob.distinct(M, N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends