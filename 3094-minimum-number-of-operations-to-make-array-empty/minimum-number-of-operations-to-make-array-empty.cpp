class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        int cnt = 0;

        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second==1)
            return -1;

        }

        for(auto it:mp){
         
            if(it.second%3==0){
                cnt = cnt + it.second/3;
            }
            else{
                 
                 while(it.second>0){

                  if(it.second%3==0){
                      cnt = cnt + it.second/3;
                      it.second = 0;
                  }
                  else{
                      cnt = cnt + 1;
                      it.second = it.second - 2;
                  }

                 }
            }
            
        }
        return cnt;
    }
};