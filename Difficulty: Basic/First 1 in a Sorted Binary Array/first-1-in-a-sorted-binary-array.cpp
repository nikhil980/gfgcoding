//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int firstIndex(vector<int> &arr)
    {
       int l=0;
       int r=arr.size()-1;
       int result=-1;
       while(l<=r)
       {
           int mid=(r+l)/2;
           if(arr[mid]==1)
           {
               result=mid;
                r=mid-1;
           }
            else
           {
                l=mid+1;
           }
          
       }
       return result;
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
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.firstIndex(arr) << endl;
    }
}
// } Driver Code Ends