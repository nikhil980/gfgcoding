//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double medianOfSortedArrays(vector<int>& a, vector<int>& b) {
        // Your code goes here
        
        int i=0;
        int j=0;
        vector<double>ans;
        int n=a.size();
        int m=b.size();
        while(i<n&&j<m)
        {
            if(a[i]<b[j])
            {
            ans.push_back(a[i]);
            i++;
            }
            else if(b[j]<a[i])
            {
                ans.push_back(b[j]);
                j++;
            }
            else
            {
              ans.push_back(a[i]);
              ans.push_back(a[i]);
              i++;
              j++;
            }
        }
        while(i<n)
        {
            ans.push_back(a[i]);
            i++;
        }
        while(j<m)
        {
            ans.push_back(b[j]);
            j++;
        }
        
        if(ans.size()%2==1)
        {
          return double(ans[ans.size()/2]);
        }
        else
        {
            return double((ans[ans.size()/2]+ans[ans.size()/2-1])/2);
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOfSortedArrays(array1, array2);
        if (ans == (int)ans) {
            cout << (int)ans << endl;
        } else {
            cout << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends