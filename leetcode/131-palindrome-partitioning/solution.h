/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

#include <string>
#include <vector>
using namespace std;

// 回溯+动态规则

// @lc code=start
class Solution
{
public:
    int n;
    vector<string> ans;
    vector<vector<bool>> f;
    vector<vector<string>> res;

    void dfs(const string &s, int i)
    {
        if (i == n)
        {
            res.push_back(ans);
            return;
        }

        for (int j = i; j < n; ++j)
        {
            if (f[i][j])
            {
                ans.push_back(s.substr(i, j - i + 1));
                dfs(s, j + 1);
                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        n = s.size();
        f.assign(n, vector<bool>(n, true));

        for (int i = n - 1; i >= 0; --i)
            for (int j = i + 1; j < n; ++j)
                f[i][j] = f[i + 1][j - 1] && (s[i] == s[j]);

        dfs(s, 0);
        return res;
    }
};
// @lc code=end
