class Solution {
public:
    int majorityElement(vector<int>& nums) {
         
         int cnt = 0;
         int ele = 0;
         int n = nums.size();

         for(int i=0;i<n;i++){

            if(cnt==0){
            ele = nums[i];
             cnt=1;
            }
            else if(ele==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }   

         }
         cnt = 0;
         for(int i=0;i<n;i++){
            if(nums[i]==ele)
            cnt++;
         }

         if(cnt>n/2)
         return ele;

         return -1;
    }
};