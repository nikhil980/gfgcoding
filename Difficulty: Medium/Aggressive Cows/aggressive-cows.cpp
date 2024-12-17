//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
           int n = stalls.size();   //no. of total stalls

         int ans;
        sort(stalls.begin(),stalls.end()); //sort stalls value
        int start = 0,end = stalls[n-1]-stalls[0],mid; //calculate maximum range blw stalls;
        while(start <= end){
            mid = start +(end-start)/2;  //find min mid range where cow assigning stalls
            int cowcount = 1; int pos = stalls[0]; //in the begining my first cow assign initial stall
            for(int i = 1; i<n; i++){
                if(pos + mid <= stalls[i]){  //it check minimum space is valid for cow
                    cowcount++;
                    pos = stalls[i];
                }
            }
            if(cowcount < k){  //if cow count is exceeded the range of no. of cows
                end = mid-1;
            }
            else{ //if all cows are placed in stalls then increase the range
                ans = mid;
                start = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends