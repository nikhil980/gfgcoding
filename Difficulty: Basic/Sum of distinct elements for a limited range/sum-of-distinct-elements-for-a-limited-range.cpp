//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to calculate the sum of distinct elements in the array.
    int sumOfDistinct(vector<int>& arr)
    {
        int n=arr.size();
       int fre[n+1]={0};
       for(int i=0;i<n;i++)
       {
           fre[arr[i]]=1;
       }
       int ans=0;
       for(int i=0;i<n+1;i++)
       {
           if(fre[i]==1)
           {
               ans=ans+i;
           }
       }
       return ans;
       
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.sumOfDistinct(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends