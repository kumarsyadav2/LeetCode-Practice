class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
       // ans.insert(index[i],nums[i]);
            auto it = ans.begin()+index[i];
            auto newit=ans.insert(it,nums[i]);
        }
        return ans;
    }
};