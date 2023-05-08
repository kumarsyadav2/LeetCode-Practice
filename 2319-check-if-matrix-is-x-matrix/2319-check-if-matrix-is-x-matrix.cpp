class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int len = grid.size();
        bool ans = true;
        for(int i=0;i<len;i++){
            if(grid[i][i]==0)
                ans = false;
            if(grid[i][len-1-i]==0)
                ans = false;
        }
        for(int i=0;i<len;i++){
            for(int j=0;j<grid[0].size();j++){
                if((i!=j)&&(i+j!=len-1)){
                    if(grid[i][j]!=0){
                        ans = false;
                    }
                }
            }
        }
        return ans;
    }
};