class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int left=0,right=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            right+=nums[i];
        }
        for(int i=0;i<n;i++){
            if(left==right-nums[i]){
                return i;
            }
            left=left+nums[i];
            right=right-nums[i];
        }
        return -1;
    }
};