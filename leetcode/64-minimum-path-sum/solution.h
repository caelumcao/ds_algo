/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

#include <vector>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        if (grid.empty() || grid[0].empty())
            return 0;

        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> f(m, vector<int>(n));

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                f[i][j] = grid[i][j];
                if (i > 0 && j > 0)
                    f[i][j] += min(f[i - 1][j], f[i][j - 1]);
                else if (i > 0)
                    f[i][j] += f[i - 1][j];
                else if (j > 0)
                    f[i][j] += f[i][j - 1];
            }
        }

        return f[m - 1][n - 1];
    }
};
// @lc code=end
