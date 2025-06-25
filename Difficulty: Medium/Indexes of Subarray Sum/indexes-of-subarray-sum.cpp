class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector<int> ans;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            int ans1 = 0;  
            for (int j = i; j < n; j++) {
                ans1 = ans1 + arr[j];

                if (ans1 > target) {
                    break;
                }

                if (ans1 == target) {
                    ans = {i + 1, j + 1};  
                    return ans;
                }
            }
        }

        return {-1};
    }
};
