//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& arr1, vector<int>& arr2, int k) {
        // code here
        int i=0,j=0;
        int n1=arr1.size(),n2=arr2.size();
        vector<int>ans;
        while(i<n1 && j<n2){
            if(arr1[i]<=arr2[j]){
                ans.push_back(arr1[i]);
                i++;
            }
            else{
                ans.push_back(arr2[j]);
                j++;
            }
            if(ans.size()==k){
                return ans[ans.size()-1];
            }
        }
        while(i<n1){
            ans.push_back(arr1[i]);
            i++;
            if(ans.size()==k){
                return ans[ans.size()-1];
            }
        }
        while(j<n2){
            ans.push_back(arr2[j]);
            j++;
            if(ans.size()==k){
                return ans[ans.size()-1];
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends