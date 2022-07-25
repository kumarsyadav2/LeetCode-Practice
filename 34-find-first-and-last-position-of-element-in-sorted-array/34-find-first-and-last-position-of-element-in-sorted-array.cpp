class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        int l=0,h;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                if(l==0){
                    ans.pop_back();
                    ans.pop_back();
                    ans.push_back(i);
                    l++;
                    h=i;
                }
                h=i;
            }
        }
        if(l!=0)
        ans.push_back(h);
        return ans;
    }
};