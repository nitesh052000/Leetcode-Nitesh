class Solution {
public:
    bool isPowerOfTwo(int n) {

        long long  cnt = 1;

        if(n==1)
        return true;

        while(cnt<=n){

            cnt  = cnt*2;
            if(cnt==n)
            return true;
        }
        return false;
    }
};