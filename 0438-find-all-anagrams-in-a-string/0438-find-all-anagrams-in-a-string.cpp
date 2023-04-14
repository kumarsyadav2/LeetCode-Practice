class Solution {
    int checkEqual(int arr1[26],int arr2[26]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i])
                return 0;
        }
        return 1;
    }
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.length();
        int arr1[26]={0};
        for(int i=0;i<n;i++){
            arr1[p[i]-'a']++;
        }
        int windowSize=n;
        int i=0;
        int arr2[26]={0};
        while(i<s.length() && i<windowSize){
            arr2[s[i]-'a']++;
            i++;
        }
        vector<int>ans;
        if(checkEqual(arr1,arr2))
            ans.push_back(0);
        while(i<s.length()){
            char newChar = s[i];
            arr2[newChar-'a']++;
            char oldChar = s[i-windowSize];
            arr2[oldChar-'a']--;
            if(checkEqual(arr1,arr2)){
                ans.push_back(i-windowSize+1);
            }
            i++;
        }
        return ans;
    }
};