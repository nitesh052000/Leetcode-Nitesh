class Solution {
public:
    int countSubstrings(string s) {
            
        // 1 - direct + memo;
        //2 recursion - even +odd;
        // 3 blueprint

        int n = s.length();
        int cnt = 0;
        vector<vector<int>>t(n,vector<int>(n,false));

        for(int l = 1;l<=n;l++){
          
            for(int i=0;i+l-1<n;i++){

                int j = i+l-1;

                 if(i==j)
                  t[i][j] = true;
                  else if(i+1==j)
                  t[i][j] = (s[i]==s[j]);
                  else
                  t[i][j] = (s[i]==s[j] && t[i+1][j-1]);

                  if(t[i][j]==true)
                  cnt++;
                 
            }
        }
        return cnt;
    }
};