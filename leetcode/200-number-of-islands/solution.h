/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool dfs(vector<vector<char>> &grid, size_t x, size_t y)
    {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[x].size())
            return false;
        if (grid[x][y] == '1')
        {
            grid[x][y] = 0;
            dfs(grid, x - 1, y);
            dfs(grid, x + 1, y);
            dfs(grid, x, y - 1);
            dfs(grid, x, y + 1);
            return true;
        }

        return false;
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int counter = 0;
        for (size_t i = 0; i < grid.size(); ++i)
            for (size_t j = 0; j < grid[i].size(); ++j)
                if (dfs(grid, i, j))
                    ++counter;
        return counter;
    }
};
// @lc code=end
