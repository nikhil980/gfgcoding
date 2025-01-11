//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string maximumFrequency(string &s) {
        // Your code foes here.
            unordered_map<string,int>m;
        string str="";
        vector<string>v;
        unordered_set<string>st;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                while(s[i]!=' '&&i<s.size())
                {
                    str+=s[i];
                    i++;
                }
            }
            m[str]++;
            maxi=max(maxi,m[str]);
            if(st.find(str)==st.end())
            {
                st.insert(str);
                v.push_back(str);
            }
            str="";
        }
         for(int i=0;i<v.size();i++)
        {
            if(m[v[i]]==maxi)
            {
                string ans=v[i]+" "+to_string(maxi);
                return ans;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);
        Solution ob;

        cout << ob.maximumFrequency(str) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends