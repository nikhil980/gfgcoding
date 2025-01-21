//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string encode(vector<string>& s) {
        // code here
           int n=s.size();
        string str="";
        for(int i=0;i<n;i++){
            str+=s[i];
            str+=",";
        }
        return str;
    }

    vector<string> decode(string& s) {
        // code here
          int n=s.size();
        vector<string> str;
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]==','){
            str.push_back(temp);
                temp="";
            }
            else
            temp+=s[i];
            
        }
        return str;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // To ignore the newline after the number of test cases

    while (tc--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        string word;
        vector<string> s;

        while (ss >> word) {
            s.push_back(word);
        }

        Solution obj;
        string encodedString = obj.encode(s);
        vector<string> decodedStrings = obj.decode(encodedString);

        for (string x : decodedStrings) {
            cout << x << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends