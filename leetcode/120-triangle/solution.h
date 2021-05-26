/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */

#include <vector>
#include <iostream>
using namespace std;

// @lc code=start
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        if (triangle.empty())
            return 0;

        int n = triangle.size();
        vector<int> minimum(n);

        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = 0; j < triangle[i].size(); ++j)
            {
                if (i >= n - 1)
                    minimum[j] = triangle[i][j];
                else
                    minimum[j] = triangle[i][j] + (minimum[j] < minimum[j + 1] ? minimum[j] : minimum[j + 1]);
            }
        }
        return minimum[0];
    }
};
// @lc code=end

class Solution_dp_n2
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        if (triangle.empty())
            return 0;

        int n = triangle.size();
        vector<vector<int>> minimum(n, vector<int>(n));

        for (int i = n - 1; i >= 0; --i)
        {
            for (int j = 0; j < triangle[i].size(); ++j)
            {
                if (i >= n - 1)
                    minimum[i][j] = triangle[i][j];
                else
                    minimum[i][j] = triangle[i][j] + (minimum[i + 1][j] < minimum[i + 1][j + 1] ? minimum[i + 1][j] : minimum[i + 1][j + 1]);
            }
        }
        return minimum[0][0];
    }
};

//time limit
class Solution_dfs
{
public:
    int dfs(const vector<vector<int>> &triangle, int i, int j)
    {
        if (i + 1 >= triangle.size())
            return triangle[i][j];
        int left = dfs(triangle, i + 1, j);
        int right = dfs(triangle, i + 1, j + 1);
        return triangle[i][j] + (left < right ? left : right);
    }

    int minimumTotal(vector<vector<int>> &triangle)
    {
        if (triangle.empty())
            return 0;
        return dfs(triangle, 0, 0);
    }
};