class Solution {
public:
      int t[31][1001];
      int mod = 1e9+7;
      
  int solve(int n,int k,int tgt){


       if(tgt<0)
       return 0;

       if(n==0){
           if(tgt==0)
           return 1;
           else
           return 0;
       }
        if(t[n][tgt]!=-1)
        return t[n][tgt];

         int ways = 0;

       for(int i = 1;i<=k;i++){
          ways = (ways + solve(n-1,k,tgt-i))%mod;
       }

      return t[n][tgt] = ways;

  }

    int numRollsToTarget(int n, int k, int target) {

        memset(t,-1,sizeof(t));
        return solve(n,k,target);
    }
};