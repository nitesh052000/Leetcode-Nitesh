class Solution {
public:

     int cnt = 0;
     int dfs(int m,int n,int row,int col,vector<vector<int>>&dp){

          if(row>n || col>m)
          return 0;

          if(row==n-1 && col==m-1)
          return 1;

          if(dp[row][col]!=-1)
          return dp[row][col];

          int left = dfs(m,n,row+1,col,dp);
          int right = dfs(m,n,row,col+1,dp);

          return dp[row][col]=left+right;

     }

    int uniquePaths(int m, int n) {
         
         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));

         return dfs(m,n,0,0,dp);
    }
};