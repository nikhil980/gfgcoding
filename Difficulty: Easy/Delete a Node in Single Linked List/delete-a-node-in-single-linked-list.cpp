//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node *root) {
    Node *temp = root;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


// } Driver Code Ends
/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    struct Node* deleteNode(struct Node* head, int k)
    {
        if(k==1)
        {
           head=head->next;
           return head;
        }
        else{
        struct Node *temp=head;
          struct Node *prev;
        int i=1;
        while(i!=k)
        {
              prev=temp;
             temp=temp->next;
           
            i++;
        }
         struct Node *temp1;
          temp1=prev->next;
        prev->next=temp->next;
        delete(temp1);
        
        return head;
        }
    }
};

//{ Driver Code Starts.

/* Driver program to test above function*/
int main() {

    int T, i, n, l;
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

        int data = arr[0];
        Node *head = new Node(data);
        Node *tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after the integer input

        Solution ob;
        Node *result = ob.deleteNode(head, k);
        print(result);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends