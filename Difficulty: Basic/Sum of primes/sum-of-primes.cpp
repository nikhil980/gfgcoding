//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    bool isprime(int a)
    {
        if(a==1)
        {
            return false;
        }
        if(a==2||a==3)
        {
            return true;
        }
        if(a%2==0||a%3==0)
        {
            return false;
        }
      
        for(int i=5;i*i<=a;i=i+6)
        {
            if(a%i==0||a%(i+2)==0)
            {
                return false;
            }
        }
        return true;
    }
    int primeSum(int N){
        // code here
        int ans=0;
        while(N)
        {
            if(isprime(N%10))
            {
            ans+=N%10;
            }
            N/=10;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends