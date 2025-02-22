//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
      void reverseArrayHelper(vector<int>& arr, int s, int e) {
        if (s >= e) return; // Base case: when start crosses end
    
        swap(arr[s], arr[e]); // Swap elements
        reverseArrayHelper(arr, s + 1, e - 1); // Recursive call with updated indices
        }
        
        void reverseArray(vector<int>& arr) {
            reverseArrayHelper(arr, 0, arr.size() - 1); // Call the helper function
        }






//     void reverseArray(vector<int> &arr,int s, int e) {
//         // code here
        
        
        
        
        
//         // int n = arr.size();
//         // s =0 , e = (n-1);
        
//         // if(s>=e) return;
//         // swap(arr[s],arr[e]);
//         // reverseArray(arr,s+1, e-1);
        
//     }
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
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends