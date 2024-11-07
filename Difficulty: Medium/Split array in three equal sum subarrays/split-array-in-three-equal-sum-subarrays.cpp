//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
      
        int sum=0;
        for(auto it:arr)
        {
            sum +=it;
        }
        if(sum%3!=0)
        {
            return {-1,-1};
        }
        int curr=0;
        int first=0;
        int second=-1;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            curr +=arr[i];
            
            if(curr*3>sum)
            {
                return {-1,-1};
            }
            if(curr*3==sum)
            {
                first=second+1;
                second=i;
                curr=0;
                count++;
            }
        }
        if(count>=3)
        {
            return {first,second};
        }
        else
        {
            return {-1,-1};
        }
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends