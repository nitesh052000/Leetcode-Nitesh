class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        map<int,int>mp;
        int n = nums.size();
        int maxi = INT_MIN;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
             maxi = max(maxi,it.second);
        }
         int cnt = 0;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==maxi)
            cnt++;
        }
        return cnt;
    }
};