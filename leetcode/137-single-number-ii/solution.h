/*
 * @lc app=leetcode.cn id=137 lang=cpp
 *
 * [137] 只出现一次的数字 II
 */
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int once = 0;
        int twice = 0;
        for (auto &v : nums)
        {
            once = (once ^ v) & ~twice;
            twice = (twice ^ v) & ~once;
        }
        return once;
    }
};
// @lc code=end

class Solution1
{
public:
    int singleNumber(vector<int> &nums)
    {
        int res = 0;
        for (int i = 0; i < 32; ++i)
        {
            int sum = 0;
            for (auto &v : nums)
                sum += (v >> i) & 1;
            res |= (sum % 3) << i;
        }
        return res;
    }
};