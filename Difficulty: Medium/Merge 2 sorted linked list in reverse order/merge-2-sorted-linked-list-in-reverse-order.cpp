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

void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << '\n';
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution {
  public:

    struct Node *mergeResult(Node *head1, Node *head2) {
        struct Node *new_node;
        
         if(head1->data>=head2->data)
             {
                 new_node=new Node(head2->data);
                 head2=head2->next;
             }
             else
             {
                 new_node=new Node(head1->data);
                 head1=head1->next;
             }
               struct Node *temp;
               temp=new_node;
         while(head1!=NULL&&head2!=NULL)
         {
             if(head1->data>=head2->data)
             {
                  temp->next=new Node(head2->data);
                  temp=temp->next;
                 head2=head2->next;
             }
             else
             {
                   temp->next=new Node(head1->data);
                   temp=temp->next;
                 head1=head1->next;
             }
         }
         while(head1!=NULL)
         {
           temp->next=new Node(head1->data);
           temp=temp->next;
           head1=head1->next;
             
         }
         while(head2!=NULL)
         {
           temp->next=new Node(head2->data);
           temp=temp->next;
           head2=head2->next; 
         }
        struct Node *curr=new_node;
        struct Node *prev=NULL;
        struct Node *next=NULL;
        while(curr!=NULL)
        {
           
            next=curr->next;
            curr->next=prev;
             prev=curr;
            curr=next;
        }
        new_node=prev;
        return new_node;
         
    }
};


//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n1, n2, tmp;
        Node *head1 = nullptr, *tail1 = nullptr;
        Node *head2 = nullptr, *tail2 = nullptr;
        string input1, input2;

        getline(cin, input1); // Read the entire line for LL1 elements
        stringstream ss1(input1);
        while (ss1 >> tmp) {
            Node *new_node = new Node(tmp);
            if (head1 == nullptr) {
                head1 = new_node;
                tail1 = new_node;
            } else {
                tail1->next = new_node;
                tail1 = new_node;
            }
        }

        getline(cin, input2); // Read the entire line for LL2 elements
        stringstream ss2(input2);
        while (ss2 >> tmp) {
            Node *new_node = new Node(tmp);
            if (head2 == nullptr) {
                head2 = new_node;
                tail2 = new_node;
            } else {
                tail2->next = new_node;
                tail2 = new_node;
            }
        }

        Solution obj;
        Node *result = obj.mergeResult(head1, head2);

        printList(result);
        // cout << endl;
    }
    return 0;
}

// } Driver Code Ends