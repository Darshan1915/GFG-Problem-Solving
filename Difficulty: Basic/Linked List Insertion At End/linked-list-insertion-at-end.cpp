//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        
        // Node* head = NULL;
        // Node* Tail = NULL;
         
        // Node* temp = new Node (x);
    
        // if(head==NULL && Tail == NULL) {
        //     head = temp;
        //     Tail = temp;
        //     return head;
        // }
        
        // Tail -> next = temp;
        // Tail = temp;
        // return head;
        
        
        
        Node* temp = new Node(x);
        Node* Tail = head;
        
        if(head == NULL){
            
            return temp;
        }
        
        while(Tail->next != NULL){
            
            Tail = Tail->next;
            
        }
        Tail->next = temp;
        
        return head;
        
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

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        int x;
        cin >> x;
        cin.ignore();

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }

        Solution ob;
        Node* ans = ob.insertAtEnd(head, x);
        printList(ans);
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends