class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0; i < m; i++) {
            sort(grid[i].begin(), grid[i].end());
        }
        for(int j = 0; j < n; j++) {
            int ms = 0;
            for(int i = 0; i < m; i++) {
                ms = max(ms, grid[i][j]);
            }
            ans += ms;
        }
        return ans;
    }
};