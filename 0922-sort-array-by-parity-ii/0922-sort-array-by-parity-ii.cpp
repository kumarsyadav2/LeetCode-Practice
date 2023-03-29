class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        
        for(;i<n-1;){
          if((nums[i]%2!=0)&&(nums[j]%2==0)){
              swap(nums[i],nums[j]);
              j-=2;i+=2;
          }
           else if(nums[i]%2==0)i+=2;
           else if(nums[j]%2!=0)j-=2;
        }
        return nums;
    }
};