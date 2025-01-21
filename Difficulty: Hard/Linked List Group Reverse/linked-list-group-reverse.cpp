//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
             if(head==nullptr){
            return 0;
        }
        vector<int> result;
        Node *current=head;
        while(current!=nullptr){
            result.push_back(current->data);
            current=current->next;
        }
        vector<int> result1;
        int q=result.size()/k;
        for(int i=1;i<=q;i++){
            for(int j=i*k-1;j>=(i*k-1)-(k-1);j--){
                result1.push_back(result[j]);
            }
        }
        int y=result.size()%k;
        int z=result.size()-1;
        for(int i=1;i<=y;i++){
            result1.push_back(result[z]);
            z--;
        }
        Node *sortedHead=new Node(result1[0]);
        Node *mover=sortedHead;
        for(int i=1;i<result1.size();i++){
            Node *temp=new Node(result1[i]);
            mover->next=temp;
            mover=mover->next;
        }
        mover->next=nullptr;
        return sortedHead;;
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

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
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends