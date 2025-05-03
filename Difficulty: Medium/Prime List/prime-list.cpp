//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
  public:
     public:
    unordered_map<int, bool> visited;
    void primeCollect(int x, vector<int> &p){
        for(int i=2;i<=2*x;i++){
            if(!visited[i]){
                p.push_back(i);
                for(int j=i;j<=2*x;j+=i)
                    visited[j] = true;
            }
        }
        return;
    } 
    
    int lowerInd(int l, int r, vector<int> &v, int &x){
        if(l>r)
            return -1;
        int m = l+(r-l)/2;
        if(v[m] == x)
            return m;
        if(v[m] < x)
            return max(m, lowerInd(m+1, r, v, x));
        return lowerInd(l, m-1, v, x);    
    }

    Node* primeList(Node *head) {
        // code here
        int maxi = 0;
        Node* h = head;
        while(h){
            maxi = max(maxi, h->val);
            h = h->next;
        }
        
        vector<int> p;
        primeCollect(maxi, p);
        int n = p.size();
        
        h = head;
        while(h){
            int t = h->val;
            if(t==1){
                h->val = 2;
                h = h->next;
                continue;
            }
            
            int l = lowerInd(0, n-1, p, t);
            if(p[l]>=t || l==(n-1))
                h->val = p[l];
            else if(l<(n-1)){
                int d1 = t - p[l];
                int d2 = p[l+1] - t;
                if(d1 <= d2)
                    h->val = p[l];
                else
                    h->val = p[l+1];
            }
            
            h = h->next;
        }
        
        return head;
    }
};





//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        head = ob.primeList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends