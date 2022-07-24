class Solution {
public:
    int countAsterisks(string s) {
        int l=0,h=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='|')l++;
            if(l%2==0){
                if(s[i]=='*')h++;
            }
        }
        return h;
    }
};