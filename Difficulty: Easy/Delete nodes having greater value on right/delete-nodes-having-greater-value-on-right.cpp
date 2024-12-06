//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node* root) {
    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *compute(Node *head) {
        // your code goes here
       vector<int>arr;
      
        while(head)
        {
           arr.push_back(head->data);
            head=head->next;
        }
        int n=arr.size();
        
       
        vector<int>z;
        int max=arr[n-1];
     
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>=max)
            {
                max=arr[i];
              z.push_back(arr[i]);
            }
        }
         struct Node*ans=new Node(z[z.size()-1]);
          struct Node* temp=ans;
      
     
         for(int i=z.size()-2;i>=0;i--)
       {
           temp->next=new Node(z[i]);
           temp=temp->next;
       }
       return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
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
        Solution ob;
        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Node* result = ob.compute(head);
        print(result);
        cout << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends