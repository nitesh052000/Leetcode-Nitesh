class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>ans;
        int n = nums.size();

        for(int i=0;i<n;i++){
     
          int idx = abs(nums[i])-1;

          if(nums[idx]>0){
              nums[idx] = -nums[idx];
          }
          else{
              ans.push_back(abs(nums[i]));
          }

        }
        return ans;
    }
};