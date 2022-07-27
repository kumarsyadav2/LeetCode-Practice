class Solution {
public:
    string interpret(string command) {
        string t;
        for(int i=0;i<command.length();i++){
            if(command[i]=='('&&command[i+1]==')'){
                t+='o';
                i++;
            }
            if((command[i]>='a'&&command[i]<='z')||(command[i]>='A'&&command[i]<='z'))
                t+=command[i];
            
        }
        return t;
    }
};