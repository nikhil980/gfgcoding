//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) 
    { 
        int n=arr.size();
        int lmin[n];
        int rmin[n];
        lmin[0]=0;
        rmin[n-1]=0;
       stack<int>s;
      s.push(arr[0]);
       int k=n-1;
           for(int i=1;i<n;i++)
           {
               while(s.size()!=0&&s.top()>=arr[i])
               {
                   s.pop();
               }
              if(s.size()!=0)
              {
                  lmin[i]=s.top();
              }
              else
              {
                  lmin[i]=0;
              }
              s.push(arr[i]);
               
           }
          while(!s.empty())
          {
              s.pop();
          }
          s.push(arr[n-1]);
          for(int i=n-2;i>=0;i--){
         
               while(s.size()!=0&&s.top()>=arr[i])
               {
                   s.pop();
               }
              if(s.size()!=0)
              {
                  rmin[i]=s.top();
              }
              else
              {
                  rmin[i]=0;
              }
              s.push(arr[i]);
               
          }
          int ans=INT_MIN;
          for(int i=0;i<n;i++)
          {
              ans=max(ans,abs(lmin[i]-rmin[i]));
          }
         return ans;
           
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends