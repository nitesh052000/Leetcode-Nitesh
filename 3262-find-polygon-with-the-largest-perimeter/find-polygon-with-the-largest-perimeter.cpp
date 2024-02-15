class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        long long  maxi = 0;
        long long currsum = 0;
        int n = nums.size();
        
      for(int i=0;i<n;i++){
        if(nums[i]<currsum){
             maxi = currsum + nums[i];
        }
        currsum = currsum+nums[i];
       
      }
        return maxi==0?-1:maxi;
    }
};