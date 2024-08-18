//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void prem(string s,vector<string>&ans,int i)
    {
        if(i==s.length())
        {
            ans.push_back(s);
            return;
        }
        for(int a=i;a<s.length();a++)
        {
            swap(s[i],s[a]);
            prem(s,ans,i+1);
            swap(s[i],s[a]);
        }
    }
    
    vector<string> permutation(string S)
    {
       vector<string>ans;
       prem(S,ans,0);
       sort(ans.begin(),ans.end());
       return ans;
    }
     
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends