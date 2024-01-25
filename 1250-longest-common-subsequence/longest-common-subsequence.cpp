class Solution {
public:
 
//    int solve(string text1 , string text2,int j,int i,vector<vector<int>>&dp){
       
//         if(j>=text1.length() || i>=text2.length()){
//             return 0;
//         }

//         if(dp[j][i]!=-1)
//         return dp[j][i];

//         int take = 0;
//         int nottake = 0;    
     
//        if(text1[n-1]==text2[m-1]){
//           t[n][m] = 1 + t[n-1][m-1];
//        }
//        else{
//        nottake = max(solve(text1,text2,j+1,i,dp) ,solve(text1,text2,j,i+1,dp));

//        }
//      return dp[j][i] = max(take,nottake);

//    }



    int longestCommonSubsequence(string text1, string text2) {
             int n = text1.length();
             int m = text2.length();

          int t[n+1][m+1];

          for(int i=0;i<=n;i++){
              for(int j=0;j<=m;j++){
                  if(i==0 || j==0){
                      t[i][j]=0;
                  }
              }
          }
             
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
               if(text1[i-1]==text2[j-1]){
                   t[i][j] = 1 + t[i-1][j-1];
               }
               else{
                   t[i][j] = max(t[i-1][j],t[i][j-1]);
               }
            }
        }
    return t[n][m];
                    
        
    }
};