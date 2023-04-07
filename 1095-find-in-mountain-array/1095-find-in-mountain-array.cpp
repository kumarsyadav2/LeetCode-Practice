/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
  class MountainArray {
    public:
      int get(int index);
      int length();
 };
 
*/
class Solution {
    private:
    int bs(int target, MountainArray &mountainArr){
        int len = mountainArr.length();
        int s=0, e=len-1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                s = mid + 1;
            }
            else e = mid;
            mid = s + (e-s)/2;
        }
        int mid1;
        s=0,e=mid;
        mid1 = s + (e-s)/2;
        while(s<=e){
            int b = mountainArr.get(mid1);
            if(b==target){
                return mid1;
            }
            if(b<target)
                s=mid1+1;
            else e=mid1-1;
            mid1 = s + (e-s)/2;
        }
        int mid2;
        s=mid,e=len-1;
        mid2= s+(e-s)/2;
        while(s<=e){
            int c = mountainArr.get(mid2);
            if(c==target)
                return mid2;
            if(c<target)
                e=mid2-1;
            else s = mid2+1;
            mid2 = s + (e-s)/2;
        }
        return -1;
    }
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int a ;
        a = bs(target, mountainArr);
        return a;
    }
};