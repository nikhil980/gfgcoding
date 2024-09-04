//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*Linked list Node structure

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
     Node* sortedMerge(Node* head1, Node* head2) 
    {
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
         return new_node;
    }
      
    Node* mergeKLists(vector<Node*>& arr) 
    {
        if(arr.size()==1)
        {
           
            return arr[0];
           
        }
         struct Node *ans=NULL;
        ans=sortedMerge(arr[0],arr[1]);
         for(int i=2;i<arr.size();i++)
         {
             ans=sortedMerge(ans,arr[i]);
         }
         return ans;
    }
};


//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<Node*> arr;
        vector<int> nums;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            nums.push_back(number);
        }
        int ind = 0;
        int N = nums.size();

        while (ind < N) {
            int n = nums[ind++];
            int x = nums[ind++];
            Node* head = new Node(x);
            Node* curr = head;
            n--;

            for (int i = 0; i < n; i++) {
                x = nums[ind++];
                Node* temp = new Node(x);
                curr->next = temp;
                curr = temp;
            }
            arr.push_back(head);
        }

        Solution obj;
        Node* res = obj.mergeKLists(arr);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends