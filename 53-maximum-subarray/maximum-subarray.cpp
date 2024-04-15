class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       // O(n2);

       // O(n);

        int currsum = 0;
        int maxisum = INT_MIN;
        int n = nums.size();


        for(int i=0;i<n;i++){
           
           currsum = currsum + nums[i];


           if(currsum>maxisum)
           maxisum = currsum;

           if(currsum<0)
           currsum = 0;

        }
        return maxisum;
    }
};