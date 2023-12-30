class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        map<char,int>mp;
        int n = words.size();

       for(int i=0;i<words.size();i++){
          string str = words[i];

          for(int i=0;i<str.length();i++){
              char ch = str[i];
              mp[ch]++;
          }
       }
   bool flag = true;
       for(auto it:mp){
           if(it.second%n!=0){
              flag = false;
           }
            
       }
       return flag;
    }
};