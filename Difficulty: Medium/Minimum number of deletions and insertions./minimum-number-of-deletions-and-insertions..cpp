//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

int fn(string s1, int i, string s2, int j, vector<vector<int>> &dp){
		    if(j==s2.length()){
		        return s1.length()-i;          // deletions to make str1==str2
		    }
		    if(i==s1.length()){
		        return s2.length()-j;          // insertions to make st1==str2
		    }
		      
		    if(dp[i][j]!=-1) return dp[i][j]; 
		      
		    if(s1[i]==s2[j]) return dp[i][j] = fn(s1,i+1,s2,j+1,dp);
		    
		    int op1 = 1 + fn(s1,i,s2,j+1,dp);    // inserting the required char
		    int op2 = 1 + fn(s1,i+1,s2,j,dp);    // removing the current char as it is not needed
		    
		    return dp[i][j] = min(op1,op2);
		    
		}

	public:
	int minOperations(string str1, string str2) { 
	    vector<vector<int> > dp(str1.length(), vector<int>(str2.length(), -1));
	    return fn(str1,0,str2,0,dp);
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends