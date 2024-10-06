//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/*class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        
        Node* head= NULL;
        //   Node* head=  new Node(arr[0]);
        Node* tail = NULL;
        //   Node* tail= head;
        
           for (int i=0; i<arr.size(); i++){
               Node *n = new Node(arr[i]); // Create a new node with value 'x'.

            // If the list is empty (head and tail are NULL):
            if(head == NULL && tail == NULL)
            {
                head = n; // The new node becomes the head (first node).
                tail = n; // The new node also becomes the tail (last node).
            }
            else
            {
                tail->next = n; // Link the current tail's 'next' to the new node.
                tail = n; // Update the tail to the new node (now it's the last node in the list).
            }
              
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
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        Node* ans = ob.constructLL(arr);
        while (ans) {
            cout << ans->data << " ";
            ans = ans->next;
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends