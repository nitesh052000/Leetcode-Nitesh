class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
             vector<int>nums1;
             vector<int>nums2;
             int n = nums.size();

             for(int i=0;i<n;i++){
                 if(nums[i]<0)
                 nums1.push_back(nums[i]);
             }

             for(int i=0;i<n;i++){
                 if(nums[i]>0)
                 nums2.push_back(nums[i]);
             }
             int cnt = 0;

           for(int i=0;i<n;i=i+2){
                nums[i] = nums2[cnt];
                nums[i+1] = nums1[cnt];
                cnt++;
           }
           return nums;
             
    }
};