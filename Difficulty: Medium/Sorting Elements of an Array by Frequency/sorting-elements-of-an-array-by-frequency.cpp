//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool cmp(pair<int,int>a,pair<int,int>b){
        if(a.first>b.first) return true;
        
        else if(a.first==b.first && a.second<b.second) return true;
        
        return false;
    }
    
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        
        int maxi=*max_element(arr.begin(),arr.end());
        
        vector<int>store(maxi+1,0);
        
        for(int i=0;i<n;i++) {
            store[arr[i]]++;
        }
        
        vector<pair<int,int>>vec;
        for(int i=0;i<=maxi;i++){
            if(store[i]!=0){
                vec.push_back({store[i],i});
            }
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        vector<int>ans;
        for(int i=0;i<vec.size();i++){
            int size=vec[i].first;
            while(size--){
                ans.push_back(vec[i].second);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends