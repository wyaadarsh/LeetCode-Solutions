class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int N = grid.size();
        int ans = 0;
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                ans += (grid[i][j] > 0) * 2 + grid[i][j] * 4;
                if (i > 0) {
                    ans -= 2 * (min(grid[i][j], grid[i - 1][j]));
                }
                if (j > 0) {
                    ans -= 2 * (min(grid[i][j], grid[i][j - 1]));
                }
            }
        }
        return ans;
    }
};
