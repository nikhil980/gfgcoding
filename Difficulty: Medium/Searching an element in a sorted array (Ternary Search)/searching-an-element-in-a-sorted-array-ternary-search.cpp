//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int n, int k) 
    { 
      int l=0;
      int r=n-1;
      while(l<=r)
      {
          int mid1=l+(r-l)/3;
          int mid2=r-(r-l)/3;
          
          if(arr[mid1]==k)
          {
              return 1;
          }
          if(arr[mid2]==k)
          {
              return 1;
          }
          if(arr[mid1]>k)
          {
              r=mid1-1;
          }
          if(arr[mid2]>k&&arr[mid1]<k)
          {
              l=mid1+1;
              r=mid2-1;
          }
          if(arr[mid2]<k)
          {
              l=mid2+1;
          }
      }
      return -1;
    }
};

//{ Driver Code Starts.
int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        
        int arr[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.ternarySearch(arr, N, K) << endl;

    }

	return 0; 
} 

// } Driver Code Ends