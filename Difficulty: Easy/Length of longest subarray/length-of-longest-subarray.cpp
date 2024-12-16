//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    /* Function that returns the longest subarray
       of non-negative integers */
  public:
    int longestSubarry(vector<int>& arr) {
        // write code here
        int maxlen=0;
        int temp=0;
        for(auto i:arr)
        {
            if(i>=0)
            {
                temp++;
            }
            else
            {
                temp=0;
            }
            maxlen=max(maxlen,temp);
        }
        return maxlen;
    }
};

//{ Driver Code Starts.
//   Driver code
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.longestSubarry(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends