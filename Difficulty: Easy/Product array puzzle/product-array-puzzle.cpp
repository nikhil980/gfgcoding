//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) 
    {

        long long int m=1;
        int valid=0;
        for(int a=0;a<nums.size();a++)
        {
            if(nums[a]!=0)
            {
            m=m*nums[a];
            }
            else
            {
                valid++;
            }
        }
        
        vector<long long int>ans;
        for(int a=0;a<nums.size();a++)
        {
            if(valid>1)
            {
                 ans.push_back(0);
            }
            if(valid==1&&nums[a]!=0)
            {
                ans.push_back(0);
            }
            if(nums[a]==0&&valid==1)
            {
            ans.push_back(m);
                
            }
            if(valid==0&&nums[a]!=0)
            {
                ans.push_back(m/nums[a]);
            }
            
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends