class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          
          set<vector<int>>s;
          int n = nums.size();
          vector<vector<int>>final;
          
          sort(nums.begin(),nums.end());

          for(int i=0;i<=n-4;i++){

            for(int j=i+1;j<=n-3;j++){

               
                  int x = j+1;
                  int y = n-1;

                  vector<int>ans;

                  while(x<y){

                       long long num = static_cast<long long>(nums[x]) + nums[y] + nums[i] + nums[j];

                      if(num==target){
                        ans.push_back(nums[i]);
                         ans.push_back(nums[j]);
                          ans.push_back(nums[x]);
                           ans.push_back(nums[y]);

                           s.insert(ans);

                           ans.resize(0);
                            x++;
                            y--;
                      }
                      else if(num<target){
                         x++;
                      }
                      else
                      y--;
                  }

            }
          }
        
          for(auto it:s){
             final.push_back(it);
          }


    return final;
    }
};