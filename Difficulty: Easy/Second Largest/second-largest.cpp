//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
     int largest (vector<int> arr1)
    {
      
        for(int a=0;a<arr1.size()-1;a++)
        {
            if(arr1[0]<arr1[a+1])
            {
                arr1[0]=arr1[a+1];
              
            }
        
           
        }
        return arr1[0];
    }
        
    int getSecondLargest(vector<int> &arr) {
        // Code Here
         
        int ans=largest(arr);
        
        sort(arr.begin(),arr.end());
        
        for(int n=arr.size()-1;n>=0;n--)
        {
            if(arr[n]<ans)
            {
                return arr[n];
            }
        }
        
        return -1;
      
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends