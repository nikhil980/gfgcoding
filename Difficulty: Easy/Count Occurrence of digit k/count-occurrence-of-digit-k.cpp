//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function given below*/
class Solution {
  public:
    int num(int k, vector<int>& arr) {
        // Code here
        int count=0;
     for(int i=0;i<arr.size();i++)
     {
         while(arr[i])
         {
             if(arr[i]%10==k)
             {
                 count++;
             }
             arr[i] /=10;
         }
     }
     return count;
    }
};

//{ Driver Code Starts.
//    int num(int a[], int n, int k);
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.num(k, arr);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends