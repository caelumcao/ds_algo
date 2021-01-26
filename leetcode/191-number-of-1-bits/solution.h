/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n)
        {
            count++;
            n &= (n - 1);
        }
        return count;
    }
};
// @lc code=end

class Solution1
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        for (int i = 0; i < 32; ++i)
            if ((n >> i) & 1)
                count++;
        return count;
    }
};