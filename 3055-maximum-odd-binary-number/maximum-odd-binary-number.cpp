class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int i = 0;
        int j =i+1;
        
       
           while(j<s.length())
           { 
            if(s[j]=='1'){
                swap(s[i],s[j]);
              j++;
               i++;
            }
               
               else{
                   j++;
               }
               
           }
            
         int k = s.length()-1;
        int r = s.length()-1;
        
        while(k>=0){
            
            if(s[k]=='1'){
                swap(s[k],s[r]);
                break;
            }
            k--;
        }
       
        return s;
    }
};