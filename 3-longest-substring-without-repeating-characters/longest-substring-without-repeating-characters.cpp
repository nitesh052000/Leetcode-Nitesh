class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          
          int i = 0;
          int j = 0; 
          int n = s.length();

          int longest = 0;

          map<char,int>mp;

          while(j<n){
           
           char ch = s[j];

           mp[ch]++;

           if(mp.size()==j-i+1){
            longest = max(longest,j-i+1);
           }
           else{
             
             while(j-i+1>mp.size()){
                 mp[s[i]]--;

                 if(mp[s[i]]==0){
                    mp.erase(s[i]);
                 }
                 i++;
             }

           }
           j++;
            
          }
          return longest;
    }
};