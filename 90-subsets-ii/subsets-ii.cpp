class Solution {
public:
    void solve(int idx,vector<int>nums,vector<int>ans, vector<vector<int>>&niks)
    {
      
      niks.push_back(ans);

      for(int i=idx;i<nums.size();i++){

        if(i!=idx && nums[i-1]==nums[i])
        continue;
        ans.push_back(nums[i]);
        solve(i+1,nums,ans,niks);
        ans.pop_back();
      }

    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          
          vector<int>ans;
          vector<vector<int>>niks;
          sort(nums.begin(),nums.end());
          solve(0,nums,ans,niks);
          return niks;
    }
};