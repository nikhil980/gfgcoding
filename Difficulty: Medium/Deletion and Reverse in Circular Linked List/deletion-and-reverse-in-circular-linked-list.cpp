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


// } Driver Code Ends
class Solution {
  public:
    /* structure for a node
    struct Node
    {
        int data;
        struct Node *next;
    };
    */

    /* Function to delete a given node from the list */
    void deleteNode(struct Node** head, int key)
    {
          if (*head == NULL) return;
        struct Node* curr = (*head)->next;
        struct Node* prev = *head;
        
        if((*head)->data ==key)
        {
            while(curr->next!=*head) curr = curr->next;
            
            curr->next = (*head)->next;
            delete(*head);
            *head = curr->next;
            return;
        }
        
        do{
            if(curr->data ==key)
            {
                prev->next = curr->next;
                delete(curr);
                return;
            }
            
            prev = curr;
            curr = curr->next;
        }while(curr != *head);
        
       
    }

    /* Function to reverse the linked list */
    void reverse(struct Node** head_ref)
    {
           struct Node* curr = *head_ref;
        struct Node* prev = NULL;
        struct Node* forward = NULL;
        
        do{
            forward = curr->next;
            curr->next= prev;
            prev = curr;
            curr = forward;
        }while(curr != *head_ref);
        
        (*head_ref)->next = prev;
        *head_ref = prev;

    }
};

//{ Driver Code Starts.

/* Function to print nodes in a given
circular linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    if (head != NULL) {
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    } else
        cout << "empty" << endl;

    printf("\n");
}

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
        int key;
        cin >> key;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        tail->next = head; // Make the list circular
        Solution ob;
        ob.deleteNode(&head, key);
        ob.reverse(&head);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends