//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends

int zeroandone(string s,char start)
{
    
      int ans=0;
      if(start!=s[0])
      {
          ans++;
      }
   for(int a=1;a<s.length();a++)
   {
       if(start!=s[a])
       {
           start=s[a];
       }
       else
       {
           ans++;
           if(s[a]=='0')
           {
               start='1';
           }
           else
           {
               start='0';
           }
       }
   }
   return ans;
}
int minFlips (string s)
{
    int zero=zeroandone(s,'0');
    int one=zeroandone(s,'1');
    
    if(zero<one)
    {
        return zero;
    }
    else
    {
        return one;
    }
    
}