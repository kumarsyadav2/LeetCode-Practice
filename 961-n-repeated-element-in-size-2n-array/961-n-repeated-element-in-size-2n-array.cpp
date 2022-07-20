class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int l,m;
        int n=(nums.size())/2;
        for(int i=0;i<n*2;i++){
            l=0;
            for(int j=0;j<n*2;j++){
                if(nums[i]==nums[j])l++;
            }
            if(l==n){
                m=nums[i];
                break;
            }
        }
        return m;
    }
};