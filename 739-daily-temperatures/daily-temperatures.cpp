class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>s;
         int n = temp.size();
         vector<int>ans;

        for(int i=n-1;i>=0;i--){
             
             if(s.size()==0){
                 ans.push_back(0);
             }

             else{
 
              while(!s.empty() && s.top().first<=temp[i])
              s.pop();
                
                if(s.empty()){
                  ans.push_back(0);
                }else{
                     ans.push_back(abs(i-s.top().second));
                }
           
                
             }
             s.push({temp[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};