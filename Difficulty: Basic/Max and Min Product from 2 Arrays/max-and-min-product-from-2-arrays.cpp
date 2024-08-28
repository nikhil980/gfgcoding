//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum element from array a[] and
    // the minimum element from array b[] and return their product.
    long long find_multiplication(vector<int> &arr1, vector<int> &arr2) 
    {
        long long a=INT_MIN;
        long long b=INT_MAX;
        
        for(int i=0;i<arr1.size();i++)
        {
            if(arr1[i]>a)
            {
                a=arr1[i];
            }
        }
        for(int i=0;i<arr2.size();i++)
        {
            if(arr2[i]<b)
            {
                b=arr2[i];
            }
        }
        return a*b;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }
        vector<int> arr2;
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        long long ans = ob.find_multiplication(arr1, arr2);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends