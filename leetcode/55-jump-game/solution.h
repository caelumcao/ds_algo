/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        if (nums.empty())
            return false;

        int maxpos = 0, end = nums.size() - 1;
        for (int i = 0; i <= maxpos; ++i)
        {
            int tempos = i + nums[i];
            if (tempos > maxpos)
                maxpos = tempos;
            if (maxpos >= end)
                return true;
        }
        return false;
    }
};
// @lc code=end

// 这里使用了贪心算法，动态规化时间复杂度较高