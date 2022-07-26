class Solution {
public:
    string defangIPaddr(string address) {
//         int found=-1;
//         //string target = "[.]";
//       //  for(int i=1;i<address.length()-1;i++){
//         do{
//             found=address.find('.',found+1);
//             if(found!=-1)
//             address=address.substr(0,found)+"[.]"+address.substr(found+1);
        
//         }while(found!=-1);
//         return address;
        string s;
        for(int i=0;i<address.length();i++){
            if(address[i]=='.')
                s+="[.]";
            else s+=address[i];
        }
        return s;
    }
};