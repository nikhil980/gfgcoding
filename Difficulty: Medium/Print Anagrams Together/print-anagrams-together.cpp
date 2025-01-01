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
        // code here
     unordered_map<string,vector<int>>map;
          set<string>hash;
     int k=0;
     for(auto i:arr)
     {
         string s=i;
         sort(s.begin(),s.end());
        map[s].push_back(k);
        hash.insert(s);
        k++;
     }
       
      vector<vector<string>> ans;
           for(auto i:hash)
         {
              vector<string>j;
           
                 for(int n=0;n<map[i].size();n++)
                 {
                    j.push_back(arr[map[i][n]]);

                 }
            
             ans.push_back(j);
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