class Solution {
public:
    int minSteps(string s, string t) {
        
       vector<int>arr1(26,0);
       vector<int>arr2(26,0);
       int cnt = 0;

       for(int i=0;i<s.length();i++){
           arr1[s[i]-'a']++;
       }
       for(int i=0;i<s.length();i++){
           arr1[t[i]-'a']--;
       }

       for(int i=0;i<arr1.size();i++){
           if(arr1[i]>0){
               cnt = cnt  + arr1[i];
           }
       }
       return cnt;
    }
};