class Solution {
public:
    int pivotInteger(int n) {
          
          int low = 1;
          int high = n;

          int total = (n*(n+1))/2;

          while(low<=high){

            int mid = low + (high-low)/2;
            
            int sum = (mid*(mid+1))/2;
            int final = total-sum+mid;

             if(sum==final)
             return mid;

             else if(sum<final){
                low = mid+1;
             }
             else
             high = mid-1;
          }
          return -1;
    }
};