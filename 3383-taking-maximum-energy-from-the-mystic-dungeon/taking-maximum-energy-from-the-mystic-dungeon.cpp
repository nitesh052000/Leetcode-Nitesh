class Solution {
public:
 
      int solve(vector<int>&ener,int idx,int k,vector<int>&memo){
           
           if(idx>=ener.size()){
            return 0;
           }

           if(memo[idx]!=-1)
           return memo[idx];
         
         int ans = ener[idx]+solve(ener,idx+k,k,memo);

         return memo[idx] =  ans;

      }

    int maximumEnergy(vector<int>& energy, int k) {
         
        int   maxi = INT_MIN;
         int  sum = 0;
         int n = energy.size();

         vector<int>memo(n+1,-1);
        
         for(int i= 0;i<n;i++){
            maxi = max(maxi,solve(energy,i,k,memo));
         }
        return maxi;
    }
};