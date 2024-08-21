//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

 
  class Solution {
    static bool cmp(pair<int,int> a, pair<int,int>b){
        if(a.second == b.second){
            return a.first > b.first;
        }else{
            return a.second > b.second;
        }
    }
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto it:mp){
            pair<int,int> p = make_pair(it.first,it.second);
            v.push_back(p);
        }
        sort(v.begin(),v.end(),cmp);
        
        for(int i =0; i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends