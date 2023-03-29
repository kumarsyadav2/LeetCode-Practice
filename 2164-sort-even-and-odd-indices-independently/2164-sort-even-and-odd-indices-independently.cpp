class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        int n = nums.size();
        if(n==1) return nums;
        int j=1;
        for(int i=0;i<n;i+=2){
            even.push_back(nums[i]);
            if(j<n){
            odd.push_back(nums[j]);
                j+=2;
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        // int m = min(even.size(),odd.size());
        int e = even.size();
        int o = odd.size();
        vector<int>ans;
        // if(e>=o){
        // vector<int>ans;
        for(int i=0;i<e;i++){
             ans.push_back(even[i]);
            if(o>i)
             ans.push_back(odd[i]);
        }
        // }
        // else{
        //      // vector<int>ans;
        // for(int i=0;i<o;i++){
        //     if(e>=i)
        //      ans.push_back(even[i]);
        //      ans.push_back(odd[i]);
        // }
        // }
        return ans;
    }
};