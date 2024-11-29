//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int n1=s1.length();
        int n2=s2.length();
        
        string str="";
        int i=0,j=0;
        char carry='0';
        int l=-1,m=-1;
        while(s1[i]!='1'&&i<n1)
        {
            l++;
            i++;
        }
          while(s2[j]!='1'&&j<n2)
        {
            m++;
            j++;
        }
 
         i=n1-1,j=n2-1;
        while(i!=l&&j!=m)
        {
            if(s1[i]=='1'&&s2[j]=='1'&&carry=='1')
            {
                str+='1';
                carry='1';
            }
            else if(s1[i]=='0'&&s2[j]=='1'&&carry=='1')
            {
                  str+='0';
                  carry='1';
            }
             else if(s1[i]=='1'&&s2[j]=='0'&&carry=='1')
            {
                  str+='0';
                  carry='1';
            }
              else if(s1[i]=='1'&&s2[j]=='1'&&carry=='0')
            {
                  str+='0';
                  carry='1';
            }
            else if(s1[i]=='0'&&s2[j]=='0'&&carry=='0')
            {
                  str+='0';
                  carry='0';
            }
            else
            {
                str +='1';
                carry='0';
            }
   
            i--;
            j--;
        }
        while(i!=l)
        {
            if(s1[i]=='1'&&carry=='1')
            {
                  str+='0';
                  carry='1';
            }
            else if(s1[i]=='0'&&carry=='0')
            {
                  str+='0';
                  carry='0';
            }
            else 
            {
                str +='1';
                carry='0';
            }
            i--;
        }
         while(j!=m)
        {
            if(s2[j]=='1'&&carry=='1')
            {
                  str+='0';
                  carry='1';
            }
            else if(s2[j]=='0'&&carry=='0')
            {
                  str+='0';
                  carry='0';
            }
            else 
            {
                str +='1';
                carry='0';
            }
            
            j--;
        }
        
        if(carry=='1')
        {
            str+='1';
        }
        
        reverse(str.begin(),str.end());
        return str;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends