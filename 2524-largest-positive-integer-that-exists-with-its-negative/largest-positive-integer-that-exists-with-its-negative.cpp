class Solution {
public:
    int findMaxK(vector<int>& nums) {
         
          map<int,int>mp;
          int maxi = -1;

          for(auto it :nums){
               mp[it]++;
          }

          for(int i=0;i<nums.size();i++){
             
             if(nums[i]>0){
                 int x = -nums[i];

                 if(mp.find(x)!=mp.end()){
                   maxi = max(maxi,nums[i]);
                 }
             }
          }
          return maxi;
    }
};