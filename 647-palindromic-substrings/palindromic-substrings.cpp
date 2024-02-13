class Solution {
public:

    bool ispalindrome(string str){
         int i = 0;
         int j = str.length()-1;

         while(i<j){
             if(str[i]==str[j]){
                 i++;
                 j--;
             }
            else
            return false;
         }
         return true;
    }

    int countSubstrings(string s) {
        
        int n = s.length();
        int cnt = 0;

        for(int i=0;i<n;i++){
            string str = "";
            for(int j=i;j<n;j++){
                str = str + s[j];
                if(ispalindrome(str))
                cnt++;
            }
        }
        return cnt;
    }
};