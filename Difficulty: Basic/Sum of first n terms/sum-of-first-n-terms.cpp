//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
   long s=0;
   long sumOfSeries(long n) {
        if(n==0)
        return 0;
        return ((n*n*n)+sumOfSeries(--n));
    }
        
  
  
//   long count =0;
//   long result = 0;
//     long long sumOfSeries(long long n) {
//         // code here
//         count = n--;
//         if(count>0){
//             result = result +  (count*count*count);
//             sumOfSeries(n);
//         }
//         return result;
//     }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends