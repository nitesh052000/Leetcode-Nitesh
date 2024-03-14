class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
         int pre = 0;
         map<int,int>mp;
         mp[0] = 1;
         int n = nums.size();
         int cnt = 0;

         for(int i=0;i<n;i++){

          pre = pre + nums[i];
          int r = pre-goal;
          if(mp.find(r)!=mp.end()){
             cnt = cnt + mp[r];
          }
          mp[pre]+=1;  
      }
      return cnt;
    }
};
