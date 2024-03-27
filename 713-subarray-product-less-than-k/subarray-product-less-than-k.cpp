class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         
         int cnt = 0;
         int pro = 1;
         int i =0,j=0;

         int n = nums.size();

         if(k<=1)
         return 0;

         while(j<n){
         
          pro = pro*nums[j];

          while(pro>=k){
             pro = pro/nums[i];
             i++;
          }
          cnt += j-i+1;
            j++;
         }
    return cnt;  
    }
};