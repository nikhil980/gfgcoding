//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &A, int k) {
        // code here.
        unordered_map<int,int>h;
          int x=0;
          while(x<k)
          {
              h[A[x]]++;
              x++;
          }
          vector<int>ans;
          ans.push_back(h.size());
          x=0;
          for(int i=k;i<A.size();i++)
          {
              h[A[x]]--;
              if(h[A[x]]==0)
              {
                  h.erase(A[x]);
              }
                h[A[i]]++;
              ans.push_back(h.size());
            
              x++;
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends