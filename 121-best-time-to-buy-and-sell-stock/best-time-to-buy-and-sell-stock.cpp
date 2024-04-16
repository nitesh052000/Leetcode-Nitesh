class Solution {
public:

    int  solve(vector<int>&prices,bool buy,int idx,int k,vector<vector<int>>&dp){
          
          if(idx>=prices.size()|| k<=0)
          return 0;

          if(dp[idx][buy]!=-1)
          return dp[idx][buy];

          if(buy){
            return dp[idx][buy] =  max(-prices[idx]+solve(prices,!buy,idx+1,k,dp),solve(prices,buy,idx+1,k,dp));
          }
          else{
           return dp[idx][buy] =  max(prices[idx]+solve(prices,!buy,idx+1,k-1,dp),solve(prices,buy,idx+1,k,dp));
          }

     }

    int maxProfit(vector<int>& prices) {
          
          int n = prices.size();

          vector<vector<int>>dp(n+1,vector<int>(2,-1));
          return solve(prices,1,0,1,dp);
    }
};