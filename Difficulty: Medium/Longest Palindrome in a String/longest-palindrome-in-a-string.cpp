//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longestPalindrome(string &s) {
          if(s.empty()){
           return "";
       }
         string t="^";
       for(char c:s){
           t+="#"+string(1,c);
       }
       t+="#&";
       int n=t.size();
       vector<int>p(n,0);
       int center=0,right=0;
         for(int i=1;i<n-1;i++){
           center=2*i-1;
           if(i<right){
               p[i]=min(right-i,p[center]);
           }
             while(t[i+p[i]+1]==t[i-p[i]-1]){
               p[i]++;
           }
           if(i+p[i]>right){
               right=p[i]+i;
               center=i;
           }
         }
         int ml=0,id=0;
         for(int i=1;i<n-1;i++){
           if(p[i]>ml){
               ml=p[i];
               id=i;
           }
       }
         int s1=(id-ml)/2;
         return s.substr(s1,ml);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends