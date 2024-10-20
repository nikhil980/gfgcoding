//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        string x1="";
        string x2="";
         for(int i=0;i<s1.length();i++)
         {
             if(s2.find(s1[i])==string::npos)
             {
                 x1 +=s1[i];
             }
         }
         for(int i=0;i<s2.length();i++)
         {
             if(s1.find(s2[i])==string::npos)
             {
                 x2 +=s2[i];
             }
         }
         return ((x1+x2)==""?"-1":x1+x2);
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends