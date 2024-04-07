class Solution {
public:
    bool checkValidString(string s) {

         stack<char>st,brac;
         int n = s.length();
         int cnt = 0;

         for(int i=0;i<n;i++){
             
           if(s[i]=='('){
               st.push(i);
           }
           else if(s[i]==')'){

               if(!st.empty()){
                    st.pop();
               }

               else if(!brac.empty()){
                 brac.pop();
               } else
               return false;
           }
           else{
             brac.push(i);
           }
         }
     
       while(!st.empty()){
          if(brac.empty() || st.top()>brac.top())
          return false;

          else{
            brac.pop();
            st.pop();
          }
       }
       return true;

    }
};