class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         
         int maxi = 0;
         int j =0;
         int i= 0;
         int cnt = 0;

          int n = nums.size();
          while(j<n){
              if(nums[j]==0)
              cnt++;

              if(cnt<k){
                  maxi = max(maxi,j-i+1);
                  j++;
              }
              else if(cnt==k){
                  maxi = max(maxi,j-i+1);
                  j++;
              }
              else{
                  if(nums[i]==0)
                  {
                      cnt--;
                  }
                  i++;
                  j++;

              }
          }
          return maxi;
    }
};