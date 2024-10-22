//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int i=0;
        int j=arr.size()-1;
        int lsum=0;
        int rsum=0;
        while(i<j)
        {
            lsum +=arr[i];
            rsum +=arr[j];
            i++;
            j--;
        }
        if(i!=j){
        return lsum*rsum;
        }
        else
        {
            return lsum*(rsum+arr[j]);
        }
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.multiply(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends