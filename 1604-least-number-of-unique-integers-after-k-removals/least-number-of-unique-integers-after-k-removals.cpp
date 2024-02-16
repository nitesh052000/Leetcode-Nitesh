class Solution {
 
  static bool cmp(pair<int,int>&a,pair<int,int>&b){
      if(a.second==b.second)
      return a.first<b.first;

      return a.second<b.second;
 }


public:
  
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        vector<pair<int,int>>freq;

        int n = arr.size();
       
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }

       for(auto it:mp){
           freq.push_back({it.first,it.second});
       }

       sort(freq.begin(),freq.end(),cmp);

       for(int i=0;i<freq.size();i++){

           if(k-freq[i].second>=0){

            k = k-freq[i].second;
            mp.erase(freq[i].first);

           }
           
       }
       return mp.size();       
       
    }
};