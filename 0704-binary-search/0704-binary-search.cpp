class Solution {
    int binary(vector<int>&nums, int s, int e, int t){
        int m = s + (e-s)/2;
        while(s<=e){
        if(nums[m]==t){
            return m;
        }
        else if(nums[m]>t){
            e = m-1;
        }
        else if(nums[m]<t){
            s = m+1;
        }
            m = s + (e-s)/2;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = binary(nums,0,n-1,target);
        return ans;
    }
};