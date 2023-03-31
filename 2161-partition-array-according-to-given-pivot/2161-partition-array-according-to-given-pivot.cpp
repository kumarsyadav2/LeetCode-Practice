class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>small;
        vector<int>large;
        vector<int>equal;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot) small.push_back(nums[i]);
            if(nums[i]==pivot) equal.push_back(nums[i]);
            if(nums[i]>pivot) large.push_back(nums[i]);
        }
        
        int s = small.size();
        int e = equal.size();
        int l = large.size();
        
        for(int i=0;i<s;i++){
            swap(nums[i],small[i]);
        }
        for(int i=0;i<e;i++){
            swap(nums[i+s],equal[i]);
        }
        for(int i=0;i<l;i++){
            swap(nums[i+s+e],large[i]);
        }
        return nums;
    }
};