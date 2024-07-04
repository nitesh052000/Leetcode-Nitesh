class Solution {
public: 
   
   int solve(vector<vector<int>>& grid,int n, int m,int i,int j,vector<vector<int>>&dp){
     
       if(i==n-1 && j==m-1)
       return grid[i][j];

       if(dp[i][j]!=-1)
       return dp[i][j];

       if(i==n-1){
         return dp[i][j] =  grid[i][j] + solve(grid,n,m,i,j+1,dp);
       }

       else if(j==m-1){
        return dp[i][j] =  grid[i][j] + solve(grid,n,m,i+1,j,dp);
       }
       else{
            return dp[i][j] =  grid[i][j] + min(solve(grid,n,m,i+1,j,dp),solve(grid,n,m,i,j+1,dp));
       }
   }


    int minPathSum(vector<vector<int>>& grid) {
         

         
         int n = grid.size(); // rows
         int m = grid[0].size(); // colums

         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       
        return solve(grid,n,m,0,0,dp);

    }
};