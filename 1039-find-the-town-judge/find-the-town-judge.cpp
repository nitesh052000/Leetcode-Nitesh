class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        map<int,int>mp;
        int cnt = 0;

        for(int i=1;i<=n;i++){
            mp[i] = 0;
        }

        for(int i=0;i<trust.size();i++){
            mp[trust[i][0]]++;
        }

        for(auto it:mp){
            if(it.second==0){
                cnt = it.first;
                break;
            }
           
        }

        for(int i=0;i<trust.size();i++){
            if(trust[i][1]==cnt)
            mp[cnt]++;
        }
        if(mp[cnt]==n-1)
        return cnt;
        
        return -1;
    }
};