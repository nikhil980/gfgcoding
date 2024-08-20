//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) 
    {
        long long sum1=0;
        long long sum2=0;
        int indx1=0;
        int indx2=arr.size()-1;
        while(indx1<indx2)
        {
            if(sum2>sum1)
            {
            sum1=sum1+arr[indx1];
            indx1++;
            }
            else
            {
            sum2=sum2+arr[indx2];
            indx2--;
            }
        }
      
        
        if(sum1==sum2)
        {
            return indx2+1;
        }
        else
        {
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends