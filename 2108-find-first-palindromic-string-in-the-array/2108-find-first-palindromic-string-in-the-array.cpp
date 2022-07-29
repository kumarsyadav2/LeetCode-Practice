class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string t,s;
         //bool z=true;
        for(int i=0;i<words.size();i++){
            t=words[i];
            int a=0,e=t.length()-1;
             bool z=true;
            while(a<e){
                if(t[a]!=t[e]){
                    z=false;
                    break;
                }
                a++;e--;
            }
            if(z){
                s=t;
                break;
            }
        }
        return s;
    }
};