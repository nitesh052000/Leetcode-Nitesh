class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int zero = 0;
        int one = 0;
        int two = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            zero++;

            else if(nums[i]==1)
            one++;

            else
            two++;
        }

        // for(int i=0;i<zero;i++){
        //     nums[i] = 0;
        // }
        // for(int i=zero;i<one+zero;i++){
        //     nums[i] = 1;
        // }
        // for(int i=one+zero;i<two+one+zero;i++){
        //     nums[i] = 2;
        // }

        for(int i=0;i<nums.size();i++){

             if(zero>0){
                nums[i]=0;
                zero--;
             }
             else if(one>0){
                nums[i]=1;
                one--;
             }
             else{
                nums[i]=2;
             }

        }

    }
};