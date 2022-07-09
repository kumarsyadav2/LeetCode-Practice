class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        int j=n;
        for(int i=0;i<n;i++){
            //if(i%2==0) arr[i]=nums[i];
            //else arr[i]=nums[n+i-1];
            arr.push_back(nums[i]);
            arr.push_back(nums[j]);
            j++;
        }
        return arr;
    }
};