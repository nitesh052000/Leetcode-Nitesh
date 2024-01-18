class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          
          map<char,int>mp;
          int j = 0;
          int i = 0;
          int maxi = 0;
          int n = s.length();

           while(j<n){
            mp[s[j]]++;

           if(mp.size()==j-i+1){    
               maxi = max(maxi,j-i+1);
               j++;
           }
           else{
             while(mp.size()<j-i+1){
                 mp[s[i]]--;
                 if(mp[s[i]]==0)
                 mp.erase(s[i]);
                 i++;
             }
               j++;
            }

          }
          return maxi;
    }
};