//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();
        int d = (arr[n-1] - arr[0]) / n;
        int actual_d = arr[1] - arr[0];
        bool isCompleteAP = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i-1] != actual_d) {
                isCompleteAP = false;
                break;
            }
        }
        if (isCompleteAP) {
            return arr[n-1] + actual_d;
        }
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int expected = arr[0] + mid * d;
            if (arr[mid] == expected) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return arr[0] + low * d;
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
        Solution ob;
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends