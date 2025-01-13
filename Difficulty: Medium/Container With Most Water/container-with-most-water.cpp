//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
           
        int n=arr.size();
        if (n<=1){
            return 0;
        }
        int left=0;
        int right=n-1;
        int maxElement=0;
        int sum=0;
        
        while (left<right){
            sum=min(arr[right],arr[left])*(right-left);
            maxElement=max(sum,maxElement);
            
            if (arr[left]<arr[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxElement;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends