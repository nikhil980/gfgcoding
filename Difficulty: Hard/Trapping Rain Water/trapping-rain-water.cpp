//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n =arr.size();
         int lmax[n],rmax[n];
       //lmax first element is always 0th element of arr
       lmax[0]=arr[0];
       
       for(int i=1;i<n;i++)
       {
           lmax[i]=max(lmax[i-1],arr[i]);
       }
       
       //rmax last element is always arr[n-1]
       rmax[n-1]=arr[n-1];
       
       for(int i=n-2;i>=0;i--)
       {
           rmax[i]=max(rmax[i+1],arr[i]);
       }
       
       //last coumpute the result 
       long long res=0;
       
       //result is equal to the subtraction of min of (rmax[i],lmax[i])to arr[i]
       
       for(int i=1;i<n-1;i++)
       {
           res=res+(min(rmax[i],lmax[i])-arr[i]);
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
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends