class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        sort(stones.begin(),stones.end());
        
        for(int i=stones.size()-1;i>0;i--){
            if(stones[i]==stones[i-1]){
                stones.pop_back();
                stones.pop_back();
                i--;
            }else{
                int x = stones[i]-stones[i-1];
                stones.pop_back();
                stones.pop_back();
                stones.push_back(x);
                sort(stones.begin(),stones.end());
            }
        }
        if(!stones.size()){
            return 0;
        }else{
            return stones[0];
        }
        return 0;
    }
};