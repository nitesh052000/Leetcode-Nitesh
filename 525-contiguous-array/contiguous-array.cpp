class Solution {
public:
    int findMaxLength(vector<int>& nums) {

         int n = nums.size();
         map<int,int>mp;
         int pre = 0;
         mp[0] = -1;
         int len = 0;
        
         for(int i=0;i<n;i++){
           
           if(nums[i]==0){
            pre = pre -1;
           }
           else
           pre = pre + nums[i];

            
           if(mp.find(pre)!=mp.end()){
             len  = max(len,i-mp[pre]);
           }
           else
           mp[pre] = i;

         }
         return len;
    }
};