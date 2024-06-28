class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
        map<long long,long long>mp;
        priority_queue<pair<long long ,long long >>pq;

        for(int i=0;i<roads.size();i++){

            mp[roads[i][0]]++;
            mp[roads[i][1]]++;
        }
       
        for(auto it:mp){
               pair<long long ,long long >pp = {it.second,it.first};
               pq.push(pp);
        }
        
        long long  ans = 0;
        long long  k = n;
      while(!pq.empty()){
         ans+=pq.top().first*k;
         k--;
         pq.pop();
      }
      return ans;
                  
    }
};