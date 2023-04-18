class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int len1=word1.length();
        int len2=word2.length();
        string ans;
        while(i<len1&&j<len2){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            i++;j++;
        }
        while(i<len1)
            ans.push_back(word1[i++]);
        while(j<len2)
            ans.push_back(word2[j++]);
        return ans;
    }
};