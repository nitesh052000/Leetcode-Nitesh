class Solution {
public:
    
    static bool cmp(vector<int>&a , vector<int>&b){
         return a[1]<b[1];
     }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int n = intervals.size();

        int i = 0 , j =1;
          int cnt = 0;


          while(j<n){

           if(intervals[i][1]>intervals[j][0]){
              cnt++;
              j++;
           }
           else{
               i = j;
               j++;
           }

          }
          return cnt;
    }
};