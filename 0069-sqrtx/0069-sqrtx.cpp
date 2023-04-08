class Solution {
    int bs(int x){
        int s = 0, e = x;
        long long int mid = s + (e-s)/2;
        long long int sqn; 
        int ans;
        while(s<=e){
            sqn = mid * mid;
            if(sqn == x)
                return mid;
            else if(sqn<x){
                ans = s;
                s=mid + 1;
            }
            else {
                e = mid - 1;
                ans = e;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
public:
    int mySqrt(int x) {
        return bs(x);
    }
};