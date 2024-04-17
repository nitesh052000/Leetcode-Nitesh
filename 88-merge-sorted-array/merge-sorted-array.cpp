class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
          
        int i = m-1;
        int j = 0;

       
        if(m==0){
         nums1 = nums2;
         return;
        }

         if(n==0)
          return;

    

        while(i>=0 && j<n && nums1[i]>nums2[j]){
              
              swap(nums1[i],nums2[j]);
              i--;
              j++;
        }

        int k = m;

        for(int i=0;i<n;i++){
            nums1[k] = nums2[i];
            k++; 
        }

        sort(nums1.begin(),nums1.end());
         
    }
};