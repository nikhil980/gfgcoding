//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string isPrime(int a) {
        // code here
   
        if(a==1)
        {
            return "No";
        }
        if(a==2||a==3)
        {
            return "Yes";
        }
        if(a%2==0||a%3==0)
        {
            return "No";
        }
      
        for(int i=5;i*i<=a;i=i+6)
        {
            if(a%i==0||a%(i+2)==0)
            {
                return "No";
            }
        }
        return "Yes";
    }
    
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        string res = obj.isPrime(n);
        
        cout<<res<<"\n";
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends