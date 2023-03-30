class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        vector<int>pos;
        vector<int>neg;
        for(;i<n;i++){
            if(nums[i]>0)
                pos.push_back(nums[i]);
                else
            neg.push_back(nums[i]);
        }
        int a=0,b=0;
        for(int j=0;j<n;j++){
            !(j%2)?(swap(nums[j],pos[a++])):(swap(nums[j],neg[b++]));
        }
        return nums;
    }
};