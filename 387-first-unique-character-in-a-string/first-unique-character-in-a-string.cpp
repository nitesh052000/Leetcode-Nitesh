class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp1;
        map<char,int>mp2;
        int mini = -1;

        for(int i=0;i<s.length();i++){
             char ch = s[i];
             mp1[ch]++;
             mp2[ch] = i;
        }
           
    for(auto it:mp1){
        if(it.second==1){
             if(mini==-1){
                 mini = mp2[it.first];
             } else{
                 if(mini>mp2[it.first])
                 mini = mp2[it.first];
             }
        }
    }
       return mini;
    }
};