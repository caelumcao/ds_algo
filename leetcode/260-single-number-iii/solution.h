/*
 * @lc app=leetcode.cn id=260 lang=cpp
 *
 * [260] 只出现一次的数字 III
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int64_t diff = 0;
        for (auto &v : nums)
            diff ^= v; // a^b的值
        diff &= -diff; // 最后一个1

        vector<int> res(2, 0);
        for (auto &v : nums)
        {
            if (v & diff)
                res[0] ^= v;
            else
                res[1] ^= v;
        }
        return res;
    }
};
// @lc code=end

class Solution1
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int64_t diff = 0;
        for (auto &v : nums)
            diff ^= v;                     // a^b的值
        diff = (diff & (diff - 1)) ^ diff; // 最后一个1

        vector<int> res(2, 0);
        for (auto &v : nums)
        {
            if (v & diff)
                res[0] ^= v;
            else
                res[1] ^= v;
        }
        return res;
    }
};
