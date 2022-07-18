class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int c,l=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                c=nums[i]-nums[j];
                if(c>=0&&c==k)l++;
                else{
                    c=c*-1;
                    if(c>=0&&c==k)l++;
                }
            }
        }
        return l;
    }
};