//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
   	int  minimum_difference(vector<int>arr)
   	{   
   	     vector<int>ans;
   	      sort(arr.begin(),arr.end());
   	      int n=arr.size();
   	       for(int a=0;a<n-1;a++)
          {
             ans.push_back(abs(arr[a]-arr[a+1]));
          }
            sort(ans.begin(),ans.end());
        return ans[0];
    }
   	 
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		int ans = ob.minimum_difference(nums);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends