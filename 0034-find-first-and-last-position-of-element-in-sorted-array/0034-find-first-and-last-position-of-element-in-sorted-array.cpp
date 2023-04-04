class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first=-1,last=-1;
        int n=nums.size();
        int start=0,end=n-1;
        int mid = start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            if(nums[mid]<target){
                start=mid+1;
            }
            if(nums[mid]>target){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        ans.push_back(first);
        start=0;end=n-1;
        mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
            }
            if(nums[mid]<target){
                start=mid+1;
            }
            if(nums[mid]>target){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        ans.push_back(last);
        return ans;
    }
};