//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
   vector<int> max_of_subarrays(int k, vector<int> &arr) {
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
    cin.ignore();

    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends