//{ Driver Code Starts
#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int maxWater(vector<int>& arr) 
    {   
         int n=arr.size();
        //first we find left max element ans store it in lmax[]
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
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.maxWater(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends