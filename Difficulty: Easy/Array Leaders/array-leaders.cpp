


class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        
        int maxFromRight = arr[n - 1];
        ans.push_back(maxFromRight);  // Last element is always a leader
        
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxFromRight) {
                maxFromRight = arr[i];
                ans.push_back(arr[i]);
            }
        }
        
        // Reverse to maintain left-to-right order
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
