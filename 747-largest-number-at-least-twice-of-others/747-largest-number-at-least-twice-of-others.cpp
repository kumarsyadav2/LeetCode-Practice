class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int l=0,h;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max) max=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(max==nums[i]){
                h=i;
            }
            if(max!=nums[i]){
                if(max>=nums[i]*2){
                    l++;
                }
            }
        }
        if(l==nums.size()-1) return h;
        else return -1;
    }
};