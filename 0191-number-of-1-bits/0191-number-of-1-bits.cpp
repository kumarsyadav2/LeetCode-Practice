class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t c = 0;
        while(n>0){
            if(n&1){
            c++;
            }
            n = n>>1;
        }
        return c;
    }
};