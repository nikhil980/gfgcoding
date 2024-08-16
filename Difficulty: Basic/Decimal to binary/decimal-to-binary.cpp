//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    vector<int>ans;
         while(N)
         {
             int k=(N&1);
             ans.push_back(k);
             
            N=N>>1;
         }
          reverse(ans.begin(), ans.end());
          for(auto i: ans){
             cout<<i;}
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends