//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSum(vector<int> &arr1, vector<int> &arr2)
    {
      int arr[arr2.size()];
       for(int i=0;i<arr2.size();i++)
       {
           arr[i]=arr1[i]-arr2[i];
       }
      unordered_map<int,int>s;
        
          int res=0;
          int pre_sum=0;
         
          for(int i=0;i<arr1.size();i++)
          {
              pre_sum +=arr[i];
              if(pre_sum==0)
              {
                  res=i+1;
              }
               if(s.find(pre_sum)==s.end())
              {
                  s.insert({pre_sum,i});
              }
              if(s.find(pre_sum)!=s.end())
              {
                  res=max(res,i-s[pre_sum]);
              }
             
          }
          return res;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss1(input);
        getline(cin, input);
        stringstream ss2(input);
        vector<int> arr1, arr2;
        int num;
        while (ss1 >> num) {
            arr1.push_back(num);
        }
        while (ss2 >> num) {
            arr2.push_back(num);
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends