//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool ispair(int arr[],int n,int x,int s)
    {
        int i=s,j=n-1;
        while(i<j)
        {
            if(arr[i]+arr[j]==x)
            {
                return true;
            }
            else if(arr[i]+arr[j]>x)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
    bool find3Numbers(int arr[], int n, int x) 
    {
         sort(arr,arr+n);
         for(int a=0;a<n-2;a++)
	   {
	       if(ispair(arr,n,x-arr[a],a+1))
	       {
	           return true;
	       }
	   }
	   return false;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends