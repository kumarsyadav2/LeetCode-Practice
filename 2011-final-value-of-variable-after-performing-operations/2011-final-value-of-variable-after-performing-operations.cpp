class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int v=0;
        for(int i=0;i<operations.size();i++){
            int found1=-1;
            int found2=-1;
            found1=operations[i].find("++");
            if(found1!=-1)v++;
            else v--;
        }
        return v;
    }
};