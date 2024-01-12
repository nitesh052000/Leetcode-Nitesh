class Solution {
public:
    bool halvesAreAlike(string s) {
          
          int n = s.length();
          int cnt1=0;
          int cnt2 =0;
         
        string str1 = s.substr(0,n/2);
        string str2 = s.substr(n/2);

        for(int i=0;i<n/2;i++){
            if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i'||str1[i]=='o' || str1[i]=='u' || str1[i]=='A'|| str1[i]=='E' || str1[i]=='I' || str1[i]=='O'||str1[i]=='U'){
                cnt1++;
            }
            
        }
        for(int i=0;i<n/2;i++){
            if(str2[i]=='a' || str2[i]=='e' || str2[i]=='i'||str2[i]=='o' || str2[i]=='u' || str2[i]=='A'|| str2[i]=='E' || str2[i]=='I' || str2[i]=='O'||str2[i]=='U'){
                cnt2++;
            }
        }

        if(cnt1==cnt2)
        return true;

        return false;
    }
};