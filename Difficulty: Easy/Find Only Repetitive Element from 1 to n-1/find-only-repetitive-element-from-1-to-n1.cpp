//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // code here
        unordered_set<int>h;
        for(auto i:arr)
        {
            if(h.find(i)!=h.end())
            {
                return i;
            }
            h.insert(i);
            
        }
        return arr[0];
    }
};

//{ Driver Code Starts.

int main() {

    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        int result = ob.findDuplicate(arr);

        cout << (result) << endl;
    }
    return 0;
}

// } Driver Code Ends