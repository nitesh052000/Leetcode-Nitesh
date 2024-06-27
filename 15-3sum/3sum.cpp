class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            
            int  n = nums.size();
            sort(nums.begin(),nums.end());
            vector<vector<int>>ans;

            for(int i=0;i<n;i++){

                 if(i>0 &&  nums[i]==nums[i-1]){
                        continue;
                    }
                  
                  int l = i+1;
                  int r = n-1;
                   int tt = 0;
                 
                    
                   
                  while(l<r){

                    tt = nums[i]+nums[l]+nums[r];

                   if(tt>0){
                    r--;
                   }
                   else if(tt<0){
                    l++;
                   }
                   else{
                      vector<int>triplet = {nums[i],nums[l],nums[r]};
                      ans.push_back(triplet);

                      int lastlow = nums[l];
                      int lasthigh = nums[r];
                        
                        while(l<r && nums[l]==lastlow){
                            l++;
                        }
                        while(l<r && nums[r]==lasthigh)
                        r--;
                    }

                  }
            }
            return ans;
    }
};