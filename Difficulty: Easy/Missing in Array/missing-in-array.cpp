//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        
        
        // // Calculate the sum of the first n natural numbers
        // int b=0;
        // int a=arr.size()+1;
        //  b=a*(a+1)/2;
        //   int ans=0;
        //   for(int i=0;i<arr.size();i++){
        //       ans=ans+arr[i];
        //   }
        //   return b-ans;
          
         int sum=0;
        int second=0;
       for(int i=0;i<=(arr.size()+1);i++)
        sum=sum+i;
       for (int i=0;i<arr.size();i++)
        second=second+arr[i];
        return (sum-second);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends