//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        int N=arr.size();
           for(int i=0;i<N;i++)
        {
           if(arr[i]==0)
           {
               arr[i]=-1;
           }
        }
          unordered_map<int,int>s;
        
          int res=0;
          int pre_sum=0;
         
          for(int i=0;i<N;i++)
          {
              pre_sum +=arr[i];
              if(pre_sum==0)
              {
                  res=i+1;
              }
               if(s.find(pre_sum)==s.end())
              {
                  s.insert({pre_sum,i});
              }
              if(s.find(pre_sum)!=s.end())
              {
                  res=max(res,i-s[pre_sum]);
              }
             
          }
          return res;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line); // Read the whole line for the array

        // Convert the line into an array of integers
        stringstream ss(line);
        vector<int> a;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }

        // Create the solution object
        Solution obj;

        // Call the maxLen function and print the result
        cout << obj.maxLen(a) << endl;
    }

    return 0;
}
// } Driver Code Ends