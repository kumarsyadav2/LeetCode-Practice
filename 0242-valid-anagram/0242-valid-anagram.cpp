class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        if(len1!=len2)
            return 0;
        int arr1[26]={0};
        int arr2[26]={0};
        int i=0,j=0;
        while(i<len1){
            arr1[s[i]-'a']++;
            i++;
        }
        while(j<len2){
            arr2[t[j]-'a']++;
            j++;
        }
        for(int k=0;k<26;k++){
            if(arr1[k]!=arr2[k])
                return 0;
        }
        return 1;
    }
};