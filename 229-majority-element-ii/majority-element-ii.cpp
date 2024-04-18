class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int>ans;
        int n = nums.size();
         sort(nums.begin(),nums.end());
         int cnt=1;

         if(n==1)
         return nums;

         for(int i=0;i<n-1;i++){
                
                if(nums[i]==nums[i+1]){
                    cnt++;
                }
                else{
                  
                  if(cnt>n/3)
                  ans.push_back(nums[i]);
                  cnt=1;

                }
         }

         if(cnt>n/3)
         ans.push_back(nums[n-1]);

         return ans;
    }
};