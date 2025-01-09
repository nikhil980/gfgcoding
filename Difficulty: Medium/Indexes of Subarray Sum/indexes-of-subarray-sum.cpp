//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
         unordered_map<int,int> getInd;
        int ind=1;
        
        int n=arr.size();
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            //mila to
            if(sum==target)
                return {1,ind};
            
            int remain=sum-target;
            
            if(getInd.find(remain)!=getInd.end()){
                return {getInd[remain]+1,ind};
            }
            
            getInd[sum]=ind;
            ind++;
        }
        
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends