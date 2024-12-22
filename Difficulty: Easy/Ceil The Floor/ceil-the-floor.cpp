//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        
        
        // Ensure the array is sorted
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        int floor = -1, ceil = -1; // Default values when no floor or ceil exists
        
        int low = 0, high = n - 1;
        
        // Find floor
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= x) {
                floor = arr[mid]; // Update floor
                low = mid + 1;    // Move right to find a closer floor
            } else {
                high = mid - 1;   // Move left
            }
        }
        
        low = 0;
        high = n - 1;
        
        // Find ceil
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= x) {
                ceil = arr[mid]; // Update ceil
                high = mid - 1;  // Move left to find a closer ceil
            } else {
                low = mid + 1;   // Move right
            }
        }
        
        return {floor, ceil};
        
        
        
        
        
        
        
        
        
        
        
        // int n = arr.size();
        // int low =0,high = (n-1);
        
        // vector<int>ans;
        
        
        // while(low<=high){
        //     int mid = (low+high)/2;
            
        //     if(arr[mid]<=x){
        //         // ans = mid;
        //         ans.push_back(arr[mid]);
        //         low = mid + 1;
        //     }
        //     else{
        //         high = mid-1;
        //     }
        // }
        
        // while(low<=high){
        //     int mid = (low+high)/2;
            
        //     if(arr[mid]>=x){
        //         // ans = mid;
        //         ans.push_back(arr[mid]);
        //         high = mid -1;
        //     }
        //     else{
        //         low = mid+1;
        //     }
        // }
        
        // return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends