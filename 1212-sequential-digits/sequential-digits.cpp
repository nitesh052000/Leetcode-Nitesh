class Solution {
public:
  
   void solve(int start,vector<int>&ans,int high,int low,int prev){
        
        if(start>high){
            return;
        }
        if(start>=low && start<=high){
            ans.push_back(start);
           
        }

        for(int i=1;i<=9;i++){
             if(i-prev==1)
            solve(start*10+i,ans,high,low,i);
        }

         
   }



    vector<int> sequentialDigits(int low, int high) {
            
            int start = 1;
            vector<int>ans;
           
           for(int i=1;i<=8;i++){
              solve(i,ans,high,low,i);
           }
            sort(ans.begin(),ans.end());
            return ans;
    }
};