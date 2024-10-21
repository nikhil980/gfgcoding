//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
            stack<int> s1;
        
        for(auto ch: S){
            if(ch=='*'){
                int a=s1.top();
                s1.pop();
                int b=s1.top();
                s1.pop();
                int ans=b*a;
                s1.push(ans);
            }
            
            else if(ch=='+'){
                int a=s1.top();
                s1.pop();
                int b=s1.top();
                s1.pop();
                int ans=b+a;
                s1.push(ans);
            }
            else if(ch=='-'){
                int a=s1.top();
                s1.pop();
                int b=s1.top();
                s1.pop();
                int ans=b-a;
                s1.push(ans);
            }
            else if(ch=='/'){
                int a=s1.top();
                s1.pop();
                int b=s1.top();
                s1.pop();
                int ans=b/a;
                s1.push(ans);
            }
            else{
                s1.push(ch-'0');
            }
            
        }
        return s1.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends