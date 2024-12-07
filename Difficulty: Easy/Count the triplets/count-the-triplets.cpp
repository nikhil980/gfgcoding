//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    int countTriplet(vector<int>& arr) 
	{
	    int n=arr.size();
	    sort(arr.begin(),arr.end());
	    int count = 0;
	    
	    for(int i=n-1;i>=2;i--)
	    {
	        int left = 0;
	        int right = i-1;
	        
	        while(left < right)
	        {
	            int sum = arr[left] + arr[right];
	            
	            if(sum == arr[i])
	            {
	                count++;
	                left++;
	                right--;
	            }
	            else if(sum < arr[i])
	            {
	                left++;
	            }
	            else{
	                right--;
	            }
	        }
	        
	    }
	    
	    return count;
	
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
        int res = obj.countTriplet(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends