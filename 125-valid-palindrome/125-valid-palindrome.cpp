class Solution {
// private:
//     string alpha(char s){
//         if((s >= 'a'&& s <= 'z')||(s >= 'A' && s <= 'Z')||(s >= '0' && s <= '9'))
//             return s;
//     }
public:
    bool isPalindrome(string s) {
        string t;
        for(int i=0;i<s.length();i++){
             if((s[i] >= 'a'&& s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')||(s[i] >= '0' && s[i] <= '9')){
                 if(s[i] >= 'A' && s[i] <= 'Z')
                    s[i]=s[i]-'A'+'a';
           //t+=s[i];
            t.push_back(s[i]);
             }
        } 
        //t=tolower(t);
        int a=0,e=t.length()-1;
        bool z=true;
        while(a<e){
            if(t[a]!=t[e]){
                z=false;
                break;
            }
            a++;e--;
        }
        return z;
    }
};