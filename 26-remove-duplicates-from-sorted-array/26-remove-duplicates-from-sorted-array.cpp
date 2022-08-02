class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //int count = 0;
        //vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){nums[i]=999;}
        }
        sort(nums.begin(),nums.end());
    //      for(int i=0;i<nums.size()-1;i++){
    //          if(nums[i]==999){
    //              int temp;
    //             for(int j=i+1;j<nums.size();j++){
    //                // if(nums[j] >= 0 && nums[j] <= 9){
    //                 if(nums[j]!=999){
    //                     temp = nums[i];
    //                     nums[i] = nums[j];
    //                     nums[j] = temp;
    //                 }
    //             }
    //             }
    // }
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=999) count++;
        }
        return count;
    }
};