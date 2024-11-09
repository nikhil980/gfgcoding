//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) 
    {
        // code here
        
        sort(arr.begin(),arr.end());
        
        string s1="";
        string s2="";
        
        int n= arr.size();
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                s1 +=to_string(arr[i]);
            }
            else
            {
                s2 +=to_string(arr[i]);
            }
        }
        int i=s1.length()-1;
        int j=s2.length()-1;
        int carray=0;
        string ans="";
        while(i>=0&&j>=0)
        {
            int d1=s1[i]-'0';
            int d2=s2[j]-'0';
             ans +=to_string((d1+d2+carray)%10);
             carray=(d1+d2+carray)/10;
            i--;
            j--;
        }
          while(i>=0)
        {
            int d1=s1[i]-'0';
           
             ans +=to_string((d1+carray)%10);
             carray=(d1+carray)/10;
            i--;
        }
           while(j>=0)
        {
            int d2=s2[j]-'0';
           
             ans +=to_string((d2+carray)%10);
             carray=(d2+carray)/10;
            j--;
        }
        if(carray!=0)
        {
            ans +=to_string(carray);
        }
        
           reverse(ans.begin(),ans.end());
           
           for(int i=0;i<ans.length();i++)
           {
               if(ans[i]!='0')
               {
                   return (ans.substr(i));
               }
           }
        return "0";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends