class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int l,sums=0;
        for(int i=0;i<nums.size();i++){l=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j])l++;
                if(l>1)break;
            }
            if(l==1)sums+=nums[i];
        }
        return sums;
    }
};