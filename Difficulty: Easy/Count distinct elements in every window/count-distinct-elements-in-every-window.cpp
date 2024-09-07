//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
         unordered_map<int,int>h;
          int x=0;
          while(x<k)
          {
              h[A[x]]++;
              x++;
          }
          vector<int>ans;
          ans.push_back(h.size());
          x=0;
          for(int i=k;i<n;i++)
          {
              h[A[x]]--;
              if(h[A[x]]==0)
              {
                  h.erase(A[x]);
              }
                h[A[i]]++;
              ans.push_back(h.size());
            
              x++;
          }
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends