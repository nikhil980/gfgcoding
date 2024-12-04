//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here  int space = 2 * (n - 1);
          int space = 2 * (n - 1);
        for(int i=1; i<=n; i++){
            //numbers
            for(int j=1; j<=i; j++){
                cout<<j<<" ";
            }
            //space
            for(int j=1; j<=space; j++){
                cout<<"  ";
            }
            for(int j=i; j>=1; j--){
                cout<<j<<" ";
            }
            cout<<endl;
            space-=2;
        }
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends