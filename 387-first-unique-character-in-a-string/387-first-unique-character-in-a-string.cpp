class Solution {
public:
    int firstUniqChar(string s) {
        int found,u;
        int t=-1;
        for(int i=0;i<s.length();i++){
            found=-1,u=-1;
            found = s.find(s[i],i+1);
            // if(i==s.length()-1){
            //     for(int k=0;k<s.length()-1;k++){
            //         if(s[i]==s[k])
            //             z=0;
            //     }
            // }
            if(found==-1)
            for(int j=0;j<i;j++){
                if((s[i]==s[j])){
                   u=0; 
                }
            }
                if(found==-1&&u==-1){
                    t=i;
                    break;
                }
        }
        return t;
    }
};