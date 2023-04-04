class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,n=nums.size();
        int e=n-1;
        int mid=s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                e=mid-1;
            }
            if(nums[mid]<target){
                s=mid+1;
            }
            mid = s+(e-s)/2;
        }
        return e+1;
    }
};