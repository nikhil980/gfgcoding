//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    public:
 vector<vector<string>> anagrams(vector<string>& arr) {
        // Step 1: Initialize a hash map to group anagrams
        unordered_map<string, vector<string>> mp;
        
        // Step 2: Iterate through each word in the array
        for (int i = 0; i < arr.size(); i++) {
            string st = arr[i];
            sort(st.begin(), st.end()); // Sort the word to use it as a key
            mp[st].push_back(arr[i]);  // Group the original word by the sorted key
        }
        
        // Step 3: Collect all groups of anagrams
        vector<vector<string>> ans;
        for (auto i : mp) {
            ans.push_back(i.second); // Add each group to the result
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends