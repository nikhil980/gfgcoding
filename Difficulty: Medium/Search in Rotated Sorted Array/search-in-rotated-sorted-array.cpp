//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int binary(vector<int>&arr,int key,int low,int high)
  {
     
      if(low==high)
      {
          if(arr[low]==key)
          {
              return low;
          }
          return -1;
      }
      
      int mid=(high+low)/2;
     
       if(arr[mid]==key)
       {
           return mid;
       }
      
      if(arr[low]<arr[mid]&&arr[low]<=key&&arr[mid]>=key)
      {
          binary(arr,key,low,mid-1);
          
      }
      else if(arr[high]>arr[mid]&&arr[high]>=key&&arr[mid]<=key)
      {
           binary(arr,key,mid+1,high);
      }
       else if(arr[high]<arr[mid])
       {
           binary(arr,key,mid+1,high);
       }
       else if(arr[low]>arr[mid])
      {
          binary(arr,key,low,mid-1);
      }
      else
      {
          return -1;
      }
      
  }
  
    int search(vector<int>& arr, int key)
    {
        
        int k=arr.size();
        
        int low =0,high=k-1;
        
    int ans=binary(arr,key,low,high);
    
    return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends