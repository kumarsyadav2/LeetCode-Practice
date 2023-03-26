class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, mult = 1;
        while(n>0){
            int rem = n%10;
            mult *= rem;
            sum += rem;
            n /= 10;
        }
        return (mult-sum);
    }
};