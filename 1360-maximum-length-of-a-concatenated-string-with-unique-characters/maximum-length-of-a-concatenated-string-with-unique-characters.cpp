class Solution {
public:

  bool hasdublicate(string &s1,string &s2){
  
   int ans[26] = {0}; 

    for(char &ch:s1){
         if(ans[ch-'a']>0)
         return true;

        ans[ch-'a']++;
    }

    for(char &ch:s2){
        if(ans[ch-'a']>0)
        return true;
    }

    return false;

  }

    int solve(string temp,int n,int idx,vector<string>& arr){

         if(idx>=n){
             return temp.length();
         }
        
       int include = 0;
       int exclude = 0;

         if(hasdublicate(arr[idx],temp))
        {
             exclude = solve(temp,n,idx+1,arr);
        }
        else{
             exclude = solve(temp,n,idx+1,arr);

             include = solve(temp+arr[idx],n,idx+1,arr);
        }

      return max(include,exclude);

    }


    int maxLength(vector<string>& arr) {

        string temp = "";
         int n = arr.size();

        return solve(temp,n,0,arr);       
  
    }
};