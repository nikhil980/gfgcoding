//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



bool metaStrings (string s1, string s2)
{
    // your code here
    if(s1==s2)
    {
        return false;
    }
    vector<int>ans;
    
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            ans.push_back(i);
        }
    }
    if(s1[ans[1]]==s2[ans[0]]&&s1[ans[0]]==s2[ans[1]]&&ans.size()==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}