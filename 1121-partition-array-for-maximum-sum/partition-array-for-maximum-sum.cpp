class Solution {
public:

  int t[501];

  int solve(int idx,vector<int>&nums,int n,int k){
        
        if(idx>=n){
            return 0;
        }
        if(t[idx]!=-1)
        return t[idx];

        int currmax = -1;
        int result = 0;
    
      for(int j=idx;j<n && j-idx+1<=k;j++){
           
           currmax = max(currmax,nums[j]);
           result =  max(result,(j-idx+1)*currmax + solve(j+1,nums,n,k));
          
      }
     return t[idx] =  result;

  }


    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        
        int n = arr.size();
        memset(t,-1,sizeof(t));
       return solve(0,arr,n,k);
    }
};