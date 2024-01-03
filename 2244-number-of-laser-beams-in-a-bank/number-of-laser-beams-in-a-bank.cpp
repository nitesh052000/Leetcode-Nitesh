class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       
       int result = 0;
       int prev = 0;
       int n = bank.size();
       int m = bank[0].size();

       for(int i=0;i<n;i++){
              
              int cnt = 0;

              for(int j=0;j<m;j++){
                  if(bank[i][j]=='1')
                  cnt++;
              }

              result = result  + cnt*prev;
         
         if(cnt!=0){
          prev = cnt;
         }

        }
     return result;
       
    }
};