//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        sort(arr.begin(),arr.end());
    
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {
                even.push_back(arr[i]);
                continue;
            }
             if(arr[i]%2==1)
            {
                odd.push_back(arr[i]);
            }
        }
        int a=0;
        int b=0;
        int i=0;
        while(a<even.size())
        {
             arr[i]=even[a];
              a++;
              i++;
        }
         while(b<odd.size())
        {
             arr[i]=odd[b];
             b++;
             i++;
        }
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
        Solution obj;
        obj.segregateEvenOdd(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends