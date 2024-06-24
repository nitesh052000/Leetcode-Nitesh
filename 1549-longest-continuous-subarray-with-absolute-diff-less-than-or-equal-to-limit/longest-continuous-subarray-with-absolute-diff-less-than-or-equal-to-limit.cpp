class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
          
        //   int n = nums.size();
          
        //    int maxi, mini;
          
        //   int ans = 0;

        //  for(int i=0;i<n;i++){
               
        //        maxi = nums[i];
        //        mini = nums[i];

        //     for(int j=i;j<n;j++){
                 
        //           maxi = max(maxi,nums[j]);
        //           mini = min(mini,nums[j]);

        //           if(abs(maxi-mini)<=limit){
        //             ans = max(ans,j-i+1);
        //           }
        //     }
        //  }
        //  return ans;

        // Brute force approch 

        // sliding windpow approch  
       

        int i =0 , j =0;
        int ans = 0;

        int n = nums.size();
         
         multiset<int>st;

        while(j<n){
            
            st.insert(nums[j]);

            while(*st.rbegin()-*st.begin()>limit){
                
                st.erase(st.find(nums[i]));
                i++;
            }

          ans = max(ans,j-i+1);
          j++;
             
        }
        return ans;
    }
};