/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        long long ans = 1;
        for (int x = m, y = 1; y < n; ++x, ++y)
            ans = ans * x / y;
        return ans;
    }
};
// @lc code=end

// 动态规划空间复杂度n
class Solution_dp_n
{
public:
    int uniquePaths(int m, int n)
    {
        vector<int> path(n);
        for (int i = 0; i < n; ++i)
            path[i] = 1;
        for (int i = 1; i < m; ++i)
            for (int j = 1; j < n; ++j)
                path[j] = path[j - 1] + path[j];
        return path[n - 1];
    }
};

// 动态规划空间复杂度n^2
class Solution_dp_n2
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> path(m, vector<int>(n));
        for (int i = 0; i < m; ++i)
            path[i][0] = 1;
        for (int i = 0; i < n; ++i)
            path[0][i] = 1;
        for (int i = 1; i < m; ++i)
            for (int j = 1; j < n; ++j)
                path[i][j] = path[i - 1][j] + path[i][j - 1];
        return path[m - 1][n - 1];
    }
};

// 直接计算，有越界问题，方法有问题
class Solution_math
{
public:
    int uniquePaths(int m, int n)
    {
        --m;
        --n;
        int numerator = 1;
        for (int i = 0; i < n; ++i)
            numerator *= (m + n - i);
        int denominator = 1;
        for (int i = 0; i < n; ++i)
            denominator *= (n - i);
        return numerator / denominator;
    }
};