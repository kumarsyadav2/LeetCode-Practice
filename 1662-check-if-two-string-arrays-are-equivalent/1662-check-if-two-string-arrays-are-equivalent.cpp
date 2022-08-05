class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string r,s;
        for(int i=0;i<word1.size();i++){
            r+=word1[i];
        }
        
        for(int i=0;i<word2.size();i++){
            s+=word2[i];
        }
         if(r.compare(s)) return false;
        else return true;
    }
};