//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n)
    {
        vector<int>ans;
       for(int b=0;b<n;b++)
       { 
        ans.push_back(arr[b]);
       }  
       if(d>n)
       {
           d=d%n;
       }
        int a;
        for(a=0;a+d<n;a++)
        {
            swap(arr[a],arr[a+d]);
        }
        int b=0;
        for(a=a;a<n;a++)
        {
            arr[a]=ans[b];
            b++;
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends