class Solution {
public:
    int pivotInteger(int n) {
        int right=0,left=0;
        right=(n*(n+1))/2;
        for(int i=1;i<=n;i++){
            left+=i;
            if(left==right) return i;
            right-=i;
        }
        return -1;
    }
};