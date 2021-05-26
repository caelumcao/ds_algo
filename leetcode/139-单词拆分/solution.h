/*
 * @lc app=leetcode.cn id=139 lang=cpp
 *
 * [139] 单词拆分
 */

#include <string>
#include <vector>
using namespace std;

// 动态规划

// @lc code=start
class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        if (s.empty())
            return true;

        int n = s.size();
        vector<bool> flag(n, false);
        flag[0] = true;

        for (int i = 0; i < n; ++i)
        {
            if (!flag[i])
                continue;
            for (auto &word : wordDict)
            {
                int matched = true;
                int wordlen = word.size();
                for (int j = 0; j < wordlen; ++j)
                {
                    if (i + j >= n || s[i + j] != word[j])
                    {
                        matched = false;
                        break;
                    }
                }

                if (!matched)
                    continue;

                int end = i + wordlen;
                if (end >= n)
                    return true;
                else
                    flag[end] = true;
            }
        }

        return false;
    }
};
// @lc code=end
