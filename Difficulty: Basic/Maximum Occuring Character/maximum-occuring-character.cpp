//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int>h;
        for(int i=0;i<str.length();i++)
        {
            h[str[i]]++;
        }
        char ans;
        int maxi=INT_MIN;
        for(auto i:h)
        {
            if(maxi<i.second)
            {
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends