//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& a) 
    {
        int a0=0,a1=0,a2=0;
       int  n=a.size();
        for(int k=0;k<n;k++)
        {
            if(a[k]==0)
            {
                a0++;
            }
             if(a[k]==1)
            {
                a1++;
            }
             if(a[k]==2)
            {
                a2++;
            }
        }
        
        
        for(int k=0;k<n;k++)
        {
            if(a0!=0)
            {
                a[k]=0;
                  a0--;
                continue;
              
            }
            else if(a1!=0)
            {
                a[k]=1;
                  a1--;
                continue;
            }
            else if(a2!=0)
            {
                a[k]=2;
                  a2--;
                continue;
            }
        }
       
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends