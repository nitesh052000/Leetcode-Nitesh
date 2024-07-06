class Solution {
public:
    int passThePillow(int n, int time) {

        
        
            int round = time/(n-1);
            int ans = 0;
            if(round%2==0){
                    
                   return 1+time%(n-1);
            }
            else{
                
                 return (n-time%(n-1));
            }
        return -1;
    }
};