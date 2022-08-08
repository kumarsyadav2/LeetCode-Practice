class Solution {
public:
    int pivotEle(vector<int>& nums){
        int s = 0;
        int e = nums.size()-1;
        if(s==e) return e;
        while(s<e){
            int mid = s + (e-s)/2;
            if(nums[nums.size()-1]>nums[0]) return 0;
            if(nums[mid]>=nums[0]) 
                s = mid+1;
            else e = mid;
        }
        return s;
    }
    int findMin(vector<int>& nums) {
       int pivot = pivotEle(nums);
        return nums[pivot];
    }
};