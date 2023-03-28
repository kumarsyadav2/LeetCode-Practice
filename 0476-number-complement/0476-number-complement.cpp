class Solution {
public:
    int findComplement(int num) {
        
        int n = num;
        int count = 0;
        
        while(n!=0){
            count++;
            n>>=1;
        }
        int ans = pow(2,count)-num-1;
        return ans;
    }
};