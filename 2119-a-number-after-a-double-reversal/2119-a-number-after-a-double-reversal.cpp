class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0){
            return true;
        }
        else if(num%10){
            return true;
        }
        return false;
    }
};