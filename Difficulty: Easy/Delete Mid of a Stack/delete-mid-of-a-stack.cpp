//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s, int sizeOfStack)
    {
        if(sizeOfStack<=2)
        {
          int i=s.top();
          s.pop();
          s.pop();
          s.push(i);
        }
        else{
        stack<int>st;
        int i=floor((sizeOfStack+1)/2);
        int k;
        if(sizeOfStack%2==0)
        {
        k=0;
            
        }
        else
        {
        k=1;
        }
        while(!s.empty())
        {
            if(k==i)
            {
                 s.pop();
            }
            st.push(s.top());
            s.pop();
            k++;
        }
         while(!st.empty())
         {
              s.push(st.top());
            st.pop();
         }
            
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int sizeOfStack;
        cin >> sizeOfStack;

        stack<int> myStack;

        for (int i = 0; i < sizeOfStack; i++) {
            int x;
            cin >> x;
            myStack.push(x);
        }

        Solution ob;
        ob.deleteMid(myStack, myStack.size());
        while (!myStack.empty()) {
            cout << myStack.top() << " ";
            myStack.pop();
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends