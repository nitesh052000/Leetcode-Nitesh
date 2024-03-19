class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
         
         vector<int>mp(26,0);
         int time = 0;

         for(char &ch:tasks){
            mp[ch-'A']++;
         }

         priority_queue<int>pq;

         for(int i=0;i<26;i++){
            if(mp[i]>0)
            pq.push(mp[i]);
         }

         while(!pq.empty()){

            vector<int>temp;

            for(int i=0;i<=n;i++){
                if(!pq.empty()){
                int freq = pq.top();
                pq.pop();
                freq--;
                temp.push_back(freq);
                }
            }

            for(auto it:temp){
                if(it>0)
                pq.push(it);
            }

            if(!pq.empty()){
                time+=n+1;
            }
            else
            time+=temp.size();


         }
         return time;
    }
};