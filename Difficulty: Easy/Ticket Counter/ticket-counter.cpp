//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
                vector<int>arr;
      for(int i=1;i<=N;i++)
      {
          arr.push_back(i);
      }
      int i=0;
      int j=N-1;
      
      while(i<j)
      {
          int X=K;
          while(i<j&&X!=0)
          {
              i++;
              X--;
          }
          
           while(i<j&&X!=K)
          {
              j--;
              X++;
          }
      }
      return arr[j];
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends