//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minIncrements(vector<int> arr) {
        // Code here
               sort(arr.begin(),arr.end());
        vector<int> temp;
        temp.push_back(arr[0]);
        int ans=0;
        
        int n=arr.size();
        for(int i=1;i<n;i++){
            int tempEnd=temp.back();
            if(tempEnd >= arr[i]){
                ans+=(tempEnd+1-arr[i]);
                temp.push_back(tempEnd+1);
                
            }
            else{
                temp.push_back(arr[i]);
            }
            
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
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int ans = ob.minIncrements(a);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends