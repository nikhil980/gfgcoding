//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr)
    {
       vector<int>p;
       vector<int>n;
       for(int a=0;a<arr.size();a++)
       {
           if(arr[a]>=0)
           {
               p.push_back(arr[a]);
           }
           else
           {
               n.push_back(arr[a]);
           }
       }
       int a=0;
       int b=p.size();
       int c=0;
       while(a<arr.size())
       {
           if(a<b){
           arr[a]=p[a];}
           else
           {
               arr[a]=n[c];
               c++;
           }
           a++;
       }
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends