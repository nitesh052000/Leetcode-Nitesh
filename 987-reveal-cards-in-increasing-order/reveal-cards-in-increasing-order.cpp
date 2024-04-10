class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
           
           int n = deck.size();
           bool skip = false;

           sort(deck.begin(),deck.end());
           
           vector<int>ans(n,0);
           int k = 0;
           int j=0;

            while(k<n){
                
              if(ans[j]==0){
                if(skip==false){
                ans[j] = deck[k];
                k++;
                
               }
                 skip=!skip;
              }
              
               j = (j+1)%n;
              
           }
         
          return ans;
    }
};