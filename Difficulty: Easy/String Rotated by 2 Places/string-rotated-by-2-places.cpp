//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool fun(string str1, string str2,int i,int j)
    {
        int x=1;
         while(i<str1.length())
         {
             if(str1[i]!=str2[j])
             {
                 x=0;
                 break;
             }
             else
             {
                 i++;
                 j++;
             }
         }
        
         if(x!=0){
              i=0;
         
         while(j<str2.length())
         {
              if(str1[i]!=str2[j])
             {
                 x=0;
                 break;
             }
             i++;
             j++;
         }
        }
        return x;
    }
    bool isRotated(string str1, string str2)
    {
        int x=1;
        int z=1;
         int n1 = str1.size(), n2 = str2.size();
        if(n1!=n2)
        {
            return false;
        }
        if(n1 <= 2) return (str1 == str2);
        
         x=fun(str1,str2,2,0);
         z=fun(str1,str2, str1.size()-2,0);
       
         return (x||z);
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends