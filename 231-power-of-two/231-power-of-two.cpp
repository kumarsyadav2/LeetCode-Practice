class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
    
    while (1){
        if(n==1 || n==2) return true;
        if(n%2!=0) return false;
        n=n/2;
    };
    return true;
    }
};