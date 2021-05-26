/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2)
            return n;
        int pre = 1, cur = 2;
        for (int i = 3; i <= n; ++i)
        {
            int res = pre + cur;
            pre = cur;
            cur = res;
        }

        return cur;
    }
};
// @lc code=end

// 这道题还有几种数学解法，可以看官方题解