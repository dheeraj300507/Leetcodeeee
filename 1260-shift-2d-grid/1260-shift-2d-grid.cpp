class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> tmp;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                tmp.push_back(grid[i][j]);
            }
        }
        k%=tmp.size();
        rotate(tmp.begin(),tmp.end()-k,tmp.end());
        int idx=0;
        vector<vector<int>> ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=tmp[idx++];
            }
        }
        return ans;
    }
};