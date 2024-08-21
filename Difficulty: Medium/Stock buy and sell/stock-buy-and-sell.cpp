//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> prices, int n)
    {
      vector<vector<int>>ans;
      int buy=prices[0];
      int buy_indx=0;
      int sell_indx;
        int p=0;
        int sell;
        
        for(int a=1;a<n;a++)
        {
            if(prices[a]>prices[a+1]||a==n-1)
            {
                sell=prices[a];
                sell_indx=a;
                if(sell-buy>0)
                {
                ans.push_back({buy_indx,sell_indx});
                p=p+sell-buy;
                }
                buy_indx=a+1;
                buy=prices[a+1];
            }
            else
            {
                int x=buy;
                buy=min(buy,prices[a]);
                if(buy!=x)
                {
                    buy_indx=a;
                }
            
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends