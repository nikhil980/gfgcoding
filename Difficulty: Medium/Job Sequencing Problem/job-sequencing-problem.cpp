//{ Driver Code Starts
// Driver code
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
           int n=deadline.size();
         int sum=0;
         int count=0;
         vector<pair<int,int>>Job;
        for(int i=0;i<n;i++){
              pair<int,int>p=make_pair(deadline[i],profit[i]);
            Job.push_back(p);
        }
        
        sort(Job.begin(),Job.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<n;i++){
            
           if(Job[i].first>count){
               count++;
               sum+=Job[i].second;
               pq.push(Job[i].second);
           }else if(Job[i].second>pq.top()){
               sum-=pq.top();
               pq.pop();
                sum+=Job[i].second;
               pq.push(Job[i].second);
           }
        }
        return{count,sum};
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> deadlines, profits;
        string temp;
        getline(cin, temp);
        int x;
        istringstream ss1(temp);
        while (ss1 >> x)
            deadlines.push_back(x);

        getline(cin, temp);
        istringstream ss2(temp);
        while (ss2 >> x)
            profits.push_back(x);

        Solution obj;
        vector<int> ans = obj.jobSequencing(deadlines, profits);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends