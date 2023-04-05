class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[0], b = nums[nums.size()-1];
        int rem = b % a;
        if(rem == 1) return 1;
        if(rem == 0) return a;
        while(rem){
            rem = b % a;
            if(a%rem==0&&b%rem==0)
                return rem;
            b = a;
            a = rem;
        }
        return rem;
    }
};