class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
          
             
             int first = edges[0][0];
             int second = edges[0][1];


          for(int i=1;i<edges.size();i++){
              
              if(first==edges[i][0] || first==edges[i][1]){
                return first;
              }
              else if(second==edges[i][0] || second==edges[i][1]){
                return second;
              }

          }
          return -1;
    }
};