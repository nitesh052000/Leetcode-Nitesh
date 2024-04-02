class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length()!=t.length())
        return false;
          
         map<char,int>mp1;
         map<char,int>mp2;

         for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
         }

         for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
         }

         for(int i=1;i<s.length();i++){

            if(mp1[s[i]]!=mp2[t[i]])
            return false;

            else{
               if(s[i]!=s[i-1] && t[i]!=t[i-1] || s[i]==s[i-1] && t[i]==t[i-1])
               continue;
               else
               return false;
            }
         }
         
         return true;
    }
};