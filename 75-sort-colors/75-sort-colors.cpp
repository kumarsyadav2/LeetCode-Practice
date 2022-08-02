class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int i = 0, j = nums.size()-1;
        // while(i<j){
        //     if(nums[i]>nums[j])
        //         swap(nums[i],nums[j]);
        //     i++;j--;
        // }
        for(int i=0;i<nums.size()-1;i++)
            for(int j=i;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
    }
};