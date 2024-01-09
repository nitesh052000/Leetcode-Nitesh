class Solution {
public:
    bool canJump(vector<int>& nums) {
        int first = nums[0];
       int further = 0;

      for(int i=0;i<nums.size();i++){
       
       if(i>further)
       return false;

       further = max(further,i+nums[i]);
           
      }
        return true;
    }
};