class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int l,m=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            l=0;
            while(x>0){
                x/=10;
                l++;
            }
            if(l%2==0)m++;
        }
        return m;
    }
};