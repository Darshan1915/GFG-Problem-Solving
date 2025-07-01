// class Solution {
//   public:
//     int knapsack(int W, vector<int> &val, vector<int> &wt) {
//         // code here
        
//     }
// };

class Solution {
  public:
  
  
    int ans(int ind,int W,vector<int>& val,vector<int>& wt,vector<vector<int>>& dp){
        if(ind==0){
            if(wt[0]<=W)
                return val[0];
            return 0;
        }
        
        if(dp[ind][W]!=-1)
            return dp[ind][W];
        int nt = ans(ind-1,W,val,wt,dp);
        int t = 0;
        
        if(wt[ind]<=W)
            t = val[ind] +ans(ind-1,W-wt[ind],val,wt,dp);
        
        dp[ind][W] = max(t,nt);
        return dp[ind][W];
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        
        int n = val.size();
        
        vector<vector<int>>dp(n,vector<int>(W+1,-1));
        return ans(n-1,W,val,wt,dp);
        
    }
};