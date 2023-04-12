class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        int carry = 1;
        vector<int>ans;
        int sum = 0;
        while(n>=0){
            sum = digits[n] + carry;
            carry = sum / 10;
            ans.push_back(sum%10);
            n--;
        }
        if(carry>0) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};