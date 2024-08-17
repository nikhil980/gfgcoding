//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     bool canSplit(vector<int>& arr)
     {
        int l=arr[0];
        int r=accumulate(arr.begin()+1,arr.end(),0);
        for(int i=1;i<arr.size();i++){
            if(l==r){
                return true;
            }
            l=l+arr[i];
            r=r-arr[i];
        }
        return false;
    }
}; 


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends