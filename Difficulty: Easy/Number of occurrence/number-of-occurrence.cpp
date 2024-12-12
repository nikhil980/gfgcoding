//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countFreq(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
         int count=0;
	    if(arr[n-1]<x)
	    {
	        return count;
	    }
	    for(int a=0;a<n;a++)
	    {
	        if(arr[a]<x)
	        {
	            continue;
	        }
	        else if(arr[a]==x)
	        {
	            count++;
	            continue;
	        }
	        else
	        {
	            break;
	        }
	    }
	    return count;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends