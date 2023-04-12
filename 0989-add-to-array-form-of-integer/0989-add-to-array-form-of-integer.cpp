class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size()-1;
        int carry = 0;
        int sum = 0;
        vector<int>ans;
        while(n>=0&&k>0){
            sum = num[n]+carry+k%10;
            k=k/10;
            carry=sum/10;
            ans.push_back(sum%10);
            n--;
        }
        while(k>0){
            sum=carry+k%10;
            k=k/10;
            carry=sum/10;
            ans.push_back(sum%10);
        }
        while(n>=0){
            sum=carry+num[n];
            carry=sum/10;
            ans.push_back(sum%10);
            n--;
        }
        if(carry>0){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};