class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        map<int,int>mp;
        vector<vector<int>>ans;
        vector<int>res;
     
       for(auto it:nums){
           mp[it]++;
       }
       
       int largest = INT_MIN;

       for(auto it : mp){
          largest = max(largest,it.second);
       }

       while(largest>0){

        for(auto it:mp){

            if(it.second>0){
                res.push_back(it.first);
                mp[it.first]--;
            } 
         }
        
          ans.push_back(res);
          res.resize(0);
          largest--;
       }
       return ans;
        
    }
};