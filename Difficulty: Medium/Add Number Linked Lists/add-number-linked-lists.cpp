//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) 
    {
         struct Node * temp=NULL;
         struct Node * temp1=num1;
         struct Node * temp2;
         
           while(temp1!=NULL)
           {  
             temp2=temp1;
             temp1=temp1->next;
             temp2->next=temp;
             temp=temp2;
          
           }
           num1=temp2;
           temp1=num2;
           temp=NULL;
            while(temp1!=NULL)
           {  
             temp2=temp1;
             temp1=temp1->next;
             temp2->next=temp;
             temp=temp2;
          
           }
           num2=temp2;
           
            
            temp1=num1;
            temp2=num2;
            temp=NULL;
            int carry=0;
              while(temp1!=NULL&&temp2!=NULL)
              {
                  int k=temp1->data+temp2->data;
                 struct Node *new_node=new Node((k+carry)%10);
                 new_node->next=temp;
                 temp=new_node;
                   carry=(k+carry)/10;
                    temp1=temp1->next;
                    temp2=temp2->next;
              }
              while(temp1!=NULL)
              {
                  int k=temp1->data;
                 struct Node *new_node=new Node((k+carry)%10);
                 new_node->next=temp;
                 temp=new_node;
                   carry=(k+carry)/10;
                    temp1=temp1->next;
              }
               while(temp2!=NULL)
              {
                  int k=temp2->data;
                 struct Node *new_node=new Node((k+carry)%10);
                 new_node->next=temp;
                 temp=new_node;
                   carry=(k+carry)/10;
                    temp2=temp2->next;
              }
             
              if(carry!=0)
              {
                 struct Node *new_node=new Node(carry);
                 new_node->next=temp;
                 temp=new_node;
              }     
        
         return temp;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends