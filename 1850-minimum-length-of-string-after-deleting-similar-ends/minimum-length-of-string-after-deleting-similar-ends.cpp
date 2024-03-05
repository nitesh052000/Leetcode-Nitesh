class Solution {
public:
    int minimumLength(string s) {
         int n = s.length();
         int i = 0;
         int j = n-1;

         while(i<j){
             if(s[i]==s[j]){
                 char ch = s[i];

                 while(s[i]==ch && i<j){
                     i++;
                 }
                 while(ch==s[j] && j>=i){
                     j--;
                 }
             }
             else
             break;
         }
         if(j<i)
         return 0;
         else
         return j-i+1;
    }
};