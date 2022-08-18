class Solution {
public:
    int numberOfSteps(int num) {
        int a = 0;
        while(num!=0){
            if(num%2==0){
                a++;
                num/=2;
            }
            if(num%2!=0){
                num--;
                a++;
            }
        }
        return a;
    }
};