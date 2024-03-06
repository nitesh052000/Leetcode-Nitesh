class Solution {
public:

    int palindrome(int left,int right,string s){

        int count= 0;

        while(left>=0 && right<s.length() && s[left]==s[right]){
            count++;
            left--;
            right++;
        }
        return count;
    }



    int countSubstrings(string s) {
        
        int n = s.length() , ans = 0;
        
        for(int i=0;i<n;i++){
          
          int odd = palindrome(i,i,s);
          int even = palindrome(i,i+1,s);

          ans +=odd+even;

        }
        return ans;
    }
};