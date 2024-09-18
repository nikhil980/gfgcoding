//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    
 string revere(int k,int i,string s)
    {
        if(k==i)
        {
            return s;
        }
        while(k<=i)
        {
            swap(s[k],s[i]);
            i--;
            k++;
        }
        return s;
        
    }
    string reverseWords(string s) 
    { 
        int k=0;
       
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='.')
           {
               s=revere(k,i-1,s);
               k=i+1;
           }
       }
        s=revere(k,s.length()-1,s);
        s=revere(0,s.length()-1,s);
       return s;
      
    } 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends