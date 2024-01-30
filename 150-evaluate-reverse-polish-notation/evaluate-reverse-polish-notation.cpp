class Solution {
public:
    int evalRPN(vector<string>& tokens) {


       stack<int>s;
    int n = tokens.size();

    for (int i = 0; i < n; i++) {

        if (tokens[i] == "+") 
        {
            if(s.size()>=2){
                   int fir = s.top();
                   s.pop();
                   int sec = s.top();
                   s.pop();

                   int result = fir + sec;

                   s.push(result);
            }
        } else if (tokens[i] == "*") {

           int fir = s.top();
                   s.pop();
                   int sec = s.top();
                   s.pop();

                   int result = fir*sec;


                   s.push(result);
        } else if (tokens[i] == "/") {
             int fir = s.top();
                   s.pop();
                   int sec = s.top();
                   s.pop();
                  if(fir==0){
                      continue;
                  }
                  int result = sec/fir;
                   s.push(result);
        } else if(tokens[i]=="-") {
                int fir = s.top();
                   s.pop();
                   int sec = s.top();
                   s.pop();
                   int result = sec-fir;
                   s.push(result);
       }
       else
         s.push(atoi(tokens[i].c_str()));
     }
       int ans = s.top();
       return ans;
       }
    
};