class Solution {
public:
   
   vector<int>getsl(vector<int>&arr,int n){

       stack<int>st;
       vector<int>ans(n);

       for(int i=0;i<n;i++){
         
         if(st.empty()){
             ans[i] = -1;
         }

         else{

             while(st.size()>0 && arr[st.top()]>arr[i])
             st.pop();

             if(st.empty()){
                ans[i] = -1;
             }
             else{
                 ans[i] = st.top();
             }
         }
      st.push(i);
 

       }

return ans;
   }
     
     vector<int>getsr(vector<int>&arr,int n){
          stack<int>st;
          vector<int>res(n);

          for(int i=n-1;i>=0;i--){

                if(st.empty())
                 res[i] = n;
         

         else{

             while(st.size()>0 && arr[st.top()]>=arr[i])
             st.pop();

             if(st.empty()){
                res[i] = n;
             }
             else{
                 res[i] = st.top();
             }
         }
         st.push(i);

          }
        //   reverse(res.begin(),res.end());
          return res;
     }

    int sumSubarrayMins(vector<int>& arr) {
         int n = arr.size();
         long long  sum = 0;
        vector<int>left = getsl(arr,n);
        vector<int>right = getsr(arr,n);

        int M = 1e9+7;

        for(int i=0;i<n;i++){

            long long  l = (i-left[i]);
            long long  r = (right[i]-i);

            sum = (sum + arr[i]*l*r)%M;
        }
        return sum;
    }
};