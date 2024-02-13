class Solution {
public:
 
  bool ispalindrome(string s){
     
     int i = 0;
     int j = s.length()-1;
      while(i<j){
          if(s[i]==s[j]){
              i++;
              j--;
          }
          else
          return false;
      }
      return true;
  }


    string firstPalindrome(vector<string>& words) {

        int n = words.size();

        for(int i=0;i<n;i++){
          string str = words[i];

          if(ispalindrome(str)){
              return words[i];
          }
        }
        return "";
    }
};