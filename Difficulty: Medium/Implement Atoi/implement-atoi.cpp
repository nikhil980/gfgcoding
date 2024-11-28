//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        string str(s);
        long long int ans=0;
        int i=0;
        if(str[0]=='-'||str[0]=='+')
        {
            i++;
        }

        for(i;i<str.size();i++)
        {
            if(str[i]>='0'&&str[i]<='9'){
            ans=ans*10+(str[i]-'0');}
            else
            {
                break;
            }
            // cout<<ans<<endl;
        }
        
     if(str[0]=='-')
        {
            if(ans>=INT_MAX)
            {
                return -2147483648;
            }
            return ans*-1;
        }
        if(ans>=INT_MAX)
        {
            return 2147483647;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends