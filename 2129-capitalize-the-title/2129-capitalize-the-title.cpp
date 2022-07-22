class Solution {
public:
    string capitalizeTitle(string title) {
        int n=title.length();
        int j=0;
        if(title[j+1]!=' '&&title[j+1]!='\0'&&title[j+2]!=' '&&title[j+2]!='\0')
            title[j]=toupper(title[j]);
        else title[j]=tolower(title[j]);
        for(int i=0;i<n;i++){
            if(title[i]==' '&&(title[i+1]!=' '&&title[i+1]!='\0'&&title[i+2]!=' '&&title[i+2]!='\0'&&title[i+3]!=' '&&title[i+3]!='\0')){
                title[i+1]=toupper(title[i+1]);
            }
            else{
               title[i+1]=tolower(title[i+1]);
            }
        }
        return title;
    }
};