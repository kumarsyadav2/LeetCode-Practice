class Solution {
public:
    string truncateSentence(string s, int k) {
        int l=0;
        string t;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==' ')l++;
            if(l<k)t+=s[i];
        }
        return t;
    }
};