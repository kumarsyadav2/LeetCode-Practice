class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int min=i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[min]){
                    min=j;
                }
            }
                int temp = nums[min];
                nums[min]= nums[i];
                nums[i]=temp;
        }
    }
};

 // int min=0;
 //        for(int i=0;i<nums.size()-1;i++){
 //            min=i;
 //            for(int j=i+1;j<nums.size();j++){
 //                if(nums[j]<nums[min]){
 //                    min=j;
 //                }
 //                int temp = nums[min];
 //                nums[min]= nums[i];
 //                nums[i]=temp;
 //            }
 //        }