/*
 * @lc app=leetcode.cn id=132 lang=cpp
 *
 * [132] 分割回文串 II
 */

#include <string>
#include <vector>
using namespace std;

// 两层动态规划

// @lc code=start
class Solution
{
public:
    int minCut(string s)
    {
        int n = s.size();
        vector<vector<bool>> f(n, vector<bool>(n, true));
        vector<int> cut(n, 0);

        for (int i = n - 1; i >= 0; --i)
            for (int j = i + 1; j < n; ++j)
                f[i][j] = f[i + 1][j - 1] && (s[i] == s[j]);

        for (int i = 0; i < n; ++i)
        {
            int mincut = f[0][i] ? 0 : n;
            for (int j = 1; j <= i; ++j)
                if (f[j][i] && cut[j - 1] < mincut)
                    mincut = cut[j - 1] + 1;
            cut[i] = mincut;
        }

        return cut[n - 1];
    }
};
// @lc code=end
