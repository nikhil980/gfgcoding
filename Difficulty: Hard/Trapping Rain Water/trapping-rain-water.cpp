//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n)
    {
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

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends