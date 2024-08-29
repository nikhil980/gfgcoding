//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr)
    {
       vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                pos.push_back(arr[i]);
                continue;
            }
             if(arr[i]<0)
            {
                neg.push_back(arr[i]);
            }
        }
        int a=0;
        int b=0;
        int i=0;
       while(a<pos.size()&&b<neg.size())
       {    
          arr[i]=pos[a];
            i++;
            a++;
           arr[i]=neg[b];
             b++;
             i++;
       }
        while(a<pos.size())
        {
             arr[i]=pos[a];
              a++;
              i++;
        }
         while(b<neg.size())
        {
             arr[i]=neg[b];
             b++;
             i++;
        }
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    if (t == 1) {
        cout << -1 << endl;
        return 0;
    }
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends