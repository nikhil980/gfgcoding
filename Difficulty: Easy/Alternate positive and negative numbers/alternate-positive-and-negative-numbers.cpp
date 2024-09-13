//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr)
    {
        vector<int> ap;
        vector<int> np;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<0)
            {
                np.push_back(arr[i]);
                
            }
            else{
                
            ap.push_back(arr[i]);
            }
        }
        int i=0;
        int j=0;
        int k=0;
       
           while(i<ap.size()&&j<np.size())
           {
               arr[k]=ap[i];
               i++;
               k++;
               arr[k]=np[j];
               j++;
               k++;
           }
           while(i<ap.size())
           {
             arr[k]=ap[i];
               i++;
               k++;
           }
            while(j<np.size())
           {
               arr[k]=np[j];
               j++;
               k++;
           
        }
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
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