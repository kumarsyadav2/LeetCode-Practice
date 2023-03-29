class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=1;
        while(j<n){
            if(nums[i]==nums[j]){
                nums[i]*=2;
                nums[j]=0;
                i+=2;j+=2;
                continue;
            }
            i++;j++;
        }
        int zero=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[zero]=nums[i];
                zero++;
            }
        }
        for(int i=zero;i<n;i++){
            nums[i]=0;
        }
        return nums;
    }
};