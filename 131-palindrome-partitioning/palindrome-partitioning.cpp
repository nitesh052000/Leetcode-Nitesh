class Solution {
public:

   bool ispalindrome(int i,int j,string s){
         
         while(i<j){
            if(s[i]!=s[j])
            return false;

            i++;
            j--;
         }
          return true;
   }
 
  void solve(string &s,vector<vector<string>>&ans,int idx,vector<string>&res)
  {

     if(idx>=s.length()){
        ans.push_back(res);
        return;
     }


      for(int i=idx;i<s.length();i++){
         if(ispalindrome(idx,i,s)){
            res.push_back(s.substr(idx,i-idx+1));
            solve(s,ans,i+1,res);
            res.pop_back();
         }
      }


  }

    vector<vector<string>> partition(string s) {
        string curr = "";
        vector<vector<string>>ans;
        vector<string>res;

        solve(s,ans,0,res);
        return ans;
    }
};