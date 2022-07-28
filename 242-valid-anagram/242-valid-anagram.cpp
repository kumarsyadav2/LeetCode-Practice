class Solution {
public:
    bool isAnagram(string s, string t) {
        int count = 0;
        int n = s.length();
        int m = t.length();
        //int found=-1;
        if(m==n)
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(s[i]==t[j]){
        //             count++;
        //             //t[i]=' ';
        //             t[j]='?';
        //             break;
        //         }
        //     }
        // }
            for(int i=0;i<n;i++){
                int found=-1;
                found=s.find(t[i]);
                if(found!=-1){
                    s[found]='?';
                    count++;
                }
            }
        if(count == n) return true;
        else return false;
    }
};