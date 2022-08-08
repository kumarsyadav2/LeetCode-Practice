class Solution {
public:
    bool BinarySearch(int number){
        int s=0,e=number;
        int mid = s + (e-s)/2;
        while(s<=e){
            long long int square; 
                square = mid;
                square *=square;
            if(square == number) return true;
            else if(square<number){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return false;
    }
    bool isPerfectSquare(int num) {
        return BinarySearch(num);
    }
};