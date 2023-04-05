class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        int count = 1;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                count++;
            }
            else if((count!=1)){
                ans = ans + (count*(count-1))/2;
                count=1;
            }
        }
        if((count!=1)){
                ans = ans + (count*(count-1))/2;
                count=1;
            }
        return ans;
    }
};