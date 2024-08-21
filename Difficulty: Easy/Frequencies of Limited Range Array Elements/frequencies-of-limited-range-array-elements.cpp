//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int n, int p) 
    {
        sort(arr.begin(),arr.end());
        int num=1;
        int a=0,f=0;
        vector<int>ans;
        while(num!=p+1)
        {
            if(arr[a]==num)
            {
                f++;
                a++;
            }
            else
            {
               ans.push_back(f);
                f=0;
                num++;
            }
        }
        for(int a=0;a<n;a++)
        {
            if(a<p){
            arr[a]=ans[a];}
            else
            {
                arr[a]=0;
            }
        }
    }
};


//{ Driver Code Starts.

int main() {
    long long t;

    // testcases
    cin >> t;

    while (t--) {

        int N, P;
        // size of array
        cin >> N;

        vector<int> arr(N);

        // adding elements to the vector
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cin >> P;
        Solution ob;
        // calling frequncycount() function
        ob.frequencyCount(arr, N, P);

        // printing array elements
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends