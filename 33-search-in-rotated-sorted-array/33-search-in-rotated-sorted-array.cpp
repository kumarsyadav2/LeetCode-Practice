class Solution {
public:
    int pivot(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        //int mid = s + (e-s)/2;
        while(s<e){
            int mid = s + (e-s)/2;
            if(nums[mid]>=nums[0]){
                s = mid+1;
            }
            else e = mid;
            //mid = s + (e-s)/2;
        }
        return binaryS(nums, target, s);
    }
    int binaryS(vector<int>& nums, int target, int pivotEle){
        if(target>=nums[pivotEle]&&target<=nums[nums.size()-1]){
            int s = pivotEle; 
            int e = nums.size()-1;
            while(s<=e){
                int mid = s + (e-s)/2;
                if(target==nums[mid]){
                    return mid;
                }
                else if(nums[mid]<target){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
            return -1;
        }
        else{ //if(target>=nums[0]&&target<=nums[pivotEle-1]){
            int s = 0; 
            int e = pivotEle-1;
            while(s<=e){
                int mid = s + (e-s)/2;
                if(target==nums[mid]){
                    return mid;
                }
                else if(nums[mid]<target){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
            return -1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return pivot(nums, target);
    }
};