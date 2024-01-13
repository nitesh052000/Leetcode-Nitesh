class Solution {
public:
    int minSteps(string s, string t) {
        
        map<char,int>mp1;
         map<int,int>mp2;
        int n = s.length();
        int cnt = 0;

        for(int i=0;i<n;i++){
            mp1[t[i]]++;
        }
        for(int i=0;i<n;i++){
            mp2[s[i]]++;
        }
     
        for(auto it:mp2){
            int ele = it.first;
            int freq = it.second;

            if(freq>mp1[ele]){
                cnt = cnt + abs(freq-mp1[ele]);
            }
            else{
                continue;
            }
        }
        return cnt;
    }
};