class Solution {
public:
  
  int solve(vector<vector<int>>&dp,vector<int>&nums,int prev,int curr){
     
     if(curr>=nums.size())
     return 0;

     if(dp[curr][prev+1]!=-1)
     return dp[curr][prev+1];
      

     int take=0;

     if(prev==-1 || nums[curr]>nums[prev]){
        take = 1 + solve(dp,nums,curr,curr+1);
     }

     int nottake = solve(dp,nums,prev,curr+1);

     return dp[curr][prev+1] =  max(take,nottake);
  }




    int lengthOfLIS(vector<int>& nums) {
         
         int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));

        return solve(dp,nums,-1,0);
    }
};