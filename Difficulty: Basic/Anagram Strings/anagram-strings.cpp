//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int areAnagram(string a, string b) 
    {
      if(a.length()!=b.length())
       {
           return 0;
       }
       int arr[256]={0};
       
       for(int i=0;i<a.length();i++)
       {
           arr[a[i]]++;
           arr[b[i]]--;
       }
        for(int i=0;i<256;i++)
        {
            if(arr[i]!=0)
            {
                return 0;
            }
        }
        return 1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends