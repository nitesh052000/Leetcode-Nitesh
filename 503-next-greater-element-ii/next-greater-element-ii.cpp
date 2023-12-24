class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

       int n = nums.size();

       vector<int>ans(2*n);
       
       
       for(int i=0;i<n;i++){
          ans[i] = nums[i];
       }

       for(int i=0;i<n;i++){
           ans[n+i] = nums[i]; 
       }

       
       for(int i=0;i<n;i++){
            int ele = nums[i];

           for(int j=1;j<n;j++){
               if(ele<ans[i+j]){
                   ele = ans[i+j];
                   break;
               }
           }
           if(ele==nums[i])
           nums[i] = -1;
           else
           nums[i] = ele;
       }  
       return nums; 
    }
};