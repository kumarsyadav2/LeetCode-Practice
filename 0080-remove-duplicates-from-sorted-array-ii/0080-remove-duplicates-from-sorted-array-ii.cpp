class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int k=0;
        int ele=INT_MIN;
        for(int j=1;j<n;j++){
            
            if(nums[i]!=nums[j]){
                nums[++i]=nums[j];
                continue;
            }
               if(ele!=nums[j])
               if(nums[i]==nums[j]){
                   ele=nums[j];
                  nums[++i]=nums[j];
                      continue;
               }
        }
        return ++i;
    }
};