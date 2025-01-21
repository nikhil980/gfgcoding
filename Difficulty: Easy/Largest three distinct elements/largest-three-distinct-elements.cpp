//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> getThreeLargest(vector<int>& arr) {
        // code here
      set<int>s(arr.begin(),arr.end());
        
      vector<int>ans;
       
       for(auto i:s)
       {
          
           ans.push_back(i);
       }
       reverse(ans.begin(),ans.end());
       vector<int>aj;
        for(auto I:ans)
        {
             if(aj.size()==3)
           {
               break;
           }
            aj.push_back(I);
        }
        
        return aj;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // To ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input);

        vector<int> arr;
        stringstream ss(input);
        int num;

        while (ss >> num) {
            arr.push_back(num);
        }

        Solution obj;
        vector<int> ans = obj.getThreeLargest(arr);

        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends