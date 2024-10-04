//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class LinkedList {
    // Function to print nodes in a given circular linked list
    static void printList(Node head) {
        if (head == null) {
            System.out.println("empty");
            return;
        }
        Node temp = head;
        do {
            System.out.print(temp.data + " ");
            temp = temp.next;
        } while (temp != head);
        System.out.println();
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            List<Integer> arr = new ArrayList<>();
            String input = br.readLine();
            StringTokenizer st = new StringTokenizer(input);
            while (st.hasMoreTokens()) {
                arr.add(Integer.parseInt(st.nextToken()));
            }
            int key = Integer.parseInt(br.readLine());
            Node head = new Node(arr.get(0));
            Node tail = head;
            for (int i = 1; i < arr.size(); ++i) {
                tail.next = new Node(arr.get(i));
                tail = tail.next;
            }
            tail.next = head; // Make the list circular
            Solution ob = new Solution();
            Node current = ob.deleteNode(head, key);
            Node rev = ob.reverse(current);
            printList(rev);
        }
    }
}

// } Driver Code Ends


/*class Node
{
    int data;
    Node next;
    Node(int d)
    {
        data=d;next=null;
    }
}*/

class Solution {
     Node reverse(Node head) {
        // code here
        if(head==null){
            return head;
        }
        Node prev=null;
        Node cur=head;
        Node nex=head;
        
        do{
            nex=cur.next;
            cur.next=prev;
            prev=cur;
            cur=nex;
        }while(cur!=head);
        
        head.next=prev;
        return head=prev;
    }

    // Function to delete a node from the circular linked list
    Node deleteNode(Node head, int key) {
        // code here
        if(head==null){
            return head;
        }
        // if(head.data==key){
        //     return head=null;
        // }
        Node prev=null;
        Node cur=head;
        
        do{
            if(cur.data==key){
                if(prev==null){
                    Node temp=head;
                    do{
                        temp=temp.next;
                    }while(temp.next!=head);
                    temp.next=head.next;
                    return head=head.next;
                }else{
                    prev.next=cur.next;
                    return head;
                }
            }
            prev=cur;
            cur=cur.next;
        }while(cur!=head);
        return head;
    }



}