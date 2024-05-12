class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
          
          int n = grid.size();
          int maxi = INT_MIN;

          vector<vector<int>>ans(n-2,vector<int>(n-2,0));
           
           for(int i=0;i<n-2;i++){

            for(int j=0;j<n-2;j++){
                   
                   for(int k = j;k<=j+2;k++){
                      
                      for(int r = i;r<=i+2;r++){
                        maxi = max(grid[r][k],maxi);
                      }
                  }

                  ans[i][j] = maxi;
                  maxi = 0;
 
             }

           }
        return ans;
    }
};