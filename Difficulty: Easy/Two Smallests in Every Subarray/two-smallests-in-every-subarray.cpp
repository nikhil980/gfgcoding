//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int pairWithMaxSum(vector<int>& arr) {
        if(arr.size()==1){
            return -1;
        }
        int n=arr.size();
        int i=0,j=1;
        int sum=0;
        while(j<n){
            sum=max(sum,arr[i]+arr[j]);
            i++,j++;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> a;
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        int res = obj.pairWithMaxSum(a);
        cout << res << endl;
    }
}
// } Driver Code Ends