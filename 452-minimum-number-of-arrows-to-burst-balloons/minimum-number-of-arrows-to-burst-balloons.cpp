class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
         
           sort(points.begin(),points.end());

         int n = points.size();
         vector<int>prev = points[0];
         int cnt = 1;
         
         for(int i=1;i<n;i++){
            int currstart = points[i][0];
            int currend = points[i][1];

            int prevstart = prev[0];
            int prevend = prev[1];

            
            if(currstart>prevend){
                cnt++;
                prev = points[i];
            }
            else{
                prev[0] = max(prevstart,currstart);
                prev[1] = min(prevend,currend);
            }

         }
         return cnt;
    }
};