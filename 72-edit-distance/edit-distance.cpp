class Solution {
public: 
  
    int solve(string s1,string s2,int i,int j,int n,int m,vector<vector<int>>&dp){
             
             // abc  ab
             if(j==m){
                   return n-i;
             }
             if(i==n){
                return m-j;
             }

             if(dp[i][j]!=-1)
             return dp[i][j];
        
           if(s1[i]==s2[j]){
                 return solve(s1,s2,i+1,j+1,n,m,dp);
           } 

           int insert = 1 + solve(s1,s2,i,j+1,n,m,dp);
           int delet = 1 + solve(s1,s2,i+1,j,n,m,dp);
           int replace = 1 + solve(s1,s2,i+1,j+1,n,m,dp);

           return dp[i][j] =  min({insert,delet,replace});

    }


    int minDistance(string word1, string word2) {
           
           int n = word1.length();
           int m  = word2.length();

           vector<vector<int>>dp(n+1,vector<int>(m+1,-1));

           return solve(word1,word2,0,0,n,m,dp);
    }
};