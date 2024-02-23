class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

         
         vector<pair<int,int>>adj[n];
         int ans = INT_MAX;

         for(auto it:flights){
             adj[it[0]].push_back({it[1],it[2]});
         }

         queue<pair<int,pair<int,int>>>pq;
         pq.push({0,{src,0}});
         vector<int>dis(n,1e9);
         dis[src] = 0;

         while(!pq.empty()){
           
           auto it = pq.front();
           pq.pop();

           int stops = it.first;
           int node = it.second.first;
           int cost = it.second.second;

           if(stops>k){
               continue;
           }

           

           for(auto it:adj[node]){
               int adjNode = it.first;
               int edw = it.second;

               if(cost+edw<dis[adjNode] && stops<=k){
                   dis[adjNode] = cost+edw;
                   pq.push({stops+1,{adjNode,cost+edw}});
               }
           }
        

         }

         if(dis[dst]==1e9)
         return -1;

         return dis[dst];

    }
};