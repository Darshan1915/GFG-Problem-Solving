//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        // code here
        int count = 0;
        int temp = N;
        
        // Iterate through each digit of the number
        while (temp > 0) {
            int digit = temp % 10; // Get the last digit of the number
            
            // Check if the digit divides n evenly (also check if digit is not zero)
            if (digit != 0 && N % digit == 0) {
                count++;
            }
            
            temp = temp / 10; // Remove the last digit
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends