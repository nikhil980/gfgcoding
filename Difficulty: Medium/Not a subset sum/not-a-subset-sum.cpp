//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
   long long findSmallest(vector<int> &arr) {
        // Your code goes here.
       long long range=0;
       long long sum=0;
       
       for(int i=0;i<arr.size();i++)
       {
           long long cur=arr[i];
           if(cur>range+1) return range+1;
           
           range+=cur;
       }
       
       return range+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        auto ans = ob.findSmallest(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends