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
        // code here
        
        Node* head=  new Node(arr[0]);
        Node* tail= head;
        for (int i=1; i<arr.size(); i++){
            Node* temp= new Node(arr[i]);
            tail->next= temp;
            tail= temp;
           
        }
        return head;
        
        
        
        
        // Node* head = NULL;
        // Node* tail = NULL;
        // if(next == NULL){
        //     Node* temp = new node (arr[0]);
        //     head = temp;
        //     tail = temp;
        // }
        // for(int i=1; i<arr.size(); i++){
        //     int x= arr[i];
        //     Node* temp = new node (x);
        //     tail -> next = temp;
        //     tail = temp;
        // }
        // return head;
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
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends