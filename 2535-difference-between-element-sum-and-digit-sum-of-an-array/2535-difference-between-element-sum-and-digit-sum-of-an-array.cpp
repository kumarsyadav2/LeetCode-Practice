class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        long long int ele = 0, dig = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            ele = ele + nums[i];
            while(nums[i]>0){
                int r = nums[i]%10;
                dig = dig + r;
                nums[i] = nums[i]/10;
            }
        }
        return abs(dig-ele);
    }
};