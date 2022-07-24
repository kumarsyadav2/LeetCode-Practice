class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int h=0;
        for(int i=0;i<patterns.size();i++){
            int l=-1;
            l=word.find(patterns[i]);
            if(l!=-1)h++;
        }
        return h;
    }
};