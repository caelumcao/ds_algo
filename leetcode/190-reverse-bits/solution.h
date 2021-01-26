/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */

#include <stdint.h>

// @lc code=start
class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t res = 0;
        for (int i = 0; i < 32; ++i)
        {
            res = res | (n & 1 << i) >> i << (31 - i);
        }
        return res;
    }
};
// @lc code=end
