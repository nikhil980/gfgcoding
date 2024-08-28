//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void loopHere(Node *head, Node *tail, int position) {
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int count( struct Node *slow_p, struct Node *head)
    {
        struct Node *temp=head;
        
        while(temp!=slow_p)
        {
            temp=temp->next;
        }
        
        int k=1;
        while(temp->next!=slow_p)
        {
            temp=temp->next;
            k++;
        }
        return k;
    }
    int countNodesinLoop(struct Node *head) 
    {
           struct Node *slow_p=head;
           struct Node *fast_p=head;
           
           while(slow_p&&fast_p&&fast_p->next)
           {
               slow_p=slow_p->next;
               fast_p=fast_p->next->next;
               if(slow_p==fast_p)
               {
                   int k=count(slow_p,head);
                   return k;
               }
               
           }
           return 0;
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
        int k;
        cin >> k;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        loopHere(head, tail, k);

        Solution ob;
        cout << ob.countNodesinLoop(head) << endl;
    }
    return 0;
}

// } Driver Code Ends