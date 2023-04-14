class Solution {
    bool checkEqual(int arr1[26],int arr2[26]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return 0;
            }
        }
        return 1;    
    }
public:
    bool checkInclusion(string s1, string s2) {
        int arr1[26]={0};
        
        for(int i=0;s1[i]!='\0';i++){
            arr1[s1[i]-'a']++;
        }
        int i=0;
        int windowSize=s1.length();
        int arr2[26]={0};
        while(i<windowSize && i<s2.length()){
            int index = s2[i]-'a';
            arr2[index]++;
            i++;
        }
        if(checkEqual(arr1,arr2))
            return 1;
        while(i<s2.length()){
            char newChar = s2[i];
            int index = newChar-'a';
            arr2[index]++;
            char oldChar = s2[i-windowSize];
            index = oldChar-'a';
            arr2[index]--;
            i++;
            if(checkEqual(arr1,arr2)){
                return 1;
            }
        }
        return 0;
    }
};