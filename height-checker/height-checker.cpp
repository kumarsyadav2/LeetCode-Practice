class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        for(int i=0;i<heights.size();i++){
            expected.push_back(heights[i]);
        }
        for(int i=1;i<heights.size();i++){
            for(int j=0;j<heights.size()-i;j++){
                if(expected[j]>expected[j+1]){
                    int temp = expected[j];
                    expected[j]=expected[j+1];
                    expected[j+1]=temp;
                }
            }
        }
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expected[i]) count++;
        }
        return count;
    }
};