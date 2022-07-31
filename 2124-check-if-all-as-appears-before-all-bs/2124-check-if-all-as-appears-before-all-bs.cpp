class Solution {
public:
    bool checkString(string s) {
        bool z = true;
        int count = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                for(int j=i;j<s.length();j++){
                    if(s[j]=='a'){
                        count++;
                        break;
                    }
                }
            }
        }
        if(count!=0) z = false;
        return z;
    }
};