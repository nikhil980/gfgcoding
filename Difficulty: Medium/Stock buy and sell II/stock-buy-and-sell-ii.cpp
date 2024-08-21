//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) 
    {
        int buy=prices[0];
        int p=0;
        int sell;
        
        for(int a=1;a<n;a++)
        {
            if(prices[a]>prices[a+1]||a==n-1)
            {
                sell=prices[a];
                if(sell-buy>0)
                {
                p=p+sell-buy;
                }
                buy=prices[a+1];
            }
            else
            {
                buy=min(buy,prices[a]);
            }
        }
        return p;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends