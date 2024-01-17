class Solution {
public:
   
    void solve(vector<int>arr,int n,int idx,vector<vector<int>>&ans,set<vector<int>>&s){
       
       if(idx>=n){
           s.insert(arr);
           return;
       }
       
       for(int i=idx;i<n;i++){
           swap(arr[i],arr[idx]);
           solve(arr,n,idx+1,ans,s);
           swap(arr[i],arr[idx]);
       }
       
       
   }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
         set<vector<int>>s;
         
        solve(nums,nums.size(),0,ans,s);
        
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};