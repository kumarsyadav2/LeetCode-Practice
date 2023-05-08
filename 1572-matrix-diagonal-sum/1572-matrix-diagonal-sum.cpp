class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int len = mat.size();
        int sum=0;
        for(int i=0,j=0;i<len;i++,j++){
            sum+=mat[i][j];
        }
        for(int i=0,j=len-1;i<len;i++,j--){
            if(i==j)
                continue;
            sum+=mat[i][j];
        }
        return sum;
    }
};