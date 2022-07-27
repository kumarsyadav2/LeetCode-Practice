class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int l=0,n=s.length();
        string t;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(indices[j]==l){
                    t+=s[j];
                    l++;
                }
                
                
            // if(indices[i]==l){
            //     t+=s[i];
            //     //t+=s[l];
            //     //i=0;
            //     l++;
            // }
            if(l==n)break;
            }
        }
        return t;
    }
};