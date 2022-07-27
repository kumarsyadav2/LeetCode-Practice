class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int l,max=0;
        for(int i=0;i<sentences.size();i++){
            string t = sentences[i];
            int l=0;
            for(int j=0;j<t.length();j++){
            if(t[j]==' ')
                l++;
            }
            if(l>max)max=l;
        }
        return max+1;
    }
};