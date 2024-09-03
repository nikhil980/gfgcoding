//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
    
        for(int i=0;i<N;i++)
        {
           if(arr[i]==0)
           {
               arr[i]=-1;
           }
        }
          unordered_map<int,int>s;
        
          int res=0;
          int pre_sum=0;
         
          for(int i=0;i<N;i++)
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

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends