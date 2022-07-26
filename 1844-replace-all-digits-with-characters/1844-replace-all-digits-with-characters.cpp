class Solution {
public:
      // char shift(char c,int x){
      //       return (c+x);}
    string replaceDigits(string s) {
        string t;
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                //s[i]=shift(s[i-1],s[i]);
                t+=s[i];
            }
            else{
                int y=s[i]-'0';
                char u=s[i-1];
                u+=y;
                t+=u;
            }
        }
        return t;
    }
};