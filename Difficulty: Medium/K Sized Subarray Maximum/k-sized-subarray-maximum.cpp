//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
          int n = arr.size();
        
        map<int,int> pq;
        vector<int> res;
        for(int i=0;i<k;i++)
        pq[arr[i]]++;
        res.push_back(pq.rbegin()->first);
        
        for(int i=1;i<n-k+1;i++)
        {
            pq[arr[i-1]]--;
            if(pq[arr[i-1]]==0)
            pq.erase(arr[i-1]);
            pq[arr[i+k-1]]++;
            res.push_back(pq.rbegin()->first);
        }
        
        return res;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends