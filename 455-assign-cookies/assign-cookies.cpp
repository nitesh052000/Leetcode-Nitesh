class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int cnt = 0;

       if(g.size()>=s.size()){        
 
           int i =0,j=0;

           while(j<s.size()){
               if(s[j]>=g[i]){
                   cnt++;
                   j++;
                   i++;
               }
              
               else if(g[i]>s[j])
                 j++;
           }
       
       }
       else{
         
        int i =0,j=0;

           while(j<g.size() && i<s.size()){
               if(s[i]>=g[j]){
                   cnt++;
                   j++;
                   i++;
               }
              
               else if(g[j]>s[i])
                 i++;
           }
       }

        return cnt;
    }
};