class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        int i = 0;
         int n = tokens.size();
         int j = n-1;

         sort(tokens.begin(),tokens.end());

         while(i<=j){
             if(power>=tokens[i]){
                 power = power-tokens[i];
                 score++;
                 i++;
             }
             else if(score>=1){
                 if(i==j)
                 break;
                 power = power+tokens[j];
                 j--;
                 score--;
             }
             else
             break;
         }
         return score;
    }
};