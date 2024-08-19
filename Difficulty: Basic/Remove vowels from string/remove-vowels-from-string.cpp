//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeVowels(string S) 
    {
        // Your code goes here
        string res;
        for(char c: S )
        {
            if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {
                continue;
            }
            
            res+=c;
        }
        return res;
        
    }


	
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends