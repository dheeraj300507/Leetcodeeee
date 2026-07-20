class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid,int k) {
        int m=grid.size(),n=grid[0].size();
        vector<int> arr;

        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                arr.push_back(grid[i][j]);

        k%=arr.size();
        rotate(arr.begin(),arr.end()-k,arr.end());

        vector<vector<int>> ans(m,vector<int>(n));
        int idx=0;

        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                ans[i][j]=arr[idx++];

        return ans;
    }
};