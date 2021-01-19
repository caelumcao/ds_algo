/*
 * @lc app=leetcode.cn id=542 lang=cpp
 *
 * [542] 01 矩阵
 */
#include <vector>
#include <queue>

using namespace std;

// @lc code=start
class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &matrix)
    {
        if (matrix.empty())
            return vector<vector<int>>();
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> res(m, vector<int>(n, -1));
        queue<pair<int, int>> que;

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    res[i][j] = 0;
                    que.push({i, j});
                }
            }
        }

        int relaPos[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while (!que.empty())
        {
            auto cur = que.front();
            que.pop();
            for (int i = 0; i < 4; ++i)
            {
                int ni = cur.first + relaPos[i][0];
                int nj = cur.second + relaPos[i][1];
                if (ni >= 0 && ni < m && nj >= 0 && nj < n && res[ni][nj] < 0)
                {
                    res[ni][nj] = res[cur.first][cur.second] + 1;
                    que.push({ni, nj});
                }
            }
        }

        return res;
    }
};
// @lc code=end
