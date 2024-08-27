//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Your code goes hereclass Solution{

class Solution {
  public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) 
    {
       sort(arr1.begin(),arr1.end());
       sort(arr2.begin(),arr2.end());
       int i=0;
       int j=0;
       int k=0;
       while(j<arr2.size()&&i<arr1.size())
       {
           if(arr1[i]<=arr2[j])
           {
               res[k]=arr1[i];
               i++;
               k++;
               continue;
           }
          if(arr1[i]>=arr2[j])
           {
                res[k]=arr2[j];
               k++;
               j++;
               continue;
           }
       }
       while(i<arr1.size())
       {
        res[k]=arr1[i];
        k++;
               i++;
       }
        while(j<arr2.size())
       {
         res[k]=arr2[j];
         k++;
               j++;
       }
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr1, arr2;
        int num;
        while (ss >> num) {
            arr1.push_back(num);
        }
        getline(cin, s);
        ss.clear();
        ss.str(s);
        while (ss >> num) {
            arr2.push_back(num);
        }
        int n = arr1.size();
        int m = arr2.size();
        vector<int> res(n + m);
        Solution ob;
        ob.sortedMerge(arr1, arr2, res);

        for (int i = 0; i < n + m; i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends