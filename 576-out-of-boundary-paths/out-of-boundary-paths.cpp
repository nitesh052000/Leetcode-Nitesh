class Solution {
public:
  
       int dp[52][52][52];
        long long  mod = 1e9+7;

      int  solve(int m, int n, int maxmove, int row, int column){
                
            if((row<0 && maxmove>=0) || (row>=m && maxmove>=0) || (column<0 && maxmove>=0) || (column>=n && maxmove>=0)){
                return 1;
            }
            if(maxmove<0){
                return 0;
            }

            if(dp[row][column][maxmove]!=-1){
                return dp[row][column][maxmove];
            }


          int down =  solve(m,n,maxmove-1,row+1,column);
          int up = solve(m,n,maxmove-1,row-1,column);
           int left = solve(m,n,maxmove-1,row,column-1);
           int right =  solve(m,n,maxmove-1,row,column+1);
            
            
            return dp[row][column][maxmove] = (down%mod + up%mod + left%mod + right%mod)%mod;
      }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
         
          memset(dp,-1,sizeof(dp));
        return solve(m,n,maxMove,startRow,startColumn);
      
    }
};