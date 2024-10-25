//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k)
    {
        // code
        
        priority_queue<int,vector<int>,greater<int>>min;
        
        int j=0;
        for(int i=0;i<arr.size();i++)
        {
            min.push(arr[i]);
            if(min.size()>k)
            {
                arr[j]=min.top();
                min.pop();
                j++;
            }
            
        }
         while(!min.empty()){
            arr[j] = min.top(); min.pop(); j++;
        }
    }
};

//{ Driver Code Starts.

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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        obj.nearlySorted(arr, k);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        // cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends