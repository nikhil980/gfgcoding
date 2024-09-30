//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n)
	{
	     int i , j , k , l;
    for(i = 1 ; i<=n ; i++){

        for(j = 1 ; j<i ; j++){

            cout<<" ";
        }
        for(k = n ; k>=i ; k--){

            cout<<"*";
        }
        for(l = n-1 ; l>=i ; l--){

            cout<<"*";
        }
        cout<<endl;
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
    }
    return 0;
}
// } Driver Code Ends