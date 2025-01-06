//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if(arr.size()<=1)
        {
            return {};
        }
          sort(arr.begin(),arr.end());
        int a=0, b=arr.size()-1;
        int m=arr[b]+arr[a];
        int diff=abs(target-m);
        int k=arr[a];
        int l=arr[b];
        while(b>a)
        {
            
            int j=arr[a]+arr[b];
          
            if(diff>abs(target-j))
            {
               diff=abs(target-j);
               k=arr[a];
               l=arr[b];
            }
            else if(diff==abs(target-j))
            {
              if(arr[b]>=l)
              {
                  if(arr[a]<k){
                   k=arr[a];
                   l=arr[b];
                  }
              }
            }
        
              if(j>target)
            {
                b--;
            }
            else
            {
                a++;
            }
              
            
        }
        return {k,l};
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
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends