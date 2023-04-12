class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++){
            int x = numbers[i];
        int s=i+1,e=numbers.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            
            if(x+numbers[mid]==target){
                return {i+1,mid+1};
            }
            else if(x+numbers[mid]<target){
                s=mid+1;
            }
            else e = mid-1;
        }
        }
        return {0,0};
    }
};