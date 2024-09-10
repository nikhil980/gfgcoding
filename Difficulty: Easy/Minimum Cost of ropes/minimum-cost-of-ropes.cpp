//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr)
    {
      priority_queue<long long,vector<long long>,greater<long long>>p;
        for(long long i=0;i<arr.size();i++)
        {
            p.push(arr[i]);
        }
        long long c=0;
        while(p.size()!=1)
        {
            long long ele1=p.top();
            p.pop();
            long long ele2=p.top();
            p.pop();
            p.push(ele1+ele2);
            c+=ele1+ele2;
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends