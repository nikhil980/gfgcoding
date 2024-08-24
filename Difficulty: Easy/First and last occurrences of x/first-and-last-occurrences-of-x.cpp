//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) 
    {
        int n=arr.size();
        int l=0;
        int r=n-1;
        int start=-1;
        int last=-1;
        if(arr[0]==x&&arr[1]!=x)
        {
            return{0,0};
        }
        if(arr[r]==x&&arr[r-1]!=x)
        {
            return {r,r};
        }
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]<x)
            {
                l=mid+1;
            }
            else if(arr[mid]>x)
            {
                r=mid-1;
            }
            else
            {
                if(mid==0||arr[mid-1]!=arr[mid])
                {
                    start=mid;
                    break;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        l=0,r=n-1;
          while(l<=r)
        {
             int mid=(l+r)/2;
            if(arr[mid]<x)
            {
                l=mid+1;
            }
            else if(arr[mid]>x)
            {
                r=mid-1;
            }
            else
            {
                if(mid==n-1||arr[mid+1]!=arr[mid])
                {
                    last=mid;
                    break;
                }
                else
                {
                    l=mid+1;
                }
            }
        }
     
        if(start==-1&&last==-1)
        {
            return {-1};
        }
        return {start,last};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> ans = obj.firstAndLast(x, arr);
        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends