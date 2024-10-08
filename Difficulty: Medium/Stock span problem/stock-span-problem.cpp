//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int>ans;
        stack<int>st;
        ans.push_back(1);
        st.push(0);
        for(int i=1;i<n;i++)
        {
            if(price[st.top()]>price[i])
            {
                ans.push_back(i-st.top());
                st.push(i);
            }
            else
            {
                while(!st.empty()&&price[i]>=price[st.top()])
                {
                     st.pop();
                }
                if(!st.empty())
                {
                   ans.push_back(i-st.top());
                     st.push(i);
                
                }
                else{
                 ans.push_back(i+1);
                      st.push(i);
                }
                     
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends