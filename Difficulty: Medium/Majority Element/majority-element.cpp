//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    int majorityElement(int arr[], int n)
    {
        //we use moore's voting Algorithim
         //first we find the most occurs element
           int res =0;
           int count=1;
           
           for(int a=1;a<n;a++)
           {
               if(arr[res]==arr[a])
               {
                   count++;
               }
               else
               {
                   count--;
               }
               if(count==0)
               {
                   res=a;
                   count=1;
               }
           }
           count=0;
           for(int a=0;a<n;a++)
           {
               if(arr[res]==arr[a])
               {
                   count++;
               }
           }
     if(count<=n/2)
     {
       return -1;  
     }
     else
     {
         return arr[res];
     }
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends