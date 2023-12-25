class Solution {
public:
   int cnt = 0;

    int  solve(int idx , string s,vector<int>&dp){
       
       if(idx>=s.length()){
           return dp[idx]=1;
       }

        if(dp[idx]!=-1)
        return dp[idx];
       
        int result1 = 0,result2=0;

        if(s[idx]!='0')
          result1 = solve(idx+1,s,dp);
       
       if(idx+2<=s.length() && (s[idx]=='1' || (s[idx]=='2' && s[idx+1]<='6'))){
         result2 = solve(idx+2,s,dp);
       }
      
      return dp[idx] = result1+result2;

   }
  
   

    int numDecodings(string s) {
        
        if(s.length()==1){
            if(s[0]=='0')
            return 0;
        return 1;
        }
          
        vector<int>dp(101,-1);
          return solve(0,s,dp);
             
    }
};