class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a=0;
        for(int i=0;i<ransomNote.length();i++){
            for(int j=0;j<magazine.length();j++){
                if(ransomNote[i]==magazine[j]){
                    magazine[j]='_';
                    a++;
                    break;
                }
            }
//         found = magazine.find(ransomNote[i]);
//         if(found==-1)
//             return false;
        }
        if(a==ransomNote.length())
            return true;
        else return false;
    }
};