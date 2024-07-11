class Solution {
public:
    string reverseParentheses(string s) {
          
          
           priority_queue<int>pq;

          for(int i=0;i<s.length();i++){
           
           if(s[i]=='('){
            pq.push(i);
           }

           else if(s[i]==')'){
                int start = pq.top()+1;
                 int end = i-1;

               reverse(s.begin()+start ,s.begin()+end+1);
               s.erase(i,1);
               s.erase(pq.top(),1);
              pq.pop();
              i = i-2;
           }


          }
          return s;
    }
};