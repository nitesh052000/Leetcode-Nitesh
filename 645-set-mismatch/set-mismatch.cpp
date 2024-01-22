class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
            
            vector<int>ans(2);
       long long n = nums.size();

        long long sn =  (n*(n+1))/2;
        long long s = 0;

        for(int i=0;i<n;i++){
            s = s + nums[i];
        }

         int diff1 = s-sn;

         long long s2n = (n*(n+1)*(2*n+1))/6;

         long long s2 = 0;

         for(int i=0;i<n;i++){

             s2 = s2 + nums[i]*nums[i];
         }

       int diff2 = s2-s2n;

            int res = diff2/diff1;

          int repe =  (res+diff1)/2;
          int miss = res-repe;
       
          ans[0] = repe;
          ans[1] = miss;

       return ans;
    }
};