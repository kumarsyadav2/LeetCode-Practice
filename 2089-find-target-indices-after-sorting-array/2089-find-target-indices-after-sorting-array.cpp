class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1;
        int mid = s+(e-s)/2;
        int f=-1,l=-1;
        while(s<=e){
           if(nums[mid]==target){
               f=mid;
               e=mid-1;
           }
            if(nums[mid]>target){
                e=mid-1;
            }
            if(nums[mid]<target){
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        s=0,e=nums.size()-1;
        mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                l=mid;
                s=mid+1;
            }
            if(nums[mid]>target){
                e=mid-1;
            }
            if(nums[mid]<target){
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        vector<int>ans;
        if(f==-1&&l==-1)return ans;
        if(f==l){
            ans.push_back(l);
            return ans;
        }
        for(int i=f;i<=l;i++){
            ans.push_back(i);
        }
        return ans;
    }
};