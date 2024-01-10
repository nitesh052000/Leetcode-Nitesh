class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

         map<string,vector<string>>mp;
         vector<vector<string>>ans;

         vector<string>res = strs;

         

        for(int i=0;i<strs.size();i++){
            
            sort(strs[i].begin(),strs[i].end());

        }
     
        for(int i=0;i<strs.size();i++){
          mp[strs[i]].push_back(res[i]);
        }

        for(auto it:mp){
            ans.push_back(it.second);
        }

     return ans;
    }
};