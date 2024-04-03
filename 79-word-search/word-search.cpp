class Solution {
public: 

    int roww[4] = {-1,0,1,0};
    int coll[4] = {0,1,0,-1}; 

    // vector<vector<int>>dir{{-1,0},{0,1},{1,0},{0,-1}};


   bool dfs(int i,int j,string word,vector<vector<char>>& board,int idx,int n,int m){

       if(idx==word.length())
       return true;

       if(i<0 || j<0 || j>=m || i>=n || board[i][j]=='$')
       return false;

       if(board[i][j]!=word[idx])
       return false;
     
        char temp = board[i][j];
        board[i][j] = '$';

       for(int  k=0;k<4;k++){
         
         int newi = i+ roww[k];
         int newj = j+ coll[k];

         if(dfs(newi,newj,word,board,idx+1,n,m))
         return true;
        
        } 
       board[i][j] = temp;  
       return false;
   
   } 

    bool exist(vector<vector<char>>& board, string word) {
         
         int n = board.size();
         int m = board[0].size();

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 
                 if(board[i][j]==word[0] && dfs(i,j,word,board,0,n,m))
                 return true;  
            }
         }
         return false;
    }   
};