class Solution {
public:

    int delrow[4] = {-1,0,1,0};
    int delcol[4] = {0,1,0,-1};
   
     void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>& grid,int n,int m)
     {  
         
         vis[row][col] =1;
         queue<pair<int,int>>pq;
         pq.push({row,col});

         while(!pq.empty()){

            int row = pq.front().first;
            int col = pq.front().second;
            pq.pop();

            for(int i=0;i<4;i++){

                int newrow = row + delrow[i];
                int newcol = col + delcol[i];

                if(newrow<n && newrow>=0 && newcol>=0 && newcol<m && grid[newrow][newcol]=='1' && !vis[newrow][newcol]){
                    vis[newrow][newcol] = 1;
                     pq.push({newrow,newcol});
                }
            }   

        }
     }


    int numIslands(vector<vector<char>>& grid) {
             
            int n = grid.size();
            int m = grid[0].size();
            int cnt =0;

            vector<vector<int>>vis(n,vector<int>(m,0));

             for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                   
                   if(grid[i][j]=='1' && vis[i][j]==0){
                    dfs(i,j,vis,grid,n,m);
                    cnt++;
                   }
                    
                }
             }
             return cnt;
    }
};