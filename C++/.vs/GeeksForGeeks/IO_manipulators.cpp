//{ Driver Code Starts
#include<iostream>
#include<vector> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
       vector<long long> v;
       int i=1,temp;
       v[i]=1;
       for(i=1;i<=N;i++){
        temp=v[i-1]*i;
        if(temp<=N) v.push_back(temp);
       }
       return v; 
       
       
       
       
       
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends