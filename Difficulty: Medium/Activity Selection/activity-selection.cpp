//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    static bool mycmp(pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }
    
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
       vector<pair<int,int>>p;
       for(int i=0;i<n;i++)
       {
           p.push_back({start[i],end[i]});
       }
       
       sort(p.begin(),p.end(),mycmp);
       
       int prev=p[0].second;
       int ans=1;
       for(int i=1;i<n;i++)
       {
           if(p[i].first>prev)
           {
               ans++;
               prev=p[i].second;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends