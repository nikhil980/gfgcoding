//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) 
    {
        int n = str.size();
    vector<int> res(n, 0);
    int j = 0;
    int i = 1;
    while (i < n)
    {
        if (str[i] == str[j])
        {
            res[i] = j + 1;
            i++;
            j++;
        }
        else
        {
            if (j != 0)
            {
                j = res[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return res[n - 1];}
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends