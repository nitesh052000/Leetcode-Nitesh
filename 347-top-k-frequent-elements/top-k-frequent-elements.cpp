class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int,int>mp;
         priority_queue<pair<int,int>>pq;
         vector<int>ans;

         for(auto it:nums){
            mp[it]++;
         }

         for(auto it:mp){
             pq.push({it.second,it.first});
         }

         for(int i=0;i<k;i++){
            pair<int,int>p = pq.top();
            pq.pop();
             ans.push_back(p.second);
         }
         return ans;
    }
};