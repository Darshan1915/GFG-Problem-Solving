//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int count;
    void printNos(int N) {
        // code here
        count = N--;
        if(count<1) return;
        cout<<count<<" ";
        printNos(N);
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends