class Solution {
public:
    int even(int l){
        int m=0;
        while(l>0){
            l/=10;
            m++;
        }
        if(m%2==0) return 1;
        else return 0;
    }
    int findNumbers(vector<int>& nums) {
        int k = 0, sum = 0;
        for(int i=0;i<nums.size();i++){
            k = even(nums[i]);
            sum+=k;
        }
        return sum;
    }
};