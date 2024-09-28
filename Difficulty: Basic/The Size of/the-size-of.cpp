//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void dataTypes(int, float, double, long long, string);


// } Driver Code Ends
//User function Template for C++

// Function to find size of different data types
void dataTypes(int a, float b, double c, long long l, string d){
   
   int res=sizeof(a)+sizeof(b/c)+sizeof(c/a)+sizeof(b/a);
  cout<<sizeof(a)<<" "<<sizeof(b/c)<<" "<<sizeof(b/a)<<" "<<sizeof(c/a)<<endl;
   cout<<res+sizeof(l)<<" "<<sizeof(d[0])<<endl;
   
}

//{ Driver Code Starts.

// Driver Code
int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    
    int t;
    cin >> t;
    
    while(t--){
        
        cin >> a >> b >> c >> l >> d;
    
        dataTypes(a, b, c, l, d);
    }
    
    return 0;
}
// } Driver Code Ends