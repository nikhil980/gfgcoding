//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // Your code here
        unordered_map<int,int>a;
        
        for(auto i:arr)
        {
            a[i]++;
        }
     
        
        for(auto i:arr)
        {
            if(a.find(target-i)!=a.end())
            {
                if(i==target-i)
                {
                    if(a[target-i]>1)
                    {
                        return{i,i}; 
                    }
                    continue;
                }
                return {min(target-i,i),max(target-i,i)};
            }
        }
        return {};
      
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
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        vector<int> res = ob.twoSum(arr, target);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            sort(res.begin(), res.end());
            for (int i = 0; i < res.size(); i++)
                cout << res[i] << " ";
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends