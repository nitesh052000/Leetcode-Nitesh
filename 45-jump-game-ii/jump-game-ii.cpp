class Solution {
public:
    int jump(vector<int>& nums) {
        
        int further = nums[0];
        int steps = nums[0];
        int n = nums.size();
        int prev = 0;
        int cnt = 1;

        if(nums.size()==1)
        return 0;
         
        for(int i=1;i<n;i++){

            if(i==n-1)
            return cnt;

            further = max(further,i+nums[i]);
            steps--;

            if(steps==0){
                cnt++;
                steps = further-i; 
            }

               
        }
        return cnt;
    }
};