class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
          
          vector<int>adj[n+1];
          int m = edges.size();

          vector<int>vis(n,0);

          for(int i=0;i<m;i++){
             adj[edges[i][0]].push_back(edges[i][1]);
             adj[edges[i][1]].push_back(edges[i][0]);
          }

          bool ans = false;

           queue<int>pq;
           pq.push(source);
           vis[source] = 1;

           while(!pq.empty()){

            int node = pq.front();
            pq.pop();

            

            if(node==destination){
                return true;
            }

            for(auto it:adj[node]){
                if(!vis[it])
                {
                    vis[it]=1;
                    pq.push(it);
                }
            }

           }

           return false;
    }
};