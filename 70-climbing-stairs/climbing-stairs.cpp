class Solution {
public:
    
  int  solve(int n,vector<int>&khwab){
    
     if(n==0){
        return 1;
     }
     if(n<0){
         return 0;
     }
     if(khwab[n]!=-1){
         return khwab[n];
     }

      int first = solve(n-1,khwab);
      int second = solve(n-2,khwab);

      return khwab[n] = first+second;

    }

    int climbStairs(int n) {

        vector<int>khwab(n+1,-1);
        return solve(n,khwab);
        
    }
};