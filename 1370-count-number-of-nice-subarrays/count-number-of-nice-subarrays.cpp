class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         
         unordered_map<int,int>mp;

         int oddcnt = 0;
         int ans = 0;

         mp[oddcnt] = 1;


         for(int i=0;i<nums.size();i++){

            oddcnt+=(nums[i]%2);
            int r = oddcnt-k;

            if(mp.find(r)!=mp.end()){
                ans+= mp[r];
            }

            mp[oddcnt]++;
         }
         return ans;
    }
};