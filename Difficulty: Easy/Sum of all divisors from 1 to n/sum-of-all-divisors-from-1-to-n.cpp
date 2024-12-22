//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     int sumOfdiv(int n){
      int add=0;
      
      for (int i=1;i<=n;i++){
          if (n%i==0){
              add+=i;
          }
      }
      return add;
  }
    int sumOfDivisors(int n) {
        int sum=0;
        for (int i=1;i<=n;i++){
            sum+=sumOfdiv(i);
        }
        return sum;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends