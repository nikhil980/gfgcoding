//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> arr, int k)
{
   int n=arr.size();
   
   int l=0;
   int r=n-1;
   while(l<=r)
   {
       int mid=(r+l)/2;
       
       if(arr[mid]==k)
       {
           return mid;
       }
       if(arr[mid]>=arr[l])
       {
           if(arr[mid]>k&&arr[l]<=k)
           {
           r=mid-1;
           }
           else
           {
               l=mid+1;
           }
       }
       else
       {
           if(arr[mid]<k&&arr[r]>=k)
           {
              l=mid+1;
           }
           else
           {
              r=mid-1;
           } 
       }
   }
   return -1;
}