//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	  
	void bitonicGenerator(int arr[], int n)
	{
	    vector<int>even;
	    vector<int>odd;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            even.push_back(arr[i]);
	        }
	        else
	        {
	            odd.push_back(arr[i]);
	        }
	    }
	    sort(even.begin(),even.end());
	    sort(odd.begin(),odd.end());
	    int a=0;
	    int e=even.size();
	    int o=odd.size();
	     for( a=0;a<e;a++)
	     {
	         arr[a]=even[a];
	     }
	     int o1=o-1;
	     for( a;a<n;a++)
	     {
	         arr[a]=odd[o1];
	         o1--;
	     }
	    
	}
		 

};

//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];


        

        Solution ob;
        ob.bitonicGenerator(arr, n);
        
        for (int i = 0; i < n; i++) 
        	cout << arr[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends